#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void aufgabe2(){
    // a) Einlesen der Zahlen 
    int ganzzahl1, ganzzahl2; 
    double gleitkomma1, gleitkomma2; 
    cout << "Gib zwei Ganzzahlen ein: "; 
    cin >> ganzzahl1 >> ganzzahl2; 
    cout << "Gib zwei Gleitpunktzahlen ein: "; 
    cin >> gleitkomma1 >> gleitkomma2; 

    // b) Formatierung und Ausgabe der Zahlen 
    cout << "Formatierte Ganzzahlen: "  
         << setw(10) << ganzzahl1  
         << setw(10) << ganzzahl2 << endl; 
    cout << "Formatierte Gleitpunktzahlen: "  
         << setprecision(5) << scientific  
         << gleitkomma1 << " "  
         << gleitkomma2 << endl; 
 
    // c) Formatierung und Ausgabe von bool, char und string 
    bool wahrheitswert = true; 
    char zeichen = 'A'; 
    string text = "Universität"; 
 
    cout << boolalpha // Wahrheitswerte als Text 
         << "Wahrheitswert: " << wahrheitswert << endl 
         << "Zeichen: " << setw(5) << setfill('.') << internal << zeichen << endl 
         << "String: " << left << setw(20) << text << endl; 
}

class Thermometer {
private:
    double temperaturCelsius;

public:
    Thermometer(double tempC) : temperaturCelsius(tempC) {}

    double getCelsius() const {
        return temperaturCelsius;
    }

    double getFahrenheit() const {
        return temperaturCelsius * 9.0 / 5.0 + 32.0;
    }

    double getKelvin() const {
        return temperaturCelsius + 273.15;
    }
};

void aufgabe1(){
    // Erzeuge ein Thermometer-Objekt mit einer Temperatur von 25 Grad Celsius.
    Thermometer thermo(25.0);

    // Gib die Temperatur in allen drei Maßeinheiten aus.
    std::cout << "Temperatur in Celsius: " << thermo.getCelsius() << " °C" << std::endl;
    std::cout << "Temperatur in Fahrenheit: " << thermo.getFahrenheit() << " °F" << std::endl;
    std::cout << "Temperatur in Kelvin: " << thermo.getKelvin() << " K" << std::endl;

}

int main() {
    aufgabe1();
    return 0;
}

/*

Übung 4.Ü.01
Abschlussbedingungen
 Erledigt: Anzeigen
Aufgabe: Streams
Erstelle ein C++-Programm, das folgende Aufgaben ausführt: 

a) Lies zwei Ganzzahlen und zwei Gleitpunktzahlen von der Konsole ein und speichere diese in entsprechenden Variablen. 

b) Gib die eingelesenen Zahlen auf der Konsole aus, wobei die Ganzzahlen rechtsbündig in einem Feld der Breite 10 und die Gleitpunktzahlen in wissenschaftlicher Notation mit 5 Nachkommastellen formatiert sein sollen. 

c) Erstelle eine formatierte Ausgabe, die einen Wahrheitswert (bool), ein einzelnes Zeichen (char) und einen String (std::string) enthält. Der Wahrheitswert soll als "wahr" oder "falsch" statt "1" oder "0" ausgegeben werden, das Zeichen in einem Feld der Breite 5 zentriert und der String linksbündig in einem Feld der Breite 20. 
*/
/*
Übung 3.Ü.01
Abschlussbedingungen
 Erledigt: Anzeigen
Aufgabe: Funktionen und Klassen
Erstelle eine C++-Klasse Thermometer, die eine Temperatur in Celsius speichert und Methoden zur Umrechnung in Fahrenheit sowie Kelvin bereitstellt. Die Klasse soll folgende Mitglieder haben: 

a) Eine private Instanzvariable temperaturCelsius vom Typ double. 

b) Einen öffentlichen Konstruktor, der die Temperatur in Celsius als Parameter erhält und temperaturCelsius initialisiert. 

c) Eine öffentliche Methode getCelsius(), die die aktuelle Temperatur in Celsius zurückgibt. 

d) Eine öffentliche Methode getFahrenheit(), die die Temperatur in Fahrenheit zurückgibt. Verwende die Formel F = C * 9/5 + 32. 

e) Eine öffentliche Methode getKelvin(), die die Temperatur in Kelvin zurückgibt. Verwende die Formel K = C + 273.15. 

Implementiere ein Hauptprogramm main(), in dem du ein Thermometer-Objekt mit einer beliebigen Temperatur in Celsius erzeugst und die Temperaturen in allen drei Maßeinheiten auf der Konsole ausgibst.  
*/