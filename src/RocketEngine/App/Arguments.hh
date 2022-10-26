#pragma once

#include <string_view>
#include <vector>

namespace rocketengine::app
{
    using Arguments = std::vector<std::string_view>;

    Arguments getArguments(int argc, char* const argv[]) noexcept; // NOLINT
} // namespace rocketengine::app
