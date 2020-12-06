#pragma once

#include <string>
#include <vector>
#include <fstream>

using std::vector;
using std::string;
using std::fstream;
using std::to_string;

vector<int> genPwd(unsigned int length, vector<int> frequency, int total);
string compile(vector<int> raw);

vector<int> load(string filename);
void save(string filename, vector<int> frequency);
