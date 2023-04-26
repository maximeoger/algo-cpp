#include <iostream>
using namespace std;

bool isNumeric(string str) {
  for (int i = 0; i < str.length(); i++) {
    if(isdigit(str[i]) == false) {
      return false;
    }
  }
  return true;
}

int main (int argc, char* argv[]) {
  if(argc == 1 || !isNumeric(argv[1])) {
    cerr << "Tu ne me la mettras pas a l'envers." << endl;
    return 1;
  }

  int num = atoi(argv[1]);

  if( (num % 2) == 0) {
    cout << "pair" << endl;
  } else {
    cout << "impair" << endl;
  }
  return 0;
}