#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "gen.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::generate;

void init(vector<int> &frequency);

int main(int argc, char *argv[])
{
  srand(time(NULL));
  
  unsigned int length = 16;
  if (argc >= 2)
    length = atoi(argv[1]);
  
  unsigned int rows = 1;
  if (argc >= 3)
    rows = atoi(argv[2]);

  unsigned int cols = 1;
  if (argc >= 4)
    cols = atoi(argv[3]);
  
  vector<int> pwd_raw;
  int total = 0;
  vector<int> frequency;
  
  frequency = load("data.txt");

  for (int i : frequency)
    total += i;

  cout << "\n";
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	  pwd_raw = genPwd(length, frequency, total);      
	  cout << "  " << compile(pwd_raw);
	}
      cout << "\n";
    }
  cout << "\n";
  return (bool) cout;
}
