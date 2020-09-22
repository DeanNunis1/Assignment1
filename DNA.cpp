#include <iostream>
#include <fstream>
#include<math.h>
#include "DNA.h"

using namespace std;

DNA::DNA(){

}

int DNA::Sum(string filename){
  int sum = 0;
  string all;
  fstream input;
  input.open(filename.c_str());
  while(getline(input, all))
  sum += all.length();
  input.close();
  return sum;
}

float DNA::Mean(string filename){
  float mean = 0.0;
  int sum = 0;
  float lines = 0.0;
  string all;
  fstream input;
  input.open(filename.c_str());
  while(getline(input, all)){
    lines+= 1;
    sum += all.length();
}
  mean = sum/lines;
  input.close();
  return mean;
}

float DNA::Var(string filename){
  int sum = 0;
  string all;
  float mean = 0.0;
  int lines = 0;
  fstream input;
  input.open(filename.c_str());
  while(getline(input, all)){
    lines += 1;
    sum += all.length();
  }
  mean = sum/lines;
  float var = (mean * mean)/(sum * 2.0);
  input.close();
  return var;
}

float DNA::Dev(string filename){
  int sum = 0;
  string all;
  float mean = 0.0;
  int lines = 0;
  fstream input;
  input.open(filename.c_str());
  while(getline(input, all)){
    lines += 1;
    sum += all.length();
  }
  mean = sum/lines;
  float dev = sqrt((mean * mean)/(sum * 2.0)) ;
  input.close();
  return dev;
}

string DNA::Freq(string filename){
  fstream input;
  int sum = 0;
  float a = 0;
  float g = 0;
  float c = 0;
  float t = 0;
  string all;
  string finish;
  input.open(filename.c_str());
  while(getline(input, all)){
    sum += all.length();
    for (int i = 0; i < all.length(); ++i){
      if (all[i] == 'A'){
        a += 1;
      }
      if (all[i] == 'C'){
        c += 1;
    }
      if (all[i] == 'T'){
        t += 1;
  }
      if (all[i] == 'G'){
        g += 1;
    }
}
}
// }
  finish = "A:          " + to_string(a/sum) + "\n" + "T:          " + to_string(t/sum) + "\n" + "C:          " + to_string(c/sum) + "\n" + "G:          " + to_string(g/sum);
  return finish;
}

string DNA::biFreq(string filename){
  fstream input;
  string full = "";
  string all = "";
  int sum = 0;
  double aa = 1;
  double ac = 1;
  double at = 1;
  double ag = 1;
  double ca = 1;
  double cc = 1;
  double ct = 1;
  double cg = 1;
  double ta = 1;
  double tc = 1;
  double tt = 1;
  double tg = 1;
  double ga = 1;
  double gc = 1;
  double gt = 1;
  double gg = 1;
  string done = "";
  input.open(filename.c_str());
  while(getline(input, all)){
    sum += all.length();
    full += all;
  }
  for(int i = 0; i < full.length() ; ++i){
    for (int j = -1; j < full.length()  ; ++j){
      if (full[i, j] == 'A' && 'A'){
        aa += 1;
}
      if (full[i, j] == 'A' && 'C'){
        ag += 1;
}
      if (full[i, j] == 'A' && 'T'){
        at += 1;
}
      if (full[i, j] == 'A' && 'G'){
        ag += 1;
}
      if (full[i, j] == 'C' && 'A'){
        ca += 1;
}
      if (full[i, j] == 'C' && 'C'){
        cc += 1;
}
      if (full[i, j] == 'C' && 'T'){
        ct += 1;
}
      if (full[i, j] == 'C' && 'G'){
        cg += 1;
}
      if (full[i, j] == 'T' && 'A'){
        ta += 1;
}
      if (full[i, j] == 'T' && 'C'){
        tc += 1;
}
      if (full[i, j] == 'T' && 'T'){
        tt += 1;
}
      if (full[i, j] == 'T' && 'G'){
        tg += 1;
}
      if (full[i, j] == 'G' && 'A'){
        ga += 1;
}
      if (full[i, j] == 'G' && 'C'){
        gc += 1;
}
      if (full[i, j] == 'G' && 'T'){
        gt += 1;
}
      if (full[i, j] == 'G' && 'G'){
        gg += 1;
}

}
}

  done = "AA:          " + to_string(aa/sum*2) + "\n" + "AC:          " + to_string(ac/sum*2) + "\n" + "AT:          " + to_string(at/sum*2) + "\n" + "AG:          " + to_string(ag/sum*2) + "\n" + "CA:          " + to_string(ca/sum*2) + "\n" + "CC:          " + to_string(cc/sum*2) + "\n" + "CT:          " + to_string(ct/sum*2) + "\n" + "CG:          " + to_string(cg/sum*2) + "\n" + "TA:          " + to_string(ta/sum*2) + "\n" + "TC:          " + to_string(tc/sum*2) + "\n" + "TT:          " + to_string(tt/sum*2) + "\n" + "TG:          " + to_string(tg/sum*2) + "\n" + "GA:          " + to_string(ga/sum*2) + "\n" + "GC:          " + to_string(gc/sum*2) + "\n" + "GT:          " + to_string(gt/sum*2) + "\n" + "GG:          " + to_string(gg/sum*2);
  return done;
}

string DNA::Same(string filename){
  fstream input;
  string big = "";
  string all = "";
  input.open(filename.c_str());
  while(getline(input, all)){
    big.append(all);
}
  while (big.length() < 1000){
    big.append(all);

    }
  return big;
}
