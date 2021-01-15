#include "Kodas.h"

void nuskaitymas(string txtname, vector<string>& eilute, std::multiset<string>& visizodziai)
{
    string eil;
    ifstream f(txtname + ".txt");
    std::multiset<string>::iterator it;

    while (f) {
        if (!f.eof()) {
            std::getline(f, eil);
            eilute.push_back(eil);
        }
        else break;
    }
    f.close();

    for (auto str : eilute) {
        string word = "";
        for (auto x : str)
        {
            if (x == ' ')
            {
                if (word != "") it = visizodziai.insert(word);
                word = "";
            }
            else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
                x = std::tolower(x);
                word = word + x;
            }
        }
        if (word != "") it = visizodziai.insert(word);
    }
}

void irasymas(string name, vector<string> eilute, std::multiset<string> visizodziai)
{
    ofstream f(name);
    std::multiset<string>::iterator it;
    std::set <string> zodziai(visizodziai.cbegin(), visizodziai.cend());
    vector <string> eilute1;

    f << left << setw(20) << setfill(' ') << "Zodis" << " | ";
    f << left << setw(6) << setfill(' ') << "Kiekis" << " | ";
    f << left << setw(50) << setfill(' ') << "Pastraipos, kurioje sis zodis buvo rastas, numeris";
    
    int uzpildymas = 0;

    for (auto str : eilute) {
        if (str != "") {
            uzpildymas = uzpildymas + 4;
            string pastraipa = "";
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            for (auto x : str)
            {
                if (x == ' ') pastraipa = pastraipa + x;
                else if (x >= 'a' && x <= 'z') pastraipa = pastraipa + x;
            }
            pastraipa = pastraipa + " ";
            eilute1.push_back(pastraipa);
        }
    }

    if (uzpildymas > 50) f << left << setw(uzpildymas - 50) << setfill(' ') << "";
    f << " | " << endl;
    if (uzpildymas > 50)
        f << string(21, '-') << "|" << string(8, '-') << "|" << string(uzpildymas + 2, '-') << "|" << endl;
    else f << string(21, '-') << "|" << string(8, '-') << "|" << string(52, '-') << "|" << endl;

    for (it = zodziai.begin(); it != zodziai.end(); ++it) {
        if (visizodziai.count(*it) > 1) {
            f << left << setw(20) << setfill(' ') << *it << " | ";
            f << left << setw(6) << setfill(' ') << visizodziai.count(*it) << " | ";
            int eilsk = 0;
            for (auto str : eilute1) {
                eilsk++;
                std::size_t found = str.find(' ' + *it + ' ');
                if (found != std::string::npos)
                    f << left << setw(4) << setfill(' ') << eilsk;
                else f << left << setw(4) << setfill(' ') << "";
            }
            if (uzpildymas < 50) f << left << setw(50 - uzpildymas) << setfill(' ') << "";
            f << " | " << endl;
        } 
    }
    eilute.clear();
    eilute1.clear();
    f.close();
}

void irasymasURL(string name, vector<string> eilute)
{
    ofstream f(name);
    std::multiset<string> visizodziai;
    std::multiset<string>::iterator it;
    std::set <string> zodziai(visizodziai.cbegin(), visizodziai.cend());

    f << "Tekste esantys URL adresai:" << endl;

    for (auto str : eilute) {
        string word = "";
        for (auto x : str)
        {
            if (x == ' ')
            {
                if (word != "") it = visizodziai.insert(word);
                word = "";
            }
            else {
                x = std::tolower(x);
                word = word + x;
            }
        }
        if (word != "") it = visizodziai.insert(word);
    }

    for (it = visizodziai.begin(); it != visizodziai.end(); ++it)
    {
        string zodis = *it;
        std::size_t found = zodis.find("www.");
        std::size_t found1 = zodis.find("https://");

        if ((found != std::string::npos) || (found1 != std::string::npos)) {
            if (found1 != std::string::npos) { 
                std::size_t rasta = zodis.find("/");
                rasta = zodis.find("/", rasta+2);
                zodis = zodis.substr(0, rasta+1);
            }
            else if (found != std::string::npos) {
                zodis = zodis.substr(0, zodis.find("/"));
            }
            string word = "";
            for (auto x : zodis) {
                if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || x == '.' || x == '/' || x == ':') {
                    word = word + x;
                }
            }
            zodis = word;
            f << zodis << endl;
        }
    }
    eilute.clear();
    f.close();
}
