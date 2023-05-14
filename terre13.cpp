#include <iostream>
#include <string>

using namespace std;

/*
  12 to 24 : 
  Convertir une heure au format 11:40AM vers le format 23:40
*/

int main(int argc, char* argv[]) {
  if(argc == 1) {
    cerr << "Veuillez entrer une heure a convertir" << endl;
    return 1;
  }

  if(argc > 2) {
    cerr << "Vous avez fournis trop d'arguments" << endl;
    return 1;
  }

  string arg = string(argv[1]);
  string h, m;
  bool isAm = false;

  for(int i=0; i<arg.length(); i++) {
    char num = arg[i];
    if(i < 2) {
      h = h + num;
    }
    if(i > 2 && i < 5) {
      m = m + num;
    }
    if(i == 5) {
      isAm = arg[i] != 'P';
    }
  }

  int h_int = stoi(h);
  int m_int = stoi(m);
  bool isMatin = isAm; // AM
  bool isAprem = !isAm; // PM

  if( h_int >= 12 && isMatin ) {
    cerr << h << " heures " << m << " du matin, ça n'existe pas!" << endl;
    return 1;
  }

  if( h == "00" && isAprem ) {
    cerr << "Minuit arprem, ça n'existe pas !" << endl;
    return 1;
  }

  if( h_int == 12 && isAprem ) {
    cout << h << ":" << m << endl;
  }

  if( h == "0" && isMatin ) {
    cout << h << ':' << m << endl;  
  }

  if( h_int < 12 && isMatin ) {
    cout << h << ":" << m << endl;
  }

  if( h_int < 12 && isAprem ) {
    cout << (h_int + 12) << ':' << m << endl;  
  }

  if( h_int > 12 && isAprem ) {
    cout << h << ":" << m << endl;
  }
  
  return 0;
};