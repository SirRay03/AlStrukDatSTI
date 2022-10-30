#include <stdio.h>

int main(){
    int seconds;
    scanf("%d",&seconds);
    int hours = seconds/3600;
    int minutes = (seconds%3600)/60;
    int sec = (seconds%3600)%60;
    printf("%d detik = %d jam %d menit %d detik\n",seconds,hours,minutes,sec);
}