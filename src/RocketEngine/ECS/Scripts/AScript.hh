#pragma once

#include <type_traits>

namespace rocketengine::ecs
{
    class GameObject;

    class AScript
    {
    private:
        bool enabled{true};

    protected:
        AScript() noexcept = default;

    public:
        AScript(AScript const& rhs) noexcept = default;
        AScript(AScript&& rhs) noexcept = default;

        virtual ~AScript() noexcept = default;

        AScript& operator=(AScript const& rhs) noexcept = default;
        AScript& operator=(AScript&& rhs) noexcept = default;

    public:
        [[nodiscard]] bool isEnabled() const noexcept;
        void setEnabled(bool value) noexcept;

    public:
        /**
         * @brief awake() is called when the script instance is being loaded.
         *
         */
        virtual void awake() noexcept;

        /**
         * @brief start() is called on the frame when a script is enabled just before any of the update() methods are called the
         * first time.
         *
         */
        virtual void start() noexcept;

        /**
         * @brief update() is called once per frame.
         *
         */
        virtual void update() noexcept;

        /**
         * @brief lateUpdate() is called once per frame, after update().
         *
         */
        virtual void lateUpdate() noexcept;

        /**
         * @brief onCollisionEnter() is called when another collider makes contact with this object's collider.
         *
         * @param other A reference to the GameObject with which a collision occurred.
         */
        virtual void onCollisionEnter(GameObject& other) noexcept;

        /**
         * @brief onCollisionStay() is called once per frame for every colliders that make contact with this object's collider.
         *
         * @param other A reference to the GameObject with which a collision occurred.
         */
        virtual void onCollisionStay(GameObject& other) noexcept;

        /**
         * @brief onCollisionExit() is called when another collider stops making contact with this object's collider.
         *
         * @param other A reference to the GameObject with which a collision occurred.
         */
        virtual void onCollisionExit(GameObject& other) noexcept;

        /**
         * @brief onTriggerEnter() is called when another object enters a trigger collider attached to this object.
         *
         * @param other A reference to the GameObject with which a trigger occurred.
         */
        virtual void onTriggerEnter(GameObject& other) noexcept;

        /**
         * @brief onCollisionStay() is called once per frame for every colliders that make contact with this object's trigger.
         *
         * @param other A reference to the GameObject with which a trigger occurred.
         */
        virtual void onTriggerStay(GameObject& other) noexcept;

        /**
         * @brief onTriggerEnter() is called when another object exits a trigger collider attached to this object.
         *
         * @param other A reference to the GameObject with which a trigger occurred.
         */
        virtual void onTriggerExit(GameObject& other) noexcept;
    };

    template <typename T>
    concept ScriptType = std::is_base_of_v<AScript, T>;
} // namespace rocketengine::ecs
