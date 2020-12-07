#include "gen.h"

vector<int> genPwd(unsigned int length,
		   vector<int> frequency, int total)
{
  vector<int> pwd;

  unsigned int ch_num,
    threshold,
    sum;
  
  for (unsigned int i = 0; i < length; i++)
    {
      ch_num = 0;
      threshold = rand() % total;
      sum = 0;
      for (; ch_num < frequency.size(); ch_num++)
	{
	  sum += frequency[ch_num];
	  if (sum >= threshold)
	    break;
	}
	
      pwd.push_back(ch_num);
    }
  return pwd;
}

string compile(vector<int> raw)
{
  string pwd = "";
  
  for (unsigned int i = 0; i < raw.size(); i++)
    {
      pwd += (char) ((int)'a' + raw[i]);
    }
  return pwd;
}

vector<int> load(string filename)
{
  vector<int> frequency;

  fstream file;
  string value;
  file.open(filename, fstream::in);

  if (!file.is_open())
    {
      exit(1);
    }

  while (getline(file, value))
    {
      frequency.push_back(atoi(value.c_str()));
    }
  
  file.close();
  return frequency;
}

void save(string filename, vector<int> frequency)
{
  fstream file;
  string value;
  file.open(filename, fstream::out);
  
  if (!file.is_open())
    {
      exit(1);
    }
  
  for (int i : frequency)
    {
      value = to_string(i);
      file.write(value.c_str(), value.size());
      file.put('\n');
    }
  
  file.close();
}
