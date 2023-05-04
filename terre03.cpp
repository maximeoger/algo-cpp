#include <iostream>
using namespace std;

/*
  Afficheur d'arguments : 
  Affiche les arguments du programme.
*/

int main(int argc, char* argv[]) {
  
  for (int i=0; i < argc; i++ ) {
    cout << argv[i] << "\n";
  }

  return 0;
}