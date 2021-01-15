#pragma once

#include "klaidos.h"
#include <iostream>
#include <set>
#include <string>
#include <cctype>

#include <tuple>

#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <chrono>
#include <random>
#include <map>

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
using std::sort;
using std::ifstream;
using std::ofstream;
using std::getline;
using std::ios;
using std::count;
using std::to_string;
using std::chrono::high_resolution_clock;
using std::chrono::duration;
using std::map;

void nuskaitymas(string txtname, vector<string>& eilute, std::multiset<string>& visizodziai);
void irasymas(string name, vector<string> eilute, std::multiset<string> visizodziai);
void irasymasURL(string name, vector<string> eilute);
