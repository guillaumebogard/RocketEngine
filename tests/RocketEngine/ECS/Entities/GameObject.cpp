#include <gtest/gtest.h>

#include <RocketEngine/ECS/Entities/GameObject.hpp>

TEST(TestGameObject, Constructor) {
    rocketengine::ecs::GameObject object{"Dummy"};

    EXPECT_EQ(1, 1);
}
