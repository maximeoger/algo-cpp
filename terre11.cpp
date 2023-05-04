#include <iostream>
using namespace std;

/*
  Nombre premier : 

  Savoir si un nombre est premier ou pas
*/

bool isPrimeNumber (int num) {
  int dividers = 0;

  for(int i=1; i<=num; i++) {
    if(num % i == 0) {
      dividers += 1;
    }
  }

  return dividers == 2;
}

int main (int argc, char* argv[]) {
  if(argc == 1) {
    cerr << "Veuillez entrer un nombre entier." << endl;
    return 1;
  }

  if(argc > 2) {
    cerr << "Veuillez entrer un seul nombre." << endl;
    return 1;
  }

  int number = atoi(argv[1]);

  cout << (number % number) << endl;

  if(number < 2) {
    cout << "Non, " << number << " n'est pas un nombre premier." << endl;
    return 0;
  }

  if(isPrimeNumber(number)) {
    cout << "Oui, " << number << " est un nombre premier." << endl;
  } else {
    cout << "Non, " << number << " n'est pas un nombre premier." << endl;
  }

  return 0;
}