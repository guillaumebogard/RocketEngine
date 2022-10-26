#pragma once

#include <chrono>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

#include "RocketEngine/App/AppConfig.hh"
#include "RocketEngine/App/Arguments.hh"

namespace rocketengine::app
{
    class App
    {
    private:
        using FrameTime = std::chrono::steady_clock::time_point;

    private:
        std::string name;
        Arguments arguments;
        AppConfig app_config;

    private:
        FrameTime previous_frame_timepoint;

    protected:
        App(std::string_view _name, Arguments&& arguments, AppConfig const& app_config) noexcept;

    public:
        App(App const& rhs) noexcept = default;
        App(App&& rhs) noexcept = default;

        virtual ~App() noexcept = default;

        App& operator=(App const& rhs) noexcept = default;
        App& operator=(App&& rhs) noexcept = default;

    public:
        [[nodiscard]] std::string const& getName() const noexcept;
        [[nodiscard]] Arguments const& getArguments() const noexcept;
        [[nodiscard]] AppConfig const& getAppConfig() const noexcept;

    public:
        void run() noexcept;

    private:
        void waitUntilNextFrame() noexcept;
    };

    template <typename T>
    concept AppType = std::is_base_of_v<App, T>;

    template <AppType T, typename... Args>
    std::unique_ptr<App> createApp(Args&&... args) noexcept
    {
        return std::make_unique<T>(std::forward<Args>(args)...);
    }
} // namespace rocketengine::app
