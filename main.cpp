#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS undefined, a helyes  N_ELEMENTS lenne
    std::cout << '1-100 ertekek duplazasa' // hibás idézőjel, '' szerepel "" helyett, std::endl; hiányzik végéről
    for (int i = 0;) // hibás forciklus: hiányzik a ciklusfeltétel és a léptetés
    {
        b[i] = i * 2; //rossz számítás, (i+1)*2 kéne, ha i=0ról indulunk
    }
    for (int i = 0; i; i++) // ciklusfeltétel hibás
    {
        std::cout << "Ertek:" // maga az érték nincs is kiírva, és std::endl; hiányzik végéről
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializálva
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; kéne
    {
        atlag += b[i] // ; jel hiányzik sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // b nincs felszabadítva

    return 0;
}
