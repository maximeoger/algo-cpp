#include <iostream>
using namespace std;

/*
  Taille d'une chaine : 
  Affiche la taille de la chaine de caractère pasée en argument
*/

int main(int argc, char* argv[]) {
  if(
    argc > 2 || 
    argc == 1 
  ) {
    cerr << "Erreur." << endl;
    return 1;
  }

  cout << string(argv[1]).length() << endl;
  
  return 0;
} 