/** @file */
#pragma once
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <queue>
#include <map>

using namespace std;

/**Funkcja sprawdzaj�ca czy po��czone wierzcho�ki maj� r�ne kolory
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
*/
int checkIfIsGood(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja pomagaj�ca funkcji paintVertices pokolorowa� wierzcho�ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
@param position Zawiera informacj�, na kt�rej pozycji w wektorze par, aktualnie si� znajdujemy
*/
void paintSecondVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position);
/**Funkcja pomagaj�ca funkcji paintVertices pokolorowa� wierzcho�ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
@param position Zawiera informacj�, na kt�rej pozycji w wektorze par, aktualnie si� znajdujemy
*/
void paintFirstVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position);
/**Funkcja koloruj�ca wierzcho�ki grafu
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
*/
void paintVertices(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja sprawdzaj�ca czy wszystkim wierzcho�kom zosta� zmieniony kolor z koloru szarego
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
*/
void checkIfVertexColoured(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**G��wna funkcja programu, wywo�uj�ca funkcj� koloruj�c� wierzcho�ki oraz funckj� sprawdzaj�c� czy po��czone wierzcho�ki grafu maj� r�ne kolory
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
*/
bool isGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja, kt�ra na podstawie funkcji isThisGraphBiparipate decyduje jak� funkcj� wypisania do pliku wybra�
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
@param output Zawiera nazw� pliku wyj�ciowego
*/
void decideIsGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output);

#endif