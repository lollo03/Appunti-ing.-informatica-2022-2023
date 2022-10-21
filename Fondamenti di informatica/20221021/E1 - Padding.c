#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, k, i, nCfire, deltaCifre;
    do{
        scanf("%d %d", &num, &k);
    }while(num<=0 || k<=0);
    
    nCfire = 0;
    for(i=1; num/i > 0; i=i*10, nCfire++);
        
    if(k < nCfire)
        printf("%d \n", num);
    else{
        deltaCifre = k-nCfire;
        for(i=0; i<deltaCifre; i++)
            printf("0");
        printf("%d \n", num);
    }
    
    
    return 0;
}
