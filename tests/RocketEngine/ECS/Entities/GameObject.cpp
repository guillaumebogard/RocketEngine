#include <gtest/gtest.h>

#include <RocketEngine/ECS/Entities/GameObject.hpp>

// NOLINTNEXTLINE
TEST(TestGameObject, Constructor)
{
    rocketengine::ecs::GameObject obj1{"Dummy"};

    EXPECT_EQ(1, 1);
}
