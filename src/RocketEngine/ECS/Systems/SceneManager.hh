#pragma once

#include <memory>
#include <vector>

#include "RocketEngine/ECS/Systems/Scene.hh"

namespace rocketengine::ecs
{
    class SceneManager
    {
    private:
        std::vector<std::unique_ptr<Scene>> scenes;

    private:
        SceneManager() noexcept = default;

    public:
        SceneManager(SceneManager const& rhs) noexcept = delete;
        SceneManager(SceneManager&& rhs) noexcept = delete;

        ~SceneManager() noexcept = default;

        SceneManager& operator=(SceneManager const& rhs) noexcept = delete;
        SceneManager& operator=(SceneManager&& rhs) noexcept = delete;

    public:
        static SceneManager& getInstance() noexcept;

    friend std::unique_ptr<SceneManager> std::make_unique<SceneManager>();
    };
} // namespace rocketengine::ecs
