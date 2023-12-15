#pragma once
#include "gameConfig.h"
#include "game.h"
#include "collidable.h"
#include "drawable.h"

class paddle:public drawable
{
private:
	point paddlePlace;
	int dir;
	int step;
public:
	paddle(int, int, game* );
	void draw() const;
	bool windowCollision();
	void movePaddle();
};
