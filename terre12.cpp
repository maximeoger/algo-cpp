#include <iostream>
using namespace std;



bool inputCorrectlyFormatted(str input){
  char* data;
  char separator = ':';

  bool lengthIsCorrect = input.length() == 5;
  bool separatorIsColon = input[2] == separator;

  // separer la string a partir d'un delimiteur
  data = strtok(input, separator)

  int hours = data[0];
  int mins = data[1];
  
  bool hoursFormatIsCorrect = hours >= 0 && hours <= 24;
  bool minsFormatIsCorrect = mins >= 0 && mins <= 60;

}

int main(int argc, char* argv[]) {
  
  
  
  return 0;
}