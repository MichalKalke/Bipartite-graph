/** @file */
#pragma once
#pragma once
#ifndef COLOUR_H
#define COLOUR_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <queue>
#include <map>

using namespace std;

/**Typ wyliczeniowy enum wykorzystywany jest do trzymania kolorów s³u¿¹cych do pokolorowania wierzcho³ków grafu
*/
enum colour {
	gray = 0, ///< Kolor szary
	red = 1, ///< Kolor czerwony
	blue = -1 ///< Kolor niebieski
};

#endif // !colour_h