#include <iostream>
#include <math.h>

// Problem 25
// Encontrar la posibilidad de que más del 70% de los resultados
// sean soles si una moneda perfecta se lanza 200 veces.

// @Author @JordiEspinozaMendoza
// @Date 20 March 2022
using namespace std;

int main(){
    srand(time(NULL));
    int times = 0;
    int totalGames = 200;
    for (int i = 0; i < totalGames; i++)
    {
        // Get a random number between 1 and 2
        int random = rand() % 2;
        // If the random number is 1, the coin is heads (CARA)
        if (random == 1)
        {
            times+=1;
        }
    }
    // We calculate the probability of getting more than 70% of the results
    double prob = ((double)times / totalGames) * 100;
    cout << "Probabilidad de que obtengamos una cara: " << prob << "%" << endl;
    // We get the probability of getting more than 70% of the results
    double prob3 = ((double)prob / 70) * 100;

    cout << "Probabilidad de que más del 70% de los resultados sean soles: " << prob3 << "%" << endl;
}
