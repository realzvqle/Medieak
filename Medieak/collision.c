#include "collision.h"



void CheckCollision(Rectangle players, Rectangle plats, vars* player) {
	
	if(CheckCollisionRecs(players, plats)) {

		player->y -= 0.3;
		player->isGrounded = true;
		DrawText("The Player is on the Platform", 10, 70, 30, GREEN);


		



	}
	else {
		player->isGrounded = false;
		DrawText("The Player is NOT on the Platform", 10, 70, 30, RED);
	}

	

}
