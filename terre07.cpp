#include <iostream>
using namespace std;

/*
  Inverser une chaine : 
  Affiche l'inverse de la chaine de caractère passée en argument.
*/

int main(int argc, char* argv[]) {

  if(argc == 1) {
    cerr << "Veuillez entrez une chaine de caractere" << endl;
    return 1;
  }

  string str = "";
  
  for(int i=argc - 1; i>=1; i--) {
    for(int j=(string(argv[i]).length() - 1); j>=0; j--) {
      string space = "";
      if(j == 0) {
        space = " ";
      }
      str = str + string(argv[i])[j] + space;
    }
  }

  cout << str << endl;
  
  return 0;
}