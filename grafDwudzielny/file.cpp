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

void addToVectorOfPairs(vector<pair<int, int>>& vertices, int vertexOne, int vertexTwo) {
    vertices.push_back(make_pair(vertexOne, vertexTwo));
}

void addToMap(map<int, int>& colourTab, int vertexOne, int vertexTwo) {
    colourTab.insert(pair<int, int>(vertexOne, gray));
    colourTab.insert(pair<int, int>(vertexTwo, gray));
}

void fromFile(vector <pair<int, int>>& vertices, map<int, int>& colourTab, string input) {
    fstream file;
    file.open(input, ios::in);
    if (!file.good()) {
        cout << "Brak dostepu albo plik nie istnieje!" << endl;
    }
    else {
        cout << "Uzyskano dostep do pliku" << endl;
        int vertexOne, vertexTwo;
        while (!file.eof()) {
            file >> vertexOne >> vertexTwo;
            addToVectorOfPairs(vertices, vertexOne, vertexTwo);
            addToMap(colourTab, vertexOne, vertexTwo);
        }
    }file.close();
}

void toFileBiparipateGraph(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output) {
    string inscription = "Graf jest dwudzielny";
    fstream file;
    file.open(output, fstream::app | fstream::out);
    if (file.good() == true) {
        for (int i = 0; i < vertices.size(); i++) {
            file << vertices[i].first << " <---> " << vertices[i].second << endl;
        }
        file << inscription << endl << "Grupa 1: ";
        for (auto iter = colourTab.begin(); iter != colourTab.end(); ++iter) {
            if (iter->second == 1) {
                file << iter->first << ", ";
            }
        }
        file << "\nGrupa 2: ";
        for (auto iter = colourTab.begin(); iter != colourTab.end(); ++iter) {
            if (iter->second == -1) {
                file << iter->first << ", ";
            }
        }
    }file.close();
}

void toFileNoBiparipateGraph(vector<pair<int, int>>& vertices, string output) {
    string inscription = "Graf nie jest dwudzielny";
    fstream file;
    file.open(output, fstream::app | fstream::out);
    if (file.good() == true) {
        for (int i = 0; i < vertices.size(); i++) {
            file << vertices[i].first << " <---> " << vertices[i].second << endl;
        }
        file << inscription << endl;
    }file.close();
}