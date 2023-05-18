#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  int count = argc - 1;
  vector<int> args;

  if(argc < 3) {
    cerr << "erreur." << endl;
    return 1;
  }

  for(int i=1; i<=count; i++) {
    args.push_back(atoi(argv[i]));
  }

  bool sorted = false;

  for(int i=0; i<count; i++) {
    bool isLastDigit = i==(count-1);
    bool isFirstDigit = i==0;
    
    if( isFirstDigit && !(args[i] < args[i+1]) ) {
      cout << "Pas triée !" << "\n";
      return 0;
    } 

    if( 
      (false == isLastDigit) && 
      (false == isFirstDigit) && 
      (args[i] > args[i+1]) || (args[i] < args[i-1]) )
    {
      cout << "Pas triée !" << "\n";
      return 0;
    }

    if(isLastDigit && (args[i] < args[i-1]) ) {
      cout << "Pas triée !" << "\n";
      return 0;
    }
  }

  cout << "Triée !" << "\n";

  return 0;
}