#include <stdio.h>

int main(){
    char str1[100],str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int i=0;
    int found=0;
    while(str1[i]!='\0' && str2[i]!='\0' && found==0){
        if (str1[i]!=str2[i] && str1[i]!=str2[i]+32 && str1[i]!=str2[i]-32){
            printf("Tidak\n");
            found=1;
        }
        i++;
    }
    if (found == 0){
        printf("Ya\n");
    }
    return 0;
}