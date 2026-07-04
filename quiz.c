#include <stdio.h>

int main(void) {
    int response = 1;
    int user_response;
    int i = 0;

    printf("Quel et lexpression discord la plus genante 1 uhq 2 1337 : ");
    scanf("%d", &user_response);

    if (user_response == response)
    {
        printf("Bienjouer +1 point\n");
        i += 1;
    } else {
        printf("Perdu\n");
    }
    
    int usrr;
    int rps = 1;

    printf("Qui et le mec qui a cree kirosb ? 1 xql 2 x2lx : ");
    scanf("%d", &usrr);

    if (usrr == rps)
    {
        printf("Bienjouer +1 point\n");
        i += 1; // on peut mètre i++ mais je pref i += qui au moin et non sensible a la casse il rajoute exactement ce d'ont j'ai envie en point :p
    } else {
        printf("Tu a perdu\n");
    }
    
    printf("Tu fini sur un total de %d point", i);

    return 0;
}