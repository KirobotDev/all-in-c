#include <stdio.h>

int main(void) {
    int table;
    printf("Donne moi le chiffre ou tu veux sa table de multiplication : ");
    scanf("%d", &table);
    int i = 1;

    while (i < 10)
    {
        printf("%d = %d = %d\n", table, i, table * i);
        i++;
        if (i == 0)
        {
            break;
        };
    };
    return 0;
}