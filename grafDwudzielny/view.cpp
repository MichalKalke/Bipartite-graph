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

void viewHelper() {
	cout << "-------------------------------------------------------------" << endl;
	cout << "			 HELPER	 " << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << endl;
	cout << "		Dostepne przelaczniki: " << endl;
	cout << "'-i'   plik wejsciowy z krawedziami" << endl;
	cout << "'-o'   plik wyjsciowy" << endl;
	cout << "'-h'   helper" << endl;
	cout << "	Jak uzyc przelacznikow?\n ./nazwaProgramu.exe -i plikWejsciowy.txt -o plikWyjsciowy.txt" << endl;
	cout << "-------------------------------------------------------------" << endl;
}
