#include <iostream>
#include <fstream>
#include<math.h>
#include "DNA.h"

using namespace std;

int main(int argc, char** argv){
  string filename;
  char answer;
  cout << "Enter a file name: " << endl;
  cin >> filename;
  DNA *fresh = new DNA();
  ofstream file;
  file.open("Dean.out");
  file << "Dean Nunis" << "\n" << "2324351" << "\n" <<"Sources: " << "\n" << "http://www.cplusplus.com/doc/tutorial/files/" << "\n" << "https://stackoverflow.com/questions/8297070/how-to-return-string-that-contains-string-int-variables"  <<endl;
  file << "The Sum of the length of the DNA strings is: " << fresh ->Sum(filename) << endl;
  file << "The Mean of the length of the DNA strings is: " << fresh ->Mean(filename) << endl;
  file << "The variance of the length of the DNA strings is: " << fresh ->Var(filename) << endl;
  file << "The Standard Deviation of the length of the DNA stings is: " << fresh ->Dev(filename) << endl;
  file << "Here is the relative probability of each nucleotide: " << "\n" << fresh ->Freq(filename) << endl;
  file << "Here is the relative probability of each nucleotide bigram: " << "\n" << fresh ->biFreq(filename) << endl;
  file << fresh ->Same(filename) << endl;
  cout << "would you like to do it again? y/n: " << endl;
  cin >> answer;
  if (answer == 'y'){
    cout << "Enter a file name: " << endl;
    cin >> filename;
    DNA *fresh = new DNA();
    ofstream file;
    file.open("Dean.out");
    file << "Dean Nunis" << "\n" << "2324351" << "\n" <<"Sources: " << "\n" << "http://www.cplusplus.com/doc/tutorial/files/" << "\n" << "https://stackoverflow.com/questions/8297070/how-to-return-string-that-contains-string-int-variables"  <<endl;
    file << "The Sum of the length of the DNA strings is: " << fresh ->Sum(filename) << endl;
    file << "The Mean of the length of the DNA strings is: " << fresh ->Mean(filename) << endl;
    file << "The variance of the length of the DNA strings is: " << fresh ->Var(filename) << endl;
    file << "The Standard Deviation of the length of the DNA stings is: " << fresh ->Dev(filename) << endl;
    file << "Here is the relative probability of each nucleotide: " << "\n" << fresh ->Freq(filename) << endl;
    file << "Here is the relative probability of each nucleotide bigram: " << "\n" << fresh ->biFreq(filename) << endl;
    file << fresh ->Same(filename) << endl;
  }
  else{
    terminate();
  }


}
