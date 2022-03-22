#include <iostream>
#include <math.h>

// Problem 23
// Simular el lanzamiento de tres dados y determinar
// la probabilidad de que por lo menos uno de los tres
// dados muestre un tres.

// @Author @JordiEspinozaMendoza
// @Date 10 March 2022

using namespace std;
int getRandomNumber()
{
  return (rand() % 6) + 1;
}
int main()
{
    srand(time(NULL));
    // Variables
    int item1, item2, item3;
    int totalTimes = 0;
    int totalGames = 0;
    double prob;
    for (item1 = 1; item1 <= 6; item1++)
    {
        for (item2 = 1; item2 <= 6; item2++)
        {
            for (item3 = 1; item3 <= 6; item3++)
            {
                int prob1 = getRandomNumber();
                int prob2 = getRandomNumber();
                int prob3 = getRandomNumber();
                if (prob1 == 3 || prob2 == 3 || prob3 == 3)
                {
                    totalTimes+=1;
                }
                totalGames+=1;

            }
        }
    }

    cout << "Total de veces que se mostró tres: " << totalTimes << endl;
    cout << "Total de juegos: " << totalGames << endl;
    prob = ((double)totalTimes / totalGames) * 100;
    cout << "Probabilidad de que por lo menos uno de los tres dados muestre un tres: " << prob << "%" << endl;
}
