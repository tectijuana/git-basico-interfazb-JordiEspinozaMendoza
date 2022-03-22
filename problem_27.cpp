#include <iostream>
#include <math.h>

// Problem 26
// Los canibales A y B son ambos excelentes tiradores, pues aciertan uno
// de cada 2 tiros con la cerbatana. Se enfrentan en un duelo en el que alternan disparos
// Si el canibal A tira primero ¿cual es la probabilida de que gane él?

// @Author @JordiEspinozaMendoza
// @Date 21 March 2022
using namespace std;
bool getRandomBool()
{
    bool times[3] = {true, false, true};
    int random = rand() % 3;
    return times[random];
}
int main()
{
    srand(time(NULL));
    int times = 1000000;
    int timesA = 0;
    for (int i = 0; i < times; i++)
    {
        bool a = getRandomBool();
        if (a)
        {
            timesA++;
        }
    }
    cout << "Juegos ganados por el canibal A: " << timesA << " de " << times << endl;
    cout << "Probabilidad de que el canibal A gane en un total de " << times << " juegos: " << ((double)timesA / times) * 100 << "%" << endl;
}
