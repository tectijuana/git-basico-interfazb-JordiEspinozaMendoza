#include <iostream>
#include <math.h>

// Problem 31
// Un jugador entra al casino de Las Vegas con $1000 y apuesta $1 al negro
// de la ruleta cada minuto. ¿Cuál es la probabilidad de que tenga $1000 o más
// al cabo de una hora?
// @Author @JordiEspinozaMendoza
// @Date 22 March 2022
using namespace std;
int getDiceValue()
{
    int diceValues[6] = {1, 2, 3, 4, 5, 6};
    int random = rand() % 6;
    return diceValues[random];
}
int main()
{
    // Seed random number generator
    srand(time(NULL));
    // Variables
    int totalMinutes = 60;
    int totalSum = 1000;
    // Loop
    for (int i = 0; i < totalMinutes; i++)
    {
        int diceValue = getDiceValue();
        int dice2Value = getDiceValue();
        if (diceValue == 1 && dice2Value == 1)
        {
            totalSum += 2;
        }
        else
        {
            totalSum -= 1;
        }
    }
    // Print
    cout << "Total sum: " << totalSum << endl;
    cout << "La probabilidad de tener $1000 o más es: " << ((float)totalSum / 1000) * 100 << "%" << endl;
}