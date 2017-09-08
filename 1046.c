

#include <stdio.h>

int main()

{

    int start,finish,running;

    scanf("%d %d", &start,&finish);

    running = finish-start;

    if (running< 0)

    {

        running = 24 + running;

    }

    if (start == finish)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", running);



    return 0;

}
