/*
Übung 2.Ü.01
Abschlussbedingungen
 Erledigt: Anzeigen
Aufgabe: Elementare Datentypen
Erstelle ein kleines C++-Programm, das folgende Anforderungen erfüllt: 

a) Definiere eine Konstante MAX_STUDENTS vom Typ unsigned int mit dem Wert 100, die die maximale Anzahl von Studierenden in einem Kurs repräsentiert. 

b) Deklariere eine Variable currentStudents vom Typ unsigned int, die die aktuelle Anzahl von Studierenden in einem Kurs speichert. 

c) Weise currentStudents einen Wert zu, der kleiner als MAX_STUDENTS ist, und gib diesen Wert auf der Konsole aus. 

d) Deklariere eine Variable courseName vom Typ string, die den Namen des Kurses speichert. 

e) Weise courseName den Namen "Einführung in C++" zu und gib diesen Namen auf der Konsole aus. 

f) Deklariere eine Variable averageGrade vom Typ float und weise ihr den Durchschnittswert der Noten 2.3 zu. Gib diesen Wert auf der Konsole aus, formatiert auf zwei Dezimalstellen. 

Stelle sicher, dass dein Programm fehlerfrei kompiliert und die Ausgabe korrekt ist. 
*/
#include <iostream>
#include <iomanip>

const unsigned int MAX_STUDENTS = 100;

int main(){
    unsigned int currentStudents = 15;
    std::cout << currentStudents << "\n";
    std::string courseName = "Einführung in C++";
    std::cout << courseName << "\n";
    float averageGrade = 2.3f; // f für float Literal
    std::cout << "Durchschnittsnote: " << std::setprecision(2) << std::fixed << averageGrade << std::endl;
    return 0;
}