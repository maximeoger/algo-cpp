#ifndef TIME_H
#define TIME_H

#include <string>

class Time 
{
  public:
    // Constructeur
    Time(std::string time, int format);

    // Accesseurs
    std::string getTime() const;

    // Mutateurs
    void setFormat(int format);

  private:
    int hours;
    int minutes;
    int format;
    
    int getFormat() const;
};

#endif