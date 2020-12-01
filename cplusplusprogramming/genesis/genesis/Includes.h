#pragma once
#include <vector>
#include "SFML\System.hpp" // Don't forget to past BIN in the final zip?
#include <SFMLWindow.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <iostream>
#include <string>
#include <Windows.h>

#include <stdio.h>
#include <fstream>

// These were also red on his includes.h
#include <boost/container/stable_vector.hpp>
#include <boost/core/nocopyable.hpp>
#include <boost/ptr_container/ptr_vector.hpp>

typedef sf::Vector2<unsigned short int> Vector2us;
#define VERSION 0.1f

#define SCRIPTSELECTOR_TOKEN "SST"
#define TILEMAPSELECTOR_TOKEN "TMS"
#define PARALLAX_TXTSELECTOR_TOKEN "PTMS"
#define HEIGHTEDITOR_TMS_TOKEN "HTMS"

#ifndef GLOBALS
#define GLOBALS

#endif

