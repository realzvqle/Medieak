#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "headers.h"
#include "vars.h"


#define IMAGE_FILE "icon"





int main() {
	
	vars window;
	vars player;
	vars plat;
	vars enemy;
	int i = 0;
	//SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	StartWindow(&window);
	InitWindow((int)window.x, (int)window.y, window.name);
	StartPlayer(&player, &window);
	player.isGrounded = false;
	StartEnemy(&enemy, &player);

	SetWindowIcon(LoadImage("icon.png"));

	SetExitKey(KEY_Q);
	int p = 0;
	

	while (!WindowShouldClose())
	{
		int x = GetRandomValue(439, 2409);
		BeginDrawing();
		window.x = GetScreenWidth();
		window.y = GetScreenHeight();

		ClearBackground(BLACK);

		if(p == 0) {
			//ToggleFullscreen();
			
			DrawText("Made By zvqle", 10, 10, 30, RED);
			DrawText("MEDIEAK", GetScreenWidth() / 2  - 100, GetScreenHeight() / 2, 50, GREEN);
			DrawText("Press Space To Start", GetScreenWidth() / 2 - 270, GetScreenHeight() / 2 + 200, 50, WHITE);
			//DrawText("You Can't Play If Not FullScreen", GetScreenWidth() / 2 - 600, GetScreenHeight() / 2 + 200, 50, WHITE);
			if (IsKeyDown(KEY_SPACE)) p = 1;
			//if (IsKeyDown(KEY_F)) ToggleFullscreen();
		}
		else if(p != 0) {
			Rectangle players = DrawPlayer(&player, &window, i);
			Rectangle plats = StartPlat(&plat, &window);
			Rectangle enemys = MakeEnemy(&enemy, &player, x);

			CheckCollision(players, plats, enemys, &player, &enemy, x);
			PlayerControl(&player);
			//if (IsKeyDown(KEY_F)) ToggleFullscreen();
			
			i += 0.1 * GetFrameTime();


		}
		EndDrawing();
	}




	CloseWindow();

}