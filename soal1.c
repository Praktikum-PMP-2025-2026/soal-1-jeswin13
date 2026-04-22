/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu 22-04-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : soal1.c
 *   Deskripsi           : Pengolahan Array
 * 
 */


#include <stdio.h>

void sumArr(int x[], int N, int *sum) {
    *sum = 0;
    for (int i = 0; i < N; i++) {
        *sum += x[i];
    }
}

void avgArr(int sum, int N, float *avg) {
    *avg = (float)sum / N;
}

void maxArr(int x[], int N, int *max, int *idx) {
    *max = x[0];
    *idx = 0;

    for (int i = 1; i < N; i++) {
        if (x[i] > *max) {
            *max = x[i];
            *idx = i;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int sum, max, idx;
    float avg;

    sumArr(x, n, &sum);
    avgArr(sum, n, &avg);
    maxArr(x, n, &max, &idx);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);

    return 0;
}
