#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma=0;
    printf("Exibindo numeros ate 100 e sua soma \n");
    for(i=0; i<=100; i++){
        //printf("%d\n",i);
        soma=  soma + i;
        printf("%d\n",soma);
    }
    return 0;
}
