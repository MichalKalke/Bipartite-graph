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

/**Funkcja sprawdzaj¹ca czy po³¹czone wierzcho³ki maj¹ ró¿ne kolory
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
*/
int checkIfIsGood(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja pomagaj¹ca funkcji paintVertices pokolorowaæ wierzcho³ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
@param position Zawiera informacjê, na której pozycji w wektorze par, aktualnie siê znajdujemy
*/
void paintSecondVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position);
/**Funkcja pomagaj¹ca funkcji paintVertices pokolorowaæ wierzcho³ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
@param position Zawiera informacjê, na której pozycji w wektorze par, aktualnie siê znajdujemy
*/
void paintFirstVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position);
/**Funkcja koloruj¹ca wierzcho³ki grafu
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
*/
void paintVertices(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja sprawdzaj¹ca czy wszystkim wierzcho³kom zosta³ zmieniony kolor z koloru szarego
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
*/
void checkIfVertexColoured(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**G³ówna funkcja programu, wywo³uj¹ca funkcjê koloruj¹c¹ wierzcho³ki oraz funckjê sprawdzaj¹c¹ czy po³¹czone wierzcho³ki grafu maj¹ ró¿ne kolory
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
*/
bool isGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab);
/**Funkcja, która na podstawie funkcji isThisGraphBiparipate decyduje jak¹ funkcjê wypisania do pliku wybraæ
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
@param output Zawiera nazwê pliku wyjœciowego
*/
void decideIsGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output);

#endif