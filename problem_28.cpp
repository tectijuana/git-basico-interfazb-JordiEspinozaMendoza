#include <iostream>
#include <math.h>

// Problem 28
// Se juega una mano de póquer. Encontrar la probabilidad de que
// la mano contenga al menos una pareja, suponiendo que no contiene
// ases, dieces o cartas de cara (rey, reina, caballero)

// @Author @JordiEspinozaMendoza
// @Date 21 March 2022
using namespace std;

int main()
{
    srand(time(NULL));

    int times = 0;
    int totalGames = 1000000;
    string cards[8] = {"2", "3", "4", "5", "6", "7", "8", "9"};

    for (int i = 0; i < totalGames; i++)
    {
        string hand[5];
        bool foundPair = false;
        for (int j = 0; j < 5; j++)
        {
            int random = rand() % 8;
            hand[j] = cards[random];
        }
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (j != k)
                {
                    if (hand[j] == hand[k])
                    {
                        foundPair = true;
                        break;
                    }
                }
            }
        }
        if (foundPair)
        {
            times++;
        }
    }
    cout << "Cantidad de veces que se produjo una mano con parejas: " << times << endl;
    cout << "Probabilidad de que la mano contenga al menos una pareja: " << ((double)times / totalGames) * 100 << "%" << endl;
}
