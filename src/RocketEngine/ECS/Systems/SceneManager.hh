#pragma once

#include <memory>
#include <vector>

#include "RocketEngine/ECS/Entities/GameObject.hpp"
#include "RocketEngine/ECS/Systems/Scene.hh"

namespace rocketengine::ecs
{
    class SceneManager
    {
    private:
        std::vector<std::unique_ptr<Scene>> scenes;
        std::vector<std::unique_ptr<GameObject>> prefabs;

        Scene* active_scene{nullptr};

    private:
        SceneManager() noexcept = default;

    public:
        SceneManager(SceneManager const& rhs) noexcept = delete;
        SceneManager(SceneManager&& rhs) noexcept = delete;

        ~SceneManager() noexcept = default;

        SceneManager& operator=(SceneManager const& rhs) noexcept = delete;
        SceneManager& operator=(SceneManager&& rhs) noexcept = delete;

    private:
        static SceneManager& getInstance() noexcept;

    public:

        /**
         * @brief Get the active scene
         * 
         * @return Scene& The active scene
         */
        static Scene& getActiveScene();

    friend std::unique_ptr<SceneManager> std::make_unique<SceneManager>();
    };
} // namespace rocketengine::ecs
