# Papildoma-uzduotis
Ši programa skaičiuoja kiek kartų kiekvienas skirtingas žodis pasikartoja vartotojo nurodytame tekstiniame faile. Išoriniame faile išvedami tik tie žodžiai, kurie pasikartojo dažniau negu 1 kartą ir šalia jų nurodoma kiek kartų žodis pasikartojo ir kurioje teksto netuščioje pastraipoje tas žodis buvo rastas. Į kitą išorinį failą išvedami vartotojo nurodytame tekstiniame faile rasti URL adresai.

EgzPrakt.cpp Kodas.h Kodas.cpp
1. Naudojamos bibliotekos aprašytos ***Kodas.h*** faile
2. Naudojamos funkcijos surašytos ***Kodas.cpp*** ir ***EgzPrakt.cpp*** failuose
3. **Kodas.h** biblioteka naudojama **Kodas.cpp** ir **EgzPrakt.cpp** failuose

# Programos naudojimosi instrukcija
Paleidus programą, programa jūsų paprašys įvesti norimo nuskaityti tekstinio failo pavadinimą, tačiau '.txt' rašyti nereikia. Pavyzdžiui, jei norite, kad programa nuskaitytų failą 'tekstas.txt', tai reikia įvesti tik patį pavadinimą, t.y. tik 'tekstas'.
Tuomet rezultatai bus išvedami į du failus:
1. Į failą "rez.txt" išvedama lentelė, kurioje nurodomas žodis (kuris pasikartoja daugiau nei kartą), kiek kartų tas žodis pasikartoja ir kuriose pastraipose žodis buvo rastas (skaičiuojamos tik ne tuščios pastraipos).
2. Į failą "rezURL.txt" išvedamami tekste rasti URL adresai tokiu pavidalu - "https://www.vu.lt/" arba "sutrumpintu" pavidalu: "www.vu.lt" priklausomai nuo to, kaip jie buvo parašyti tekste.
Programa baigia darbą, procesas sustabdomas.

