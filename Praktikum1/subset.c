#include <stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    if ((input/2)%2==0 && input>0){
        printf("Ya\n");
    } else {
        printf("Tidak\n");
    }
    return 0;
}