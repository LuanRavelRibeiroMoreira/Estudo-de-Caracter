
#include <stdio.h>
#include <stdlib.h>
int main()
{
  
    //getchar 
    char letra1;
    printf("digite uma letra: \n");
    letra1 = getchar( );
    printf("Caracter lido: %c \n", letra1);
    
    //getc
    
    char letra2;
    printf("digite uma letra: \n");
    letra2 = getc(stdin);
    printf("Caracter lido: %c \n", letra2);

    //fgetc (file)
    char letra3;
    printf("digite uma caracter: ");
    letra3 = fgetc(stdin);
    
    printf("Caracter lido : %c\n", letra3);



    return 0;
}



