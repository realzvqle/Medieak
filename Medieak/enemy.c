#include "enemy.h"







void StartEnemy(vars* enemy, vars* player) {

	
	
	srand(time(NULL));
	int x = rand() % 2409;
	enemy->x = GetRandomValue(-1, 1558);
	enemy->y = 3000;
	enemy->sizeX = 20;
	enemy->sizeY = player->sizeY + 5;



}



Rectangle MakeEnemy(vars* enemy, vars* player, int x) {

	enemy->y += 0.5;
	
	Rectangle mainEnemy = { (int)enemy->x, (int)enemy->y, (int)enemy->sizeX, (int)enemy->sizeY };
	DrawRectangleRec(mainEnemy, RED);


	if (enemy->y >= 2000 || enemy->y <= -2000) {
		enemy->x = GetScreenWidth() / 2 - 100;
		enemy->y = GetScreenHeight() / 2 - 100;
	}
	
	if (enemy->x != player->x - 100) {

		if (enemy->x - player->x <= 0) {
			//enemy->x += 300 * GetFrameTime();
		}
		else if (enemy->x - player->x >= 0) {
			//enemy->x -= 300 * GetFrameTime();
		}
		else if (enemy->x - player->x <= 100 || enemy->x - player->x >= -100) {
			enemy->x = enemy->x;

		}

		

	}

	return mainEnemy;
	





}