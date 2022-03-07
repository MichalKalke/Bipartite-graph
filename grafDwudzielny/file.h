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
/**Funkcja s³u¿¹ca to dodawania wierzcho³ków pobranych z pliku do wektora par
@param vertices Reprezentuje wektor par
@param vertex1 Zawiera wartoœæ pierwszego pobranego wierzcho³ka z danego wiersza w pliku
@param vertex2 Zawiera wartoœæ drugiego pobranego wierzcho³ka z danego wiersza w pliku
*/
void addToVectorOfPairs(vector<pair<int, int>>& vertices, int vertexOne, int vertexTwo);
/**Funkcja dodaj¹ca wierzcho³ki pobrane z pliku do mapy kolorów
@param ColourTab Reprezentuje mapê kolorów
@param vertex1 Zawiera wartoœæ pierwszego pobranego wierzcho³ka z danego wiersza w pliku
@param vertex2 Zawiera wartoœæ drugiego pobranego wierzcho³ka z danego wiersza w pliku
*/
void addToMap(map<int, int>& colourTab, int vertexOne, int vertexTwo);
/**Funkcja ta s³u¿y do pobierania wierzcho³ków z pliku i przekazywania ich do funkcji dodaj¹cych do wektora par oraz mapy kolorów
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
@param input Zawiera nazwê pliku wejœciowego
*/
void fromFile(vector <pair<int, int>>& vertices, map<int, int>& colourTab, string input);
/**Funkcja dodaj¹ca do pliku wyjœciowego informacjê, ¿e podany graf jest dwudzielny, wypisuje do niego po³¹czenia wierzcho³ków oraz dzieli na dwie grupy wierzcho³ki
@param verices Reprezentuje wektor par
@param ColourTab Reprezentuje mapê kolorów
@param output Zawiera nazwê pliku wyjœciowego
*/
void toFileBiparipateGraph(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output);
/**Funkcja dodaj¹ca do pliku wyjœciowego informacjê, ¿e podany graf nie jest grafem dwudzielnym, a tak¿e wypisuje do niego po³¹czenia wierzcho³ków
@param verices Reprezentuje wektor par
@param output Zawiera nazwê pliku wyjœciowego
*/
void toFileNoBiparipateGraph(vector<pair<int, int>>& vertices, string output);

#endif // !file_h