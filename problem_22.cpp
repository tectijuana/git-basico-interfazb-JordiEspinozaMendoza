#include <iostream>
#include <math.h>

// Problem 22
// Sacar dos números al azar entre 1 y 20. ¿Cuál es la probabilidad
// de que su suma sea 12?

// @Author JordiEspinozaMendoza
// @Date 10 March 2022

using namespace std;

// Function to get a random number between 1 and 20
int getRandomNumber()
{
  return (rand() % 20);
}
int main()
{
  // Set a new seed for every execution
  srand(time(NULL));
  // Variables declaration
  int n1, n2, sum;
  double prob;

  // Get 2 random numbers between 1 and 20
  n1 = getRandomNumber();
  n2 = getRandomNumber();

  // Print the numbers
  cout << "n1: " << n1 << endl;
  cout << "n2: " << n2 << endl;
  // Sum n1 and n2
  sum = n1 + n2;

  // Print the sum
  cout << "Sum: " << sum << endl;
  // Get the percentage of the sum that is 12
  prob = ((double)sum / 12) * 100;

  // Print the prob
  cout << "Prob: " << prob << "%" << endl;

  return 0;
}
