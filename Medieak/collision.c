#include "collision.h"

int i = 0;


void CheckCollision(Rectangle players, Rectangle plats,Rectangle enemys, vars* player, vars* enemy, int x) {


	char wNum[BUFSIZE];

	sprintf(wNum, "%d", i);
	DrawText(wNum, GetScreenWidth() / 2, 10, 50, WHITE);

	
	
	
	if(CheckCollisionRecs(players, plats)) {

		player->y -= 1.0f;
		player->isGrounded = true;
		//DrawText("The Player is on the Platform", 10, 70, 30, GREEN);


		



	}
	else {
		player->isGrounded = false;
		//DrawText("The Player is NOT on the Platform", 10, 70, 30, RED);
	}
	if (CheckCollisionRecs(enemys, plats)){
		    enemy->y -= 0.5;
			enemy->isGrounded = true;
			//DrawText("The Enemy is on the Platform", 10, 100, 30, GREEN);
			


	}
	else {
		    enemy->isGrounded = false;
			//DrawText("The Enemy is NOT on the Platform", 10, 100, 30, RED);
			
	}

	if (CheckCollisionRecs(enemys, players)) {

		enemy->x = GetRandomValue(-1, 1558);
		
		i++;
		
		
	}
	

	

}
