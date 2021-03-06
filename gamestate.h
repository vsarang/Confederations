/**
 * @file gamestate.h
 * @author Vikrant Sarang
 * @date May 2015
 */
#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "game.h"

class GameState {
    public:
        Game* game;

        virtual void draw(const float dt) = 0;
        virtual void update(const float dt) = 0;
        virtual void handleInput() = 0;
};

#endif // GAMESTATE_H
