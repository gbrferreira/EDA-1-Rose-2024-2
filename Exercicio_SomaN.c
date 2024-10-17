#include <stdio.h>

int main(){

    int n, x, i, soma;
    soma= 0;
    i= 0;
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        scanf("%d", &x);
        soma+= x;
    }
    printf("%d\n", soma);

    return 0;
    }
