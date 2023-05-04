#include <iostream>

/*
  l'Alphabet : 
  Affiche l'alphabet
*/

int main() {
  for (int i = 97; i <= 122; i++) {
    std::cout << (char)i;
  }
  std::cout << std::endl;
  return 0; 
}