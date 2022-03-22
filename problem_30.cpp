#include <iostream>
#include <math.h>

// Problem 30
// Un dado tiene el número 1 en dos catas opuestas. El dos en otras dos y
// el tres en las dos restantes. El dado se tira 500 veces. Encontrar la
// probabilidad de que la suma de los números exceda a 1020.

// @Author @JordiEspinozaMendoza
// @Date 22 March 2022
using namespace std;
int getDiceValue()
{
    int diceValues[6] = {1, 1, 2, 2, 3, 3};
    int random = rand() % 6;
    return diceValues[random];
}
int main()
{
    // Seed random number generator
    srand(time(NULL));
    // Variables
    int totalGames = 500;
    int totalSum = 0;
    // Loop
    for (int i = 0; i < totalGames; i++)
    {
        totalSum += getDiceValue();
    }
    cout << "Suma total: " << totalSum << endl;
    cout << "Probabilidad de que la suma de los números exceda a 1020: " << ((double)totalSum / 1020) * 100 << "%" << endl;
}