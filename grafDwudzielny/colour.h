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

/**Typ wyliczeniowy enum wykorzystywany jest do trzymania kolor�w s�u��cych do pokolorowania wierzcho�k�w grafu
*/
enum colour {
	gray = 0, ///< Kolor szary
	red = 1, ///< Kolor czerwony
	blue = -1 ///< Kolor niebieski
};

#endif // !colour_h