#pragma once
#include <string>

class Physics
{
public:

private:
	// Sonic Retro SPG Basics

	// Variables
	int xpos; // The X-coordinate of Sonic's center.
	int ypos; // The Y-coordinate of Sonic's center.
	int xsp;  // The speed at which Sonic is moving horizontally.
	int ysp;  // The speed at which Sonic is moving vertically.
	int gsp;  // The speed at which Sonic is moving on the ground.
	int slope;// The current slope factor (slp) value being used.
	int ang;  // Sonic's angle to the ground.

	// Grounded speed constants
	const float acc = 0.046875;   // acceleration
	const float dec = 0.5;        // deceleration
	const float frc = 0.046875;   // friction (same as acc)
	const int top = 6;            // top horizontal speed
	const float slp = 0.125;      // slope factors
	const float slprollup = 0.078125;
	const float slprolldown = 0.3125;
	const float fall = 2.5;       // tolerance ground speed for sticking to walls and ceilings

	// Jumping constants
	const float air = 0.09375;    // air acceleration (2x acc)
	const float jmp = 6.5;        // jump force
	const float knxjmp = 6;       // knuckles' jump force
	const float grv = 0.21875;    // gravity
};