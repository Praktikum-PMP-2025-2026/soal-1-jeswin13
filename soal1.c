/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu 22-04-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : soal1.c
 *   Deskripsi           : Pengolahan Array
 * 
 */


#include <stdio.h>

void sum(int x[], int N){
    int total = 0;
    for (int i = 0; i < N; i++){
        total += x[i];
    }
    printf("SUM %d\n", total);
}

void Average(int x[], int N){
    int total = 0;
    for (int i = 0; i < N; i++){
        total += x[i];
    }
    double avg = (double) total / N;
    printf("AVG %.2f\n", avg);
}

int max1(int x[], int N){
    int maks = x[0];
    for (int i = 1; i < N; i++){
        if (x[i] > maks){
            maks = x[i];
        }
    }
    return maks;
}

void Max(int x[], int N){
    int maks = max1(x, N);
    printf("MAX %d\n", maks);
}

void Idx(int x[], int N, int n){
    for (int i = 0; i < N; i++){
        if (x[i] == n){
            printf("IDX %d\n", i);
            return;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int x[n];

    for (int k = 0; k < n; k++){
        scanf("%d", &x[k]);
    }

    sum(x, n);
    Average(x, n);
    Max(x, n);
    int a = max1(x, n);
    Idx(x, n, a);

    return 0;
}
