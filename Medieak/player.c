#include "player.h"



void StartPlayer(vars* player, vars* window) {
	player->x = window->x / 2;
	player->y = window->y / 2;
	player->sizeX = 30;
	player->sizeY = 30;
	
	//PlayerControl(player);


	

}

Rectangle DrawPlayer(vars* player, vars* window) {

	player->y += 0.3f;
	//char xS[BUFSIZE];


	Rectangle players = { (int)player->x, (int)player->y, (int)player->sizeX, (int)player->sizeY };

	DrawRectangleRec(players, BLUE);


	// DEBUG
	char xS[BUFSIZE];
	char yS[BUFSIZE];
	sprintf(yS, "%f", player->y);
	DrawText(yS, 10, 10, 20, WHITE);
	sprintf(xS, "%f", player->x);
	DrawText(xS, 10, 40, 20, WHITE);

	//DrawFPS(10, 30);

	if (player->y >= 700 || player->y <= -700) {
		player->x = window->x / 2;
		player->y = window->y / 2;
	}

	return players;
	

}

void PlayerControl(vars* player) {

	if (IsKeyDown(KEY_W) && player->isGrounded) {

		for (int i = 0; i < 1000; i++) {
			player->y -= 100 * GetFrameTime();

		}
		

	}
	if (IsKeyDown(KEY_A)) player->x -= 400 * GetFrameTime();
	if (IsKeyDown(KEY_D)) player->x += 400 * GetFrameTime();

}


