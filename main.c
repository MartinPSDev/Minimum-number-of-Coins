/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int total_change = 0;

  printf ("Enter change amount / Ingrese la cantidad de cambio: ");

  scanf ("%d", &total_change);

  int minimum_coins (total_change);

  printf ("The amount of coins is / La cantidad de monedas es: %d", minimum_coins ());


  return 0;
}


int minimum_coins (int change)
{

  int all_coins[4] = { 25, 10, 5, 1 };
  int coins = 0;

  for (int i = 0; i < 4; i++)
    {
      coins += (change / all_coins[i]);
      change = change % all_coins[i];
      if (!(change))
	{
	  return coins;
	}
    }
}
