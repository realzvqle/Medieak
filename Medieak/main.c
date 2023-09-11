#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "headers.h"
#include "vars.h"






int main() {
	vars window;
	vars player;
	vars plat;
	StartWindow(&window);
	InitWindow((int)window.x, (int)window.y, window.name);
	StartPlayer(&player, &window);
	player.isGrounded = false;
	

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);
		Rectangle players = DrawPlayer(&player, &window);
		Rectangle plats = StartPlat(&plat, &window);
		CheckCollision(players, plats, &player);
		PlayerControl(&player);
		
		EndDrawing();

	}




	CloseWindow();

}