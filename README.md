# 🚀 Rocket Engine

![Build](https://github.com/guillaumebogard/RocketEngine/actions/workflows/build.yml/badge.svg)
![Tests](https://github.com/guillaumebogard/RocketEngine/actions/workflows/tests.yml/badge.svg)

The goal of RocketEngine is to create a simple version of a modern game engine that could be used to create scenes, simulation and automation.

## 🔧 Building the Project

To build the `RocketEngine` project, ensure you are at the root of the repository. You can choose to build the project using the default build system (typically Makefiles) or Ninja. Follow the instructions below based on your preference.

### Using Default Build System (Makefiles)

If you prefer to use the default build system (typically Makefiles), follow these steps:

1. **Build the Project**:
   ```sh
   mkdir -p build && cd build && cmake .. && make
   ```

These commands will create a `build` directory, configure the project, and build the `RocketEngine` library. Ensure you are at the root of the repository before executing these commands.

### Using Ninja

If you prefer to use Ninja, follow these steps:

1. **Install Ninja** (if not already installed):
   - On Ubuntu: `sudo apt-get install ninja-build`
   - On macOS: `brew install ninja`
   - On Windows: Download from the [Ninja GitHub Releases page](https://github.com/ninja-build/ninja/releases) and add it to your PATH.

2. **Build the Project**:
   ```sh
   mkdir -p build && cd build && cmake -G Ninja .. && ninja
   ```

## 🧪 Running Examples to Test the Project

To test the `RocketEngine` project using the provided examples, follow these steps:

1. **Ensure the project is built with examples**: When configuring your project with CMake, enable the `BUILD_EXAMPLES` option. You can do this by adding `-DBUILD_EXAMPLES=ON` to your CMake command. Here is a full example of how to configure and build the project with examples:

   Using the default build system (Makefiles):
   ```sh
   mkdir -p build && cd build && cmake -DBUILD_EXAMPLES=ON .. && make
   ```

   Using Ninja:
   ```sh
   mkdir -p build && cd build && cmake -G Ninja -DBUILD_EXAMPLES=ON .. && ninja
   ```

2. **Navigate to the examples directory**: After building the project, the examples will be available in the `build/examples` directory (or a similar path depending on your build configuration).

3. **Run the examples**: All examples are located in the `examples` directory at the root of the repository. After building, navigate to the `build/examples` directory:

   ```sh
   cd build/examples
   ```

   Then navigate to the specific example directory you want to run, for instance, `ExampleApp`, and execute the example binary:

   ```sh
   cd ExampleApp
   ./example_app
   ```

   Replace `ExampleApp` with the actual name of the example directory and `example_app` with the actual name of the example binary you want to run.

These examples can be referred to and used as a basis for creating your own applications with `RocketEngine`. By following these steps, you can build and run the provided examples to test the various features and functionality of the `RocketEngine` project. This helps ensure that the project components are working correctly.
