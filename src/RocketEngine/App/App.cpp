#include <chrono>
#include <iostream>
#include <thread>

#include "RocketEngine/App/App.hh"

namespace rocketengine::app
{
    App::App(std::string_view _name, Arguments&& arguments, AppConfig const& app_config) noexcept:
        name{_name}, arguments{arguments}, app_config{app_config}, previous_frame_timepoint{std::chrono::steady_clock::now()}
    {
    }

    std::string const& App::getName() const noexcept
    {
        return this->name;
    }

    Arguments const& App::getArguments() const noexcept
    {
        return this->arguments;
    }

    AppConfig const& App::getAppConfig() const noexcept
    {
        return this->app_config;
    }

    void App::run() noexcept
    {
        std::cout << "Application '" << this->name << "' starting to run" << std::endl;

        std::size_t frame_count = 0;

        this->previous_frame_timepoint = std::chrono::steady_clock::now();

        auto const start_time = std::chrono::steady_clock::now();

        while (true) {
            frame_count += 1;
            std::cout << "---------------------------------------" << std::endl;
            std::cout << "Application running -> frame count: " << frame_count << std::endl;
            waitUntilNextFrame();

            using double_secs = std::chrono::duration<double, std::chrono::seconds::period>;
            double const elapsed_time_in_seconds = static_cast<double>(
                std::chrono::duration_cast<double_secs>(std::chrono::steady_clock::now() - start_time).count());

            std::cout << "Running since: " << elapsed_time_in_seconds << " seconds" << std::endl;

            if (frame_count == 60)
                break;
        }
    }

    void App::waitUntilNextFrame() noexcept
    {
        auto const current_timepoint = std::chrono::steady_clock::now();

        using double_secs = std::chrono::duration<double, std::chrono::seconds::period>;

        double const delta_time_in_seconds = static_cast<double>(
            std::chrono::duration_cast<double_secs>(current_timepoint - this->previous_frame_timepoint).count());

        double const frame_time_in_seconds = 1. / static_cast<double>(this->app_config.fps);

        std::cout << "Frame time: " << frame_time_in_seconds << " seconds" << std::endl;
        std::cout << "Elapsed time: " << delta_time_in_seconds << " seconds" << std::endl;
        if (delta_time_in_seconds < frame_time_in_seconds) {
            double const sleep_time_in_seconds = frame_time_in_seconds - delta_time_in_seconds;
            double const sleep_time_in_microseconds = sleep_time_in_seconds * 1'000'000.;

            std::chrono::microseconds const sleep_time{static_cast<std::chrono::microseconds::rep>(sleep_time_in_microseconds)};

            std::cout << "Sleeping for " << sleep_time_in_seconds << " seconds" << std::endl;
            std::cout << "Sleeping for " << sleep_time_in_microseconds << " microseconds" << std::endl;
            std::this_thread::sleep_for(sleep_time);
        }

        this->previous_frame_timepoint = std::chrono::steady_clock::now();
    }

} // namespace rocketengine::app
