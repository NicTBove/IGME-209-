// Authors: Rebecca Brown and Nic Bove
// IGME 209.05
// Project 1 - Part 1
// MazeWars.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MazeWars.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

static char* team = (char*)"Rebecca Brown and Nic Bove";
static int** maze = NULL;
static int savedWidth = 0;
static int savedHeight = 0;
static int start[] = { -1, -1 };
static int end[] = { -1, -1 };

static int posIndex = 0;
static int pos[10][2] = { -1 };


char* GetTeam()
{
	return team;
}

void SetMaze(const int** data, int width, int height)
{
	savedWidth = width;
	savedHeight = height;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		pos[i][0] = rand() % width;
		pos[i][1] = rand() % height;
	}

	maze = const_cast<int**>(data);
}

int** GetMaze(int& width, int& height)
{
	width = savedWidth;
	height = savedHeight;
	return maze;
}

void GetNextPosition(int& xpos, int& ypos)
{
	xpos = pos[posIndex][0];
	ypos = pos[posIndex][1];

	posIndex++;
}


void SetStart(int xpos, int ypos)
{
	start[0] = xpos;
	start[1] = ypos;
}


void GetStart(int& xpos, int& ypos)
{
	xpos = start[0];
	ypos = start[1];
}


void SetEnd(int xpos, int ypos)
{
	end[0] = xpos;
	end[1] = ypos;
}


void GetEnd(int& xpos, int&ypos)
{
	xpos = end[0];
	ypos = end[1];
}

