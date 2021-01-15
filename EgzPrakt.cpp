// EgzPrakt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Kodas.h"

int main()
{
    std::multiset<string> visizodziai;
    std::multiset<string>::iterator it;
    vector<string> eilute;
    ifstream file;
    string name;
    cout << "Iveskite norimo nuskaityti tekstinio failo pavadinima be '.txt': ";
    do {
        try {
            cin >> name;
            file.open(name + ".txt", ios::in);
            if (!file) throw runtime_error("Toks failas neegzistuoja\n");
        }
        catch (const std::runtime_error& e) {
            cout << e.what();
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Veskite failo pavadinima dar karta: ";
            //cin >> name;
            //file.open(name + ".txt", ios::in);
        }
    } while (!file);

    nuskaitymas(name, eilute, visizodziai);
    irasymas("rez.txt", eilute, visizodziai);
    irasymasURL("rezURL.txt", eilute);
    eilute.clear();

    return 0;
}

