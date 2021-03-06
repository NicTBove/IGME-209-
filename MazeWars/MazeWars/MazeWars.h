// Authors: Rebecca Brown and Nic Bove
// IGME 209.05
// Project 1 - Part 1
//

#pragma once

#ifdef MAZEWARS_EXPORTS
#define MAZEWARS_API __declspec(dllexport)
#else
#define MAZEWARS_API __declspec(dllimport)
#endif

// Returns a string that has both team membeers' names.
// Have the C string value return both team member names.
// There is no defined format for this.
__declspec(dllexport) 
char* GetTeam();

// Sets the maze data from the main program into the DLL.
// Save the data into a variable in the DLL. Use this data
// for the GetMaze function
__declspec(dllexport)
void SetMaze(const int** data, int width, int height);

//Gets the maze data from the DLL. Return the maze data 
// that was passed in using the SetMaze function, and the 
// width/height using the references to the arguments.
__declspec(dllexport)
int** GetMaze(int& width, int& height);

// Returns the next x/y position to move to. for this
// first part, save a llist of x and y values (at least 10)
// and then keep track of which is your current location.
// Return those variables for the current position.
__declspec(dllexport)
void GetNextPosition(int& xpos, int& ypos);

// Sets the starting location for the player. Save the x
// and y values for the starting location.
__declspec(dllexport)
void SetStart(int xpos, int ypos);

// Gets the starting location for the player. Return the 
// saved x and y starting locations. If the x and y locations 
// for the start have not been saved yet, then return -1 for both.
__declspec(dllexport)
void GetStart(int& xpos, int& yspos);

// Sets the ending location for the player. Save the x and 
// y values for the ending location.
__declspec(dllexport)
void SetEnd(int xpos, int ypos);

// Gets the ending location for the player. Return the saved 
// x and y end locations. If the x and y locations for the end 
// have not been saved yet, then return -1 for both.
__declspec(dllexport)
void GetEnd(int& xpos, int&ypos);