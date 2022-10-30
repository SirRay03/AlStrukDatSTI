#include <stdio.h>
#include <string.h>

int main(){
    char input[10];
    scanf("%s",input);
    int i=0,j=48;
    int count=0;
    for (j=48;j<58;j++){
        for (i=0;i<strlen(input);i++){
            if (input[i]==j){
                count++;
            }
        }
        printf("%d",count);
        count=0;
    }
    printf("\n");
    return 0;
}