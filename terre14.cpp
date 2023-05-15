#include <iostream>

using namespace std;

int main (int argc, char* argv[]){
  
  int low, mid, high, temp;
  
  int p [3];

  for(int i=0; i<=2; i++) {
    p[i] = atoi(argv[i+1]);
  }
  
  if(
    p[0] == p[1] ||
    p[1] == p[2] || 
    p[2] == p[0] 
  ) {
    cout << "erreur." << endl;
    return 1;
  }

  // trouver le plus petit
  temp = p[0];
  for(int i=0; i<3; i++) {
    if(p[i] <= temp) {
      low = p[i];
    }
    temp = p[i];
    cout << i << " - low: " << low << endl;
  }

  // trouver le plus grand
  temp = p[0];
  for(int i=0; i<3; i++) {
    if(p[i] >= temp) {
      high = p[i];
    }
    temp = p[i];
  }

  //cout << "low: " << low << "high: " << high << endl; 
  // trouver le millieu
  for(int i=0; i<3; i++) {
    cout << p[i] << endl;
    if(p[i] < high && p[i] > low) {
      mid = p[i];
    }
  }

  cout << mid << endl;

  return 0;
}