/** @file */
#pragma once
#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <queue>
#include <map>

using namespace std;
/**Funkcja s�u��ca to dodawania wierzcho�k�w pobranych z pliku do wektora par
@param vertices Reprezentuje wektor par
@param vertex1 Zawiera warto�� pierwszego pobranego wierzcho�ka z danego wiersza w pliku
@param vertex2 Zawiera warto�� drugiego pobranego wierzcho�ka z danego wiersza w pliku
*/
void addToVectorOfPairs(vector<pair<int, int>>& vertices, int vertexOne, int vertexTwo);
/**Funkcja dodaj�ca wierzcho�ki pobrane z pliku do mapy kolor�w
@param ColourTab Reprezentuje map� kolor�w
@param vertex1 Zawiera warto�� pierwszego pobranego wierzcho�ka z danego wiersza w pliku
@param vertex2 Zawiera warto�� drugiego pobranego wierzcho�ka z danego wiersza w pliku
*/
void addToMap(map<int, int>& colourTab, int vertexOne, int vertexTwo);
/**Funkcja ta s�u�y do pobierania wierzcho�k�w z pliku i przekazywania ich do funkcji dodaj�cych do wektora par oraz mapy kolor�w
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
@param input Zawiera nazw� pliku wej�ciowego
*/
void fromFile(vector <pair<int, int>>& vertices, map<int, int>& colourTab, string input);
/**Funkcja dodaj�ca do pliku wyj�ciowego informacj�, �e podany graf jest dwudzielny, wypisuje do niego po��czenia wierzcho�k�w oraz dzieli na dwie grupy wierzcho�ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje map� kolor�w
@param output Zawiera nazw� pliku wyj�ciowego
*/
void toFileBiparipateGraph(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output);
/**Funkcja dodaj�ca do pliku wyj�ciowego informacj�, �e podany graf nie jest grafem dwudzielnym, a tak�e wypisuje do niego po��czenia wierzcho�k�w
@param verices Reprezentuje wektor par
@param output Zawiera nazw� pliku wyj�ciowego
*/
void toFileNoBiparipateGraph(vector<pair<int, int>>& vertices, string output);

#endif // !file_h