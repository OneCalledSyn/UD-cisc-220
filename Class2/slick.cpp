#include<iostream>
#include<bitset>
#include<climits>
#include<cmath>
using namespace std;

int main(){
  char input[10] = "SLICK";
  for (char i = 0; i < 32; i++){
     for (char j = 0; j < 5; j++){
       if ((i >> j) % 2 == 1){
         cout << input[j];
       }
     }
     cout << endl;
  }
  return 0;
};