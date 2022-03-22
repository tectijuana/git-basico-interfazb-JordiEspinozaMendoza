#include <iostream>
#include <math.h>

// Problem 26
// Suponer que las letras C, E, M, O, P, R, T se seleccionan
// al azar. ¿Cuál es la probabilidad de que el orden lde las letras
// produzca una palabra COMPUTER?

// @Author @JordiEspinozaMendoza
// @Date 21 March 2022
using namespace std;

int main()
{
    srand(time(NULL));
    int times = 0;
    int totalGames = 1000000;
    // Array of letters
    char letters[7] = {'C', 'E', 'M', 'O', 'P', 'R', 'T'};
    for (int i = 0; i < totalGames; i++)
    {
        char temp[7];
        for (int j = 0; j < 7; j++)
        {
            int random = rand() % 7;
            bool isInTemp = false;
            for (int k = 0; k < j; k++)
            {
                if (temp[k] == letters[random])
                {
                    isInTemp = true;
                    break;
                }
            }
            if (!isInTemp)
            {
                temp[j] = letters[random];
                if (j == 6)
                {
                    if (temp[0] == 'C' & temp[1] == 'E' & temp[2] == 'M' & temp[3] == 'O' & temp[4] == 'P' & temp[5] == 'R' & temp[6] == 'T')
                    {
                        times += 1;
                    }
                }
            }
            else
            {
                j--;
            }
        }
    }
    cout << "Cantidad de veces que se produjo la palabra COMPUTER: " << times << endl;
    cout << "Probabilidad de que el orden lde las letras produzca una palabra COMPUTER: " << ((double)times / totalGames) * 100 << "%" << endl;
}
