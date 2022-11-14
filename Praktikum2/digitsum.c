#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    int sum=0;
    while(input>0){
        sum+=input%10;
        input/=10;
    }
    printf("%d\n", sum);
    return 0;
}