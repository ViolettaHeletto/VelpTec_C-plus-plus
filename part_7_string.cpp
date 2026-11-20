#include <iostream>
#include <string>
using namespace std;

// Funktion zum Ersetzen eines Teilstrings 
string stringErsetzen(string &str, const string &zuErsetzen, int start, int ende) { 
    string result = str; 
    result.replace(start, ende - start, zuErsetzen); 
    return result; 
} 

int aufgabe2() {
    // a) Definition und Ausgabe eines Strings 
    string begruessung = "Hallo Welt!"; 
    cout << begruessung << endl; 
    // b) Zuweisung eines neuen Werts und Ausgabe der Länge 
    begruessung = "Guten Tag!"; 
    cout << "Länge von begruessung: " << begruessung.length() << endl; 
     // c) Verkettung von Strings 
    string zeit = " Es ist 10 Uhr."; 
    string kompletteNachricht = begruessung + zeit; 
    cout << kompletteNachricht << endl; 
    // d) Ersetzen eines Teilstrings 
    kompletteNachricht = stringErsetzen(kompletteNachricht, "Abend", 6, 9); 
    cout << kompletteNachricht << endl;

    // e) Suchen eines Wortes 
    size_t position = kompletteNachricht.find("Uhr"); 
    if (position != string::npos) 
        cout << "Position von 'Uhr': " << position << endl; 
    else 
        cout << "Wort nicht gefunden!" << endl; 
    
    // f) Löschen eines Wortes 
    position = kompletteNachricht.find("Guten"); 
    if (position != string::npos) { 
        kompletteNachricht.erase(position, 6); // 6 Zeichen für "Guten " löschen 
    } 
    cout << kompletteNachricht << endl; 
    
    return 0;
}

const int Rentenalter = 65; 
 
int berechneJahreBisRente(int aktuellesAlter) { 
    return Rentenalter - aktuellesAlter; 
} 

int aufgabe1() {
    int alter; 
    cout << "Bitte gib dein aktuelles Alter ein: "; 
    cin >> alter; 
    if (alter <= 0 || alter > 120) { 
        cerr << "Fehler: Das eingegebene Alter ist nicht realistisch." << endl; 
        return 1; 
    } 

    if (alter >= Rentenalter) { 
        if (alter == Rentenalter) { 
            cout << "Du erreichst dieses Jahr das Rentenalter." << endl; 
        } else { 
            cout << "Du bist bereits im Rentenalter." << endl; 
        } 
    } else { 
        int jahreBisRente = berechneJahreBisRente(alter); 
        cout << "Du hast noch " << jahreBisRente << " Jahre bis zum Renteneintritt." << endl; 
    } 
    return 0;
}


int main() {
    aufgabe2();
    return 0;
}

/*
Transferaufgabe 5.A.01
Abschlussbedingungen
 Erledigt: Anzeigen
Aufgabe: Variablen, Datentypen, Funktionen, Operatoren
Entwickle ein C++-Programm, das folgende Anforderungen erfüllt: 

a) Deklariere eine Variable vom Typ int für das Alter einer Person und eine Konstante für das Renteneintrittsalter (65 Jahre).  

b) Erstelle eine Funktion berechneJahreBisRente, die das aktuelle Alter als Parameter erhält und die verbleibenden Jahre bis zum Renteneintritt berechnet und zurückgibt. 

c) Lies das aktuelle Alter der Person über den cin Stream ein und verwende die cout Ausgabe, um das Ergebnis in einem vollständigen Satz auszugeben. 

d) Implementiere eine Überprüfung, ob das eingegebene Alter realistisch ist (größer als 0 und kleiner oder gleich 120). Gib eine entsprechende Fehlermeldung über cerr aus, falls das Alter außerhalb dieses Bereichs liegt. 

e) Verwende logische Operatoren, um zu überprüfen, ob die Person bereits im Rentenalter ist, und gib eine entsprechende Nachricht aus. 

f) Nutze Vergleichsoperatoren, um zu prüfen, ob die Person genau das Renteneintrittsalter erreicht hat, und gib auch hier eine passende Nachricht aus.  


*/
/*
Übung 8.Ü.01
Abschlussbedingungen
 Erledigt: Anzeigen
Aufgabe: Strings
Entwickle ein kleines C++-Programm, das folgende Funktionalitäten demonstriert und teste es anschließend: 

a) Definiere einen String begruessung mit dem Inhalt "Hallo Welt!" und gib diesen auf der Konsole aus. 

b) Weise dem String begruessung einen neuen Wert zu: "Guten Tag!" und zeige die Länge des Strings auf der Konsole an. 

c) Verkette den String begruessung mit einem weiteren String zeit mit dem Wert " Es ist 10 Uhr." und speichere das Ergebnis in einem neuen String kompletteNachricht. Gib kompletteNachricht auf der Konsole aus. 

d) Erstelle eine Funktion stringErsetzen, die zwei Strings und zwei Positionen (Start und Ende) als Parameter nimmt und den ersten String zwischen diesen Positionen durch den zweiten String ersetzt. Teste diese Funktion, indem du im String kompletteNachricht das Wort "Tag" durch "Abend" ersetzt. 

e) Suche im String kompletteNachricht nach dem Wort "Uhr" und gib die Position auf der Konsole aus. Wenn das Wort nicht gefunden wird, soll "Wort nicht gefunden!" ausgegeben werden. 

f) Lösche im String kompletteNachricht das Wort "Guten" und gib das Ergebnis auf der Konsole aus.
*/