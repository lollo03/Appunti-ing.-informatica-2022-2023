#include <stdio.h>

#define OK "Vero \n"
#define KO "Falso \n"

int sceltaMenu();
int valInput();
int isPrimo(int);
int fattoriale(int);
int isPalindromo(int);
void output(int);

int main(int argc, char const *argv[])
{
    int scelta, num;
    do{
        scelta = sceltaMenu();
        if(scelta == 1)
            num = valInput();
        else if (scelta == 2)
        {
            output(isPrimo(num));
        }else if(scelta == 3){
            printf("Fattoriale: %d \n", fattoriale(num));
        }else if(scelta == 4){
            output(isPalindromo(num));
        }
    }while(scelta != 0);

    printf("Ciao! \n");
    return 0;    
}


int sceltaMenu(){
    int scelta;
    do{
        printf("\n\n\n1. acquisizione valore \n2. numero primo \n3. fattoriale \n4. palindromo \n0. termina\nInserisci la tua scelta: ");
        scanf("%d", &scelta);
    }while(scelta < 0 || scelta > 4);
    return scelta;
}

int valInput(){
    int in;

    do{
        printf("Inserisci un valore > 0: ");
        scanf("%d", &in);
    }while(in <= 0);
    
    return in;
}

int isPrimo(int in){
    int ris, i, meta;
    
    if(in == 2)
        ris = 1;
    else if(in == 1 || in%2 == 0)
        ris = 0;
    else{
        ris = 1;
        meta = in/2;
        for(i = 3; i<in && ris==1; i+=2){
            if(in%i == 0)
                ris = 0;
        }
    }
    return ris;
}

int fattoriale(int in){
    int ris, i;

    ris = 1;

    for(i=2; i<=in; i++){
        ris = ris*i; 
    }

    return ris;
}

int isPalindromo(int in){
    int div, resto, alContrario;
    div = in;
    alContrario = 0;
    while (div != 0) {
        resto = div % 10;
        alContrario = alContrario * 10 + resto;
        div /= 10;
    }

    return in == alContrario;

}

void output(int in){
    if(in == 1)
        printf(OK);
    else
        printf(KO);

    return;
}