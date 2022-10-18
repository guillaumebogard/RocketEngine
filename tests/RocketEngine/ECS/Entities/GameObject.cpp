#include "RocketEngine/ECS/Components/SpriteRenderer.hh"
#include "RocketEngine/ECS/Components/Transform.hh"
#include <gtest/gtest.h>

#include <RocketEngine/ECS/Components.hh>
#include <RocketEngine/ECS/Entities/GameObject.hpp>

// NOLINTNEXTLINE
TEST(GameObject, hasComponent_TransformOnCreate)
{
    rocketengine::ecs::GameObject dummy{"Dummy"};

    EXPECT_TRUE(dummy.hasComponent<rocketengine::ecs::Transform>());
}

// NOLINTNEXTLINE
TEST(GameObject, addComponent_SpriteRenderer)
{
    rocketengine::ecs::GameObject dummy{"Dummy"};

    EXPECT_FALSE(dummy.hasComponent<rocketengine::ecs::SpriteRenderer>());

    dummy.addComponent<rocketengine::ecs::SpriteRenderer>();

    EXPECT_TRUE(dummy.hasComponent<rocketengine::ecs::SpriteRenderer>());
}

// NOLINTNEXTLINE
TEST(GameObject, removeComponent_JustAdded)
{
    rocketengine::ecs::GameObject dummy{"Dummy"};

    EXPECT_TRUE (dummy.hasComponent<rocketengine::ecs::Transform>());
    EXPECT_FALSE(dummy.hasComponent<rocketengine::ecs::SpriteRenderer>());

    dummy.addComponent<rocketengine::ecs::SpriteRenderer>();

    EXPECT_TRUE(dummy.hasComponent<rocketengine::ecs::Transform>());
    EXPECT_TRUE(dummy.hasComponent<rocketengine::ecs::SpriteRenderer>());

    dummy.removeComponent<rocketengine::ecs::SpriteRenderer>();

    EXPECT_TRUE (dummy.hasComponent<rocketengine::ecs::Transform>());
    EXPECT_FALSE(dummy.hasComponent<rocketengine::ecs::SpriteRenderer>());
}
