#pragma once
#include <string>

class Map
{
public:

	Map();   //constructor
	~Map();  //deconstructor

	static void LoadMap(std::string path, int sizeX, int sizeY);

private:


};
