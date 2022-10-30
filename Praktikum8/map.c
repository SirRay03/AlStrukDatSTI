#include <stdio.h>
#include "boolean.h"
#include "map.h"

/* MODUL Map
Deklarasi stack yang dengan implementasi array eksplisit-statik rata kiri
*/

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmpty(Map *M){
    return M->Count = Nil;
}
/* I.S. Sembarang */
/* F.S. Membuat sebuah Map M kosong berkapasitas MaxEl */
/* Ciri Map kosong : count bernilai Nil */

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmpty(Map M){
    return M.Count == Nil;
}
/* Mengirim true jika Map M kosong*/
/* Ciri Map kosong : count bernilai Nil */

boolean IsFull(Map M){
    return M.Count == MaxEl;
}
/* Mengirim true jika Map M penuh */
/* Ciri Map penuh : count bernilai MaxEl */

/* ********** Operator Dasar Map ********* */
valuetype Value(Map M, keytype k){
    int i;
    int found = 0;
    while (found == 0){
        if (M.Elements[i].Key == k){
            found++;
        }
        else{
            i++;
        }
    }
    if (found == 1){
        return M.Elements[i].Value;
    } else {
        return Undefined;
    }
}
/* Mengembalikan nilai value dengan key k dari M */
/* Jika tidak ada key k pada M, akan mengembalikan Undefined */

void Insert(Map *M, keytype k, valuetype v){
    if (IsEmpty(*M)){
        M->Elements[0].Key = k;
        M->Elements[0].Value = v;
        M->Count++;
    } else {
        int i;
        int found = 0;
        while (found == 0){
            if (M->Elements[i].Key == k){
                found++;
            }
            else{
                i++;
            }
        }
        if (found == 0){
            M->Elements[M->Count].Key = k;
            M->Elements[M->Count].Value = v;
            M->Count++;
        }
    }
}
/* Menambahkan Elmt sebagai elemen Map M. */
/* I.S. M mungkin kosong, M tidak penuh
        M mungkin sudah beranggotakan v dengan key k */
/* F.S. v menjadi anggota dari M dengan key k. Jika k sudah ada, operasi tidak dilakukan */

void Delete(Map *M, keytype k){
    int i;
    int found = 0;
    while (found == 0){
        if (M->Elements[i].Key == k){
            found++;
        }
        else{
            i++;
        }
    }
    if (found == 1){
        M->Elements[i].Key = M->Elements[M->Count].Key;
        M->Elements[i].Value = M->Elements[M->Count].Value;
        M->Count--;
    }
}
/* Menghapus Elmt dari Map M. */
/* I.S. M tidak kosong
        element dengan key k mungkin anggota / bukan anggota dari M */
/* F.S. element dengan key k bukan anggota dari M */

boolean IsMember(Map M, keytype k){
    int i;
    int found = 0;
    while (found == 0){
        if (M.Elements[i].Key == k){
            found++;
        }
        else{
            i++;
        }
    }
    if (found == 1){
        return true;
    } else {
        return false;
    }
}
/* Mengembalikan true jika k adalah member dari M */