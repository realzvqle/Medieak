#include "platform.h"




Rectangle StartPlat(vars* plat, vars* window) {
	plat->x = window->x / 2 - plat->sizeX / 2;
	plat->y = window->y / 2 + 200;
	plat->sizeX = 2000;
	plat->sizeY = 60;
	Rectangle plat1 = { plat->x, plat->y, plat->sizeX, plat->sizeY};
	DrawRectangleRec(plat1, WHITE);

	return plat1;
}