#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int ordi = rand() % 3 + 1;
    int joueur;

    printf("Pierre = 1 Ciseau = 2 Fueille = 3 : ");
    scanf("%d", &joueur);
    if (joueur == ordi)
    {
        printf("egalite !");
    } else if (joueur == 1 && ordi == 2)
    {
        printf("Le joueur a gagne");
    } else if (joueur == 2 && ordi == 3)
    {
        printf("Le Joueur a gagne");
    } else if (joueur == 3 && ordi == 1)
    {
        printf("Le joueur a gagne");
    } else
    {
        printf("L'ordinateur a gagne");
    }
    
    return 0;
}