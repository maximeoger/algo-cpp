#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int argCount = (argc - 1);
  int args[argCount]; 

  if(argCount < 2) {
    cerr << "erreur." << endl;
    return 1;
  }

  for(int i=0; i<=argCount; i++) {
    // ne pas push le premier index de argv dans arg
    if(i==0) { continue; }
    args[i-1] = atoi(argv[i]); // pb -> args se retrouve avec un 0 à l'intérieur (voir l'utilisation de vecteurs plutot)
  }

  bool sorted = false;

  for(int i=0; i<=argCount; i++) {
   bool isLastDigit = (i==argCount);

   if( (false == isLastDigit) && (args[i] < args[i+1]) ) {
    sorted = true;
   } else {
    sorted = false;
   }

   if( isLastDigit && (args[i] > args[i-1]) ) {
    sorted = true;
   } else {
    sorted = false;
   }
  }

  cout << (sorted ? "Triée !" : "Pas triée !") << endl;

  return 0;
}