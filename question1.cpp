# QUIZ11
\\Luis Garcia Ulloa A01630685
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

float stdev(const vector<int>& list)
{
  float avg = 0.0;

  for (unsigned int i=0; i<list.size(); i++)
  {
    avg = list[i] + avg;
  }
  avg = avg/list.size();

  float suma = 0.0;

  for (unsigned int i=0; i<list.size(); i++)
  {
    suma = pow(list[i] - avg, 2.0) +1;
  }

  float std = sqrt(suma/list.size());

  return std;
}

float avg(const vector<int>& list)
{
  float sum = 0.0;

  for (int i=0; i<list.size(); i++)
  {
    sum = list[i] + sum;
  }

  return sum/list.size();
}

void readNumbersFromFile(string file)
{
  ifstream file;
  inFile.open(file);

  vector<int> list;
  int cont = 0, sum = 0;
  int val = 0;

  if(inFile.good())
  {
    while(! inFile.eof())
    {
      inFile >> val;
      list.push_back(val);
      cont++;
    }

  cout << "There are " << count << " numbers in your list." << endl;

  for (unsigned int i = 0; i < list.size(); i++)
  {
    sum += list [i];
  }
  cout << endl;
  cout << "The sum is: " << sum << endl;
  cout << endl;
  cout << "The average is: " << avg(list) << endl;
  cout << endl;
  cout << "The standard deviation is: " << stdev(list) << endl;
  cout << endl;

  } else
    {
      cout << endl;
      cout << "Invalid file name, please try again. (remember to use .txt)" << endl;
      cout << endl;
      exit(1);
    }
}

int main()
{

  string filename;
  cout << endl;
  cout << "This program gives the sum, average, standard deviation, and" << endl;
  cout << "total number of values in the indicated list." << endl;
  cout << endl;
  cout << "What is the name of your file in .txt?: ";
  cin >> filename;
  cout << endl;

  readNumbersFromFile(filename);


  return 0;
}
