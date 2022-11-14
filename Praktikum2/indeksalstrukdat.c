#include <stdio.h>

char indeks(float n){
    if (n == 4.00){
        return 'A';
    }else if (n >= 3.00 && n < 4.00){
        return 'B';
    }else if (n >= 2.00 && n < 3.00){
        return 'C';
    }else if (n >= 1.00 && n < 2.00){
        return 'D';
    }else{
        return 'E';
    }
}

int main(){
    int nilai=0,i=0,lulus=0;
    float mean=0.00;

    scanf("%d", &nilai);
    while (nilai != -999){
        if (nilai >= 0 && nilai <= 4){
            mean += nilai;
            i++;
            if (nilai >= 3){
            lulus++;
            }
        }
        scanf("%d", &nilai);
    }
    if (i == 0){
        printf("Tidak ada data\n");
    }
    else{
        mean = mean/i;
        printf("Jumlah mahasiswa yang lulus = %d\n", lulus);
        printf("Nilai rata-rata = %.2f\n", mean);
        printf("Indeks akhir kelas = %c\n", indeks(mean));
    }
}