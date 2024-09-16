#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Prototypage
float syracuse(float u_n);


//main

int main()
{
test_conjecture(float u_0);
}

float syracuse(float u_n)
{
  if (u_n % 2 == 0)
  {
    u_n1 = u_n/2;
  }

  else()
  {
      u_n1 = 3*u_n + 1;
  }

  return u_n1;
}

void test_conjecture (float u_0)
{
    float u_p ;
    float u_n = u_0;
    int n=0;
    int *n_tab;
    float *tableau_valeurs;
    int tailleTableau = 1000; tableau_valeurs, n_tab,

    n_tab = (int *) malloc(tailleTableau * sizeof(int));
    tableau_valeurs = (float *) malloc(tailleTableau) * sizeof(int));

    n_tab[0]=0 ;
    tableau_valeurs[0] = u_0 ;

    while (u_n != 1)
    {
      u_n1 = syracuse(u_n);
      u_n=u_n1;
      n=n+1;
      tableau_valeurs[n] = u_n;
      n_tab[n] = n;
    }

        maxi = max(tableau_valeurs);
        if (type(maxi) == int)
        {
            altitude_u_0=maxi;
          }

    u_p=u_n;
    
    printf("u_p_n = %lf, altitude u_0 = %lf",u_p,n, altitude_u_0);
}
