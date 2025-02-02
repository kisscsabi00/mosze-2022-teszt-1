#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Az alulvonas hianyzik
    std::cout << "1-100 ertekek duplazasa"; //Az aposztrof jel rossz, helyette " ", nincs ; a sor vegen
    for (int i = 0; i < N_ELEMENTS; i++) // A ciklusnak csak kezdoerteke van
    {
        b[i] = (i+1) * 2; // 0 es 99 kozott duplaz, ehelyett 1 es 100 kozott kellene
    }
    for (int i = 0; i < N_ELEMENTS; i++)// A feltetel mindig hamis lesz, be sem lep a ciklusba
    {
        std::cout << "Ertek:"<< b[i]<< std::endl; //Az erteket nem irjuk ki, nincs end es pontosvesszo
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Nincs kezdoerteke az atlagnak
    for (int i = 0; i < N_ELEMENTS; i++) //az N_ELEMENTS utan pontosvesszot kell irni
    {
        atlag += b[i]; //hianyzik a pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
