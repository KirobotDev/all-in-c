#include <stdio.h>
#include <unistd.h>

int main(void) {
    int time;
    int i = 0;
    printf("Choisis le temps que tu veux fair passez ! : ");
    scanf("%d", &time);

    while (i != time)
    {
        printf("%d secondes\n", i);
        sleep(1);
        i++;
        if (i == time)
        {
            printf("%d secondes\n", i);
            break;
        };
    };

    return 0;
}