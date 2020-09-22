#include <iostream>
#include <fstream>
#include<math.h>

using namespace std;

class DNA{

public:
  DNA();
  int Sum(string filename);
  float Mean(string filename);
  float Var(string filename);
  float Dev(string filename);
  string Freq(string filename);
  string biFreq(string filename);
  string Same(string filename);


};
