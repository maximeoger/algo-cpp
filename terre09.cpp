#include <iostream>
#include <math.h>
using namespace std;

/*
  Puissance d'un noombre : 
  Affiche la puissance d'un nombre
*/

int main (int argc, char* argv[]) {
  if(argc == 1 || argc < 3) {
    cerr << "Veuillez entrer un nombre en premier argument et une puissance en second argument." << endl;
    return 1;
  }

  if(argc > 3) {
    cerr << "Vous avez entre trop de nombre. Veuillez entre deux nombre, le nombre de base et sa puissance." << endl;
    return 1;
  }

  if(atof(argv[2]) < 0) {
    cerr << "Veuillez entrer une puissance positive ou egale a zero." << endl;
    return 1;
  }

  double x = atof(argv[1]), y = atof(argv[2]);

  double result = pow(x, y);

  cout << result << endl;

  return 0;
}