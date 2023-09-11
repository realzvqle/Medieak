#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <raylib.h>
#include <stdio.h>
#include "vars.h"
#include <string.h>
#include <stdbool.h>

void StartWindow(vars* window);
void StartPlayer(vars* player, vars* window);
void PlayerControl(vars* player);
Rectangle DrawPlayer(vars* player, vars* window);
Rectangle StartPlat(vars* platform, vars* window);
void CheckCollision(Rectangle players, Rectangle plats, vars* player);




