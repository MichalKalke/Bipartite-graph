// grafDwudzielny.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <queue>
#include <map>
#include "graph.h"
#include "colour.h"
#include "file.h"
#include "view.h"


using namespace std;

int main(int argc, char* argv[])
{
    vector <pair<int, int>> vertices;
    map<int, int> colourTab;
    string output="";
    string argument;

    for (int i = 0; i < argc; i++) {
        
        argument = argv[i];
        if (argument == "-i") {
            fromFile(vertices, colourTab, argv[i+1]);
        }
        else if (argument == "-o") {
            output = argv[i + 1];
        }
        else if (argument == "-h" || argc == 1 || argc <5) {			
			viewHelper();
			return 0;
        }
    }

    if (!output.empty()) {
        decideIsGraphBiparipate(vertices, colourTab, output);
    }

    return 0;
}

