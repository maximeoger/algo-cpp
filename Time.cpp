#include "Time.hpp"

using namespace std;

// Constructeur
Time::Time(string time)
{
  this
}

// Accesseurs
void Time::getFormat() const
{
  format = this->format;
  
  if(!format) {
    cerr << "Veuillez definir un format pour l'heure avec la methode Time::setFormat(int format)" << endl;
    return 1;
  }

  return format;
}

void Time::getTime() const
{
  h = this->hours;
  m = this->minutes;
  
  format = this->getFormat();

  if(format == 24) {
    return  
  }

  return h + ":" + m;
}

// Mutateurs
void Time::setFormat(int format)
{
  if(format !== 12 || format !== 24) {
    cerr << 'Le format doit etre de 12 ou 24 heures.' << endl;
    return 1;
  }

  this->format = format;
}