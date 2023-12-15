#include "Paddle.h"
#include <iostream>
using namespace std;
paddle::paddle(int r_width, int r_height, game* r_pGame):drawable(paddlePlace, r_width, r_height, r_pGame) {
	paddlePlace.x = 600-(200/2);
	paddlePlace.y = 480;
	dir = 1,step=1;
}
void paddle::draw() const {
	window* pwind = pGame->getWind();
	pwind->SetPen(BLACK);
	pwind->SetBrush(BLACK);
	cout << config.paddleWidth << " " << paddlePlace.x << " " << paddlePlace.y << " " << paddlePlace.x + 150 << " " << paddlePlace.y + 40;
	pwind->DrawRectangle(paddlePlace.x, paddlePlace.y, paddlePlace.x + 200, paddlePlace.y + 40);
}

bool paddle::windowCollision()
{
	if (paddlePlace.x > 0 && (paddlePlace.x + 200) < 1200)
		return true;
	else return false;
}

void paddle::movePaddle()
{
	if (windowCollision()) {
		//move as you wish
		paddlePlace.x += dir * step;
	}
	else {
		//reverse direction
		dir *= -1;
		paddlePlace.x += dir * step;
	}
}
