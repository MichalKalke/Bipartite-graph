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

int checkIfIsGood(vector<pair<int, int>>& vertices, map<int, int>& colourTab) {
    for (int i = 0; i < vertices.size(); i++) {
        if (colourTab.find(vertices[i].first)->second == colour::red || colourTab.find(vertices[i].first)->second == colour::blue) {
            if (colourTab.find(vertices[i].first)->second == colourTab.find(vertices[i].second)->second) {
                return -1;
            }
        }
    }
    return 1;
}

void paintSecondVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position) {
    if (colourTab.find(vertices[position].first)->second == red) {
        colourTab.find(vertices[position].second)->second = blue;
    }
    else {
        colourTab.find(vertices[position].second)->second = red;
    }
}

void paintFirstVertex(vector<pair<int, int>>& vertices, map<int, int>& colourTab, int position) {
    if (colourTab.find(vertices[position].second)->second == red) {
        colourTab.find(vertices[position].first)->second = blue;
    }
    else {
        colourTab.find(vertices[position].first)->second = red;
    }
}

void paintVertices(vector<pair<int, int>>& vertices, map<int, int>& colourTab) {
    for (int i = 0; i < vertices.size(); i++) {
        if (colourTab.find(vertices[i].first)->second != gray) {
            if (colourTab.find(vertices[i].second)->second == gray) {
                paintSecondVertex(vertices, colourTab, i);
            }
        }
        if (colourTab.find(vertices[i].second)->second != gray) {
            if (colourTab.find(vertices[i].first)->second == gray) {
                paintFirstVertex(vertices, colourTab, i);
            }
        }
    }
}

void checkIfVertexColoured(vector<pair<int, int>>& vertices, map<int, int>& colourTab) {
	for (auto iter = colourTab.begin(); iter != colourTab.end(); ++iter) {
		if (iter->second == gray) {
			paintVertices(vertices, colourTab);
		}
	}
}

bool isGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab) {

    colourTab.find(vertices[0].first)->second = red;

    paintVertices(vertices, colourTab);
	checkIfVertexColoured(vertices, colourTab);

    if (checkIfIsGood(vertices, colourTab) == -1) {
        return false;
    }
    return true;
}

void decideIsGraphBiparipate(vector<pair<int, int>>& vertices, map<int, int>& colourTab, string output) {
    if (isGraphBiparipate(vertices, colourTab)) {
		toFileBiparipateGraph(vertices, colourTab, output);
    }
    else {
		toFileNoBiparipateGraph(vertices, output);
    }
}