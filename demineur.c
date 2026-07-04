#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int nombre = rand() % 24 + 1;
    int i = 0;
    int choix;

    while (i < 23)
    {
        printf("Choisis un nombre entre 1 est 24 : ");
        scanf("%d", &choix);
        
        if (choix > 24)
        {
            printf("Choisis un chiffre entre 1 et 24 pas plus pas moin !!\n");
            break;
        }

        if (choix == nombre)
        {
            printf("Tu a perdu mais ses pas grave relance le jeux et recommence ;)\n");
            return 1;
            break;
        } else {
            printf("Continue tu a pas encore perdu\n");
            i++;
        }
    }

    return 0;
}