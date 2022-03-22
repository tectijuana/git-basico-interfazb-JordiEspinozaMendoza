#include <iostream>
#include <math.h>

// Problem 29
// Los registros medicos indican que 40% de los casos de un malestar
// particular es fatal. SI el Centro Médico admite 8 pacientes que padecen
// ese mismo malestar ¿cuál es la probabilidad de que al menos 2
// sanen?

// @Author @JordiEspinozaMendoza
// @Date 22 March 2022
using namespace std;

int main()
{
    // Seed random number generator
    srand(time(NULL));
    // Variables
    int timesRecovery = 0;
    int totalGames = 1000000;
    // Loop
    for (int i = 0; i < totalGames; i++)
    {
        // Number of patients
        int patientsRecovered = 0;
        // Loop every 8 patients
        for (int j = 0; j < 8; j++)
        {
            // Get the probability of recovery
            int random = rand() % 100;
            // If the probability is less than 40%
            if (random < 40)
            {
                patientsRecovered++;
            }
        }
        // If at least 2 patients recovered
        if (patientsRecovered >= 2)
        {
            // Increase the number of times recovered
            timesRecovery++;
        }
    }
    cout << "Cantidad de veces que al menos 2 pacientes se recuperaron: " << timesRecovery << endl;
}
