#include<iostream>

using namespace std;

int euclid(int an, int bn) {

  if ((an > 0) && (bn > 0)) {

    int a = std::max(an, bn);
    int b = std::min(an, bn);
    int rest = 1;

    while (rest > 0) {
      rest = a % b;
      a = b;
      b = rest;
      cout << "Neues a: " << a << ". Neues b: " << b << ". Neuer Rest: " << rest << endl;
    }

    return a;
  }
  return -1;
}

int main() {

  // testen  
  int a = euclid(1078, 78);

  // Für den Fall das Euclid Funktion -1 zurückgibt (bei Fehler) --> schreibe "Es ist nicht möglich ..." 
  if (a == -1) {
    cout << "Es ist nicht möglich den größten gemeinsamen Teiler zu berechnen. (beachte a,b > 0!)" << endl;

  } else { // Andernfalls zeige den ggT
    cout << "Der größte gemeinsame Teiler ist: " << a << endl;
  }

  return 1;
}
