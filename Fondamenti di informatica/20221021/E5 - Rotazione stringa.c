#include <stdio.h>
#include <string.h>

#define LMAX 50

int main(int argc, char const *argv[])
{
    char seq1[LMAX +1], seq2[LMAX + 1];
    int n, i, lenSeq, ind;

    gets(seq1);

    do{
        scanf("%d", &n);
    }while(n > LMAX);
    
    lenSeq = strlen(seq1);

    for(i=0; i<lenSeq; i++){
        ind = i + n;
        if(ind >= lenSeq)
            ind = ind-lenSeq;
        seq2[ind] = seq1[i];
    }

    seq2[lenSeq] = '\0';

    printf("%s \n", seq2);
    return 0;
}
