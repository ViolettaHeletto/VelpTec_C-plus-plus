#include <iostream>
using namespace std;

int aufgabe2() {
    int n;
    cout << "Gib die Anzahl der Glieder für die Fibonacci-Folge ein: ";
    cin >> n;
    // Überprüfung der Eingabe (valid positive integer check)
    if (cin.fail() || n <= 0) {
        cout << "Bitte eine positive Ganzzahl eingeben!" << endl;
        return 1;
    }
    cout << "Fibonacci-Folge bis zum " << n << "-ten Glied:" << endl;
    int t1 = 0, t2 = 1, nextTerm = 0;
    // Ausgabe der Fibonacci-Folge mit der while-Schleife
    int i = 1; // Start counter
    while (i <= n) {
        if (i == 1) {
            cout << t1; // Erste Amtszeit
        } else if (i == 2) {
            cout << ", " << t2; // Zweite Amtszeit
        } else {
            nextTerm = t1 + t2;
            cout << ", " << nextTerm; // Nachfolgende Begriffe
            t1 = t2;
            t2 = nextTerm;
        }
        i++;
    }
    cout << endl;
    cout << "Tabelle der Fibonacci-Folge:" << endl;
    cout << "Glied\tWert" << endl;
    //Zurücksetzen der Werte für die for-Schleife
       t1 = 0, t2 = 1, nextTerm = 0;
    //Ausgabe der Tabelle mit der for-Schleife
    for (int j = 1; j <= n; j++) {
        if (j == 1) {
            cout << j << "\t" << t1 << endl; // Erste Amtszeit
        } else if (j == 2) {
            cout << j << "\t" << t2 << endl; // Zweite Amtszeit
        } else {
            nextTerm = t1 + t2;
            cout << j << "\t" << nextTerm << endl; // Nachfolgende Begriffe
            t1 = t2;
            t2 = nextTerm;
        }
    }
    return 0;
}

void aufgabe1() {
    // a) Definition der Variablen 
    int a = 15, b = 4; 
 
    // b) Berechnungen und Ausgaben 
    cout << "Summe: " << (a + b) << endl; 
    cout << "Differenz: " << (a - b) << endl; 
    cout << "Produkt: " << (a * b) << endl; 
    cout << "Quotient: " << (a / b) << endl; 
 
    // c) Inkrement und Dekrement 
    a++; 
    b--; 
    cout << "Inkrementiertes a: " << a << endl; 
    cout << "Dekrementiertes b: " << b << endl; 
 
    // d) Vergleichsoperator 
    cout << "Ist a groesser als b? " << (a > b) << endl; 
 
    // e) Logische Operatoren 
    cout << "Ist a groesser als 10 und b kleiner als 5? " << ((a > 10) && (b < 5)) << endl; 
 
    // f) Implizite Typumwandlung 
    cout << "Summe von a und b mit 2.5: " << (a + b + 2.5) << endl; 
 
}

int main() {
    aufgabe2();
    return 0;
}