#include <iostream>
#include <cstdlib>
using namespace std;

int main (int argc, char* argv[]) {
  if (argc < 2 ) {
    cerr << "Veuillez entrer une lettre de l'alphabet (a-z) en minuscule." << endl;
    return 1;
  }

  char c = argv[1][0];
  int asciiValue = c;

  if(asciiValue < 97 || asciiValue > 122) {
    cerr << "Veuillez entrez une lettre entre a et z en minuscule." << endl;
    return 1;
  }

  for (int i=asciiValue; i <= 122; i++) {
    cout << char(i);
  }

  cout << endl;
  return 0;
}