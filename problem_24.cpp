#include <iostream>
#include <math.h>

// Problem 24
// Seleccionar los diamantes de una baraja de 52 cartas
// ¿Cuál es la probabilidad de haber barajado los 4, 5, 6 ,7 y 8 en esa secuencia?

// @Author @JordiEspinozaMendoza
// @Date 20 March 2022

using namespace std;

int main()
{
    srand(time(NULL));
    // Array of cards
    int cards[52];
    int start = 4;
    int end = 8;
    int times = 0;
    // For loop to fill the cards
    for (int i = 0; i < 52; i++)
    {
        cards[i] = i;
    }
    // For loop to shuffle the cards
    for (int i = 0; i < 52; i++)
    {
        int random = rand() % 52;
        int temp = cards[i];
        cards[i] = cards[random];
        cards[random] = temp;
    }
    // For loop to check if the cards are in the correct sequence (4, 5, 6, 7, 8)
    for (int j = 0; j < 52; j++)
    {
        if (cards[j] == 4 && cards[j + 1] == 5 && cards[j + 2] == 6 && cards[j + 3] == 7 && cards[j + 4] == 8)
        {
            times++;
        }
    }
    cout << "Times: " << times << endl;
}