#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char* argv[]) {
  if(argc == 1) {
    cerr << "Veuillez entrer un nombre." << endl;
    return 1;
  }

  if(argc > 2) {
    cerr << "Veuillez entre juste 1 seul nombre." << endl;
    return 1;
  }

  if(atof(argv[1]) <= 0) {
    cerr << "Veuillez entrer un entier positif." << endl;
    return 1;
  }

  double number = atof(argv[1]);

  double result = sqrt(number);

  cout << result << endl;
  
}