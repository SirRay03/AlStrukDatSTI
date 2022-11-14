#include <stdio.h>

int main(){
    int input,output;
    scanf("%d", &input);
    output = 0;
    while(input>0){
        output = output*10 + input%10;
        input/=10;
    }
    printf("%d\n", output);
    return 0;
}