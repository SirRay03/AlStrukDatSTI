#include <stdio.h>

int main(){
    int size,sisi,i,j;
    scanf("%d", &size);
    sisi = 2*size-1;
    for(i=0;i<sisi;i++){
        for(j=0;j<sisi;j++){
            if (i%2==0){
                if (j%2==0){
                    printf("O");
                }else{
                    printf("X");
                }
            }
            else{
                if (j%2==0){
                    printf("X");
                }else{
                    printf("O");
                }
            }
        }
        printf("\n");
    }
    return 0;
}