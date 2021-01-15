#pragma once

#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
using std::left;
using std::setw;
using std::setfill;
using std::fixed;
using std::setprecision;
using std::ifstream;
using std::ofstream;
using std::getline;
using std::ios;
using std::count;
using std::runtime_error;
using std::numeric_limits;
using std::streamsize;

void nuskaitymas(string txtname, vector<string>& eilute, std::multiset<string>& visizodziai);
void irasymas(string name, vector<string> eilute, std::multiset<string> visizodziai);
void irasymasURL(string name, vector<string> eilute);
