#include <iostream>
using namespace std;

bool isInteger(string str) {
  for(int i = 0; i <= str.length() - 1; i++) {
    if(isdigit(str[i]) == false) {
      return false;
    }
  }
  return true;
}

bool checkArgs(char* args[]) {
  if (
    (!isInteger(args[1])) ||
    (!isInteger(args[2])) ||
    (args[1] > args[2])
  ) return false;
  return true;
}

int main (int argc, char* argv[]) {

  if(argc == 1 || argc > 3 || checkArgs(argv) == false) {
    cerr << "erreur." << endl;
    return 1;
  }

  int first = atoi(argv[1]);
  int second = atoi(argv[2]);

  int result =  first / second;
  int remainder = first % second;

  cout << "resultat: " << result << endl;
  cout << "reste: " << remainder << endl;

  return 0;
}