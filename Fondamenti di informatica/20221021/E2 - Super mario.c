#include <stdio.h>

#define CAR '#'
#define SPAZ ' '
#define NSPAZ 2
#define HMAX 16

int main(int argc, char const *argv[])
{
    int h, i, j;
    
    do{
        scanf("%d", &h);
    }while(h<=0 || h>HMAX);

    for(i=h; i>=0; i--){
        for(j=0; j<i; j++)
            printf("%c", SPAZ);

        for(j=i; j<h; j++)
            printf("%c", CAR);

        for(j=0; j<NSPAZ; j++)
            printf("%c", SPAZ);

        for(j=i; j<h; j++)
            printf("%c", CAR);

        printf("\n");
    }

    return 0;
}
