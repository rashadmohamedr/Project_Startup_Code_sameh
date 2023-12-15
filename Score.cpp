#include "Score.h"

Score::Score()
{
	score = 0;
}

void Score::setScore()
{
	score += 1;
}

int Score::getScore()
{
	return score;
}
