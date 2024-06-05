﻿#pragma once

#include "entity.h"
#include "game.h"

namespace Game::Entities
{
    class FinishBox : public Entity
    {
        Vector2 position_end;
        Game::GameWorld* game = nullptr;
        Texture2D checkerboard;
        Physics::Object* finish_box;
    public:
        FinishBox(Vector2 start, Vector2 end, Game::GameWorld* game);
        Physics::Object* get_finish_box();
        void update() override;
        void draw() override;
        void on_collision(cpArbiter* arb, cpSpace* space, Entity* entity) override;
    };
}
