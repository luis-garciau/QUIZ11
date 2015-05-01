\\Luis García Ulloa A01630685
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void check_banana(string file){
  int num = 0;
  ifstream infile(file.c_str());
  infile.is_open();
  string line;
  string plantain("banana");
  if(infile.good() == true){
    while (getline (infile, line)){
      transform(line.begin(), line.end(), line.begin(), :: tolower);
      if(line.find(plantain)!=string::npos){
      num++;
      }
    }
  }

  cout << "The program has found " << num << " bananas.";

}

int main(){
  string bane;
  cout << endl;
  cout << "This program tells you how many times `banana´ appears in the file." << endl;
  cout << endl;
  cout << "Please introduce the name of the file in .txt: ";
  cin >> bane;
  cout << endl;
  check_banana(bane);
  cout << endl;
  return 0;
}
