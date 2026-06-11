#include <stdio.h>

int main(){

    int soma =0;
    int m[1024][1024] = {0};

    for(int j=0; j<1024; j++){
        for(int i=0; i<1024; i++){
            soma += m[i][j];
        }
    }

    printf("%d\n", soma);
}
