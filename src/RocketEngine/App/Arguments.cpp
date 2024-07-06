#include "RocketEngine/App/Arguments.hh"

namespace rocketengine::app
{
    Arguments getArguments(int argc, char* const argv[]) noexcept // NOLINT
    {
        Arguments arguments;

        arguments.assign(argv, argv + argc);
        return arguments;
    }
} // namespace rocketengine::app
