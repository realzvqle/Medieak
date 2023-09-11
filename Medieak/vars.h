#pragma once

#include <stdbool.h>

#define BUFSIZE 512

typedef struct {
	float x;
	float y;
	float radius;
	float sizeX;
	float sizeY;
	char name[BUFSIZE];
	bool isGrounded;




} vars;