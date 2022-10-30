#include <stdio.h>
#include "boolean.h"
#include "set.h"

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmpty(Set *S){
    return S->Count = Nil;
}
/* I.S. Sembarang */
/* F.S. Membuat sebuah Set S kosong berkapasitas MaxEl */
/* Ciri Set kosong : count bernilai Nil */

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmpty(Set S){
    return S.Count == Nil;
}
/* Mengirim true jika Set S kosong*/
/* Ciri Set kosong : count bernilai Nil */

boolean IsFull(Set S){
    return S.Count == MaxEl;
}
/* Mengirim true jika Set S penuh */
/* Ciri Set penuh : count bernilai MaxEl */

/* ********** Operator Dasar Set ********* */
void Insert(Set *S, infotype Elmt){
    int i;
    int found = 0;
    for(i=0;i<S->Count;i++){
        if(S->Elements[i] == Elmt){
            found++;
        }
    }
    if (found==0) {
        S->Elements[S->Count] = Elmt;
        S->Count++;
    }
}
/* Menambahkan Elmt sebagai elemen Set S. */
/* I.S. S mungkin kosong, S tidak penuh
        S mungkin sudah beranggotakan Elmt */
/* F.S. Elmt menjadi anggota dari S. Jika Elmt sudah merupakan anggota, operasi tidak dilakukan */

void Delete(Set *S, infotype Elmt){
    int i;
    int found = 0;
    while (found == 0){
        if (S->Elements[i] == Elmt){
            found++;
        }
        else{
            i++;
        }
    }
    if (found == 1){
        for (i;i<S->Count;i++){
            S->Elements[i] = S->Elements[i+1];
        }
        S->Count--;
    }
}
/* Menghapus Elmt dari Set S. */
/* I.S. S tidak kosong
        Elmt mungkin anggota / bukan anggota dari S */
/* F.S. Elmt bukan anggota dari S */

boolean IsMember(Set S, infotype Elmt){
    int i;
    int found = 0;
    while (found == 0){
        if (S.Elements[i] == Elmt){
            found++;
        }
        else{
            i++;
        }
    }
    if (found == 1){
        return true;
    }
    else{
        return false;
    }
}
/* Mengembalikan true jika Elmt adalah member dari S */