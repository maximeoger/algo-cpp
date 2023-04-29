#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc > 2 || argc == 1) {
    cerr << "Erreur." << endl;
    return 1;
  }

  int len = 0;
  
  for(int i=0; i<(argc-1); i++) {
    len = len + string(argv[i]).length();
  }

  cout << len << endl;
  
  return 0;
}