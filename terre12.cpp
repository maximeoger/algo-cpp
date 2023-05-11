#include <iostream>

using namespace std;


/*
  24 to 12 : 
  Convertir une heure au format 24h vers le format 12h
*/


int main(int argc, char* argv[]) 
{
  if(argc == 1) {
    cerr << "Veuillez entrer une heure a convertir" << endl;
    return 1;
  }

  if(argc > 2) {
    cerr << "Vous avez fournis trop d'arguments" << endl;
    return 1;
  }

  string arg = argv[1];
  string h, m;

  for(int i=0; i<arg.length(); i++) {
    char num = arg[i];
    if(i < 2) {
      h = h + num;
    }
    if(i > 2) {
      m = m + num;
    }
  }

  int h_int = stoi(h);
  int m_int = stoi(m);

  if((h_int == 0) && (m_int <= 59)) {
    cout << h << ":" << m << "AM" << endl;
  }
  
  if((h_int >= 1) && (h_int <= 11)) {
    cout << h_int << ":" << m << "AM" << endl;
  }

  if((h_int == 12) && (m_int >= 0 && m_int <= 59)) {
    cout << h << ":" << m << "PM" << endl;
  }

  if((h_int >= 13 && h_int <= 23) && (m_int >= 0 && m_int <= 59)) {
    cout << h_int - 12 << ":" << m << "PM" << endl;
  }
  
  return 0;
}