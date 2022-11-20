#include<iostream>

using namespace std;

int euclid(int an, int bn) {

  // Sind beide Variablen größer als 0 ?
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

  int ax, bx;
  string inp = "";

  while (inp != "n") {
    // Userinput für den ersten Wert
    cout << "Bitte 1. Wert eingeben: " << endl;
    cin >> ax;

    // Userinput für den ersten Wert
    cout << "Bitte 2. Wert eingeben: " << endl;
    cin >> bx;

    // Führe Funktion euclid mit eingelesenen Werten aus und lege Resultat (was returned wird) auf "result".
    int result = euclid(ax, bx);

    // Für den Fall das Euclid Funktion -1 zurückgibt (bei Fehler) --> schreibe "Es ist nicht möglich ..." 
    if (result == -1) {
      cout << "Es ist nicht möglich den größten gemeinsamen Teiler zu berechnen. (beachte a,b > 0!)" << endl;
    } else { // Andernfalls zeige den ggT
      cout << "Der größte gemeinsame Teiler ist: " << result << endl;
    }

    cout << "Wollen Sie noch einen ggT berechnen? (y/n)" << endl;
    cin >> inp;

    if (inp == "n") {
      break;
    }

  }
  return 0;
}
