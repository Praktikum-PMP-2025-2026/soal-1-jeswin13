/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu 22-04-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : soal1.c
 *   Deskripsi           : Pengolahan Array
 * 
 */


#include <stdio.h>

void sum (int x[],int N){
    int i;
    int sum = 0;
    for (i = 0; i <N; i ++){
        sum = sum + x[i];
    }
    printf("SUM %d",sum);
    return;
}

void Average (int x[], int N){
    int i;
    int sum = 0;
    for (i = 0; i<N; i++){
        sum = sum + x[i];
    }
    double avg = (float)sum/N;
    printf("AVG %.2f",avg);
    return;
}

void Max (int x[], int N){
    int i;
    for (i = 0; i<N-1;i++){
        for (int j = 0; j <N-i-1; j++){
            if (x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    printf("MAX %d",x[N-1]);
    return;
}


int max1 (int x[], int N){
    int i;
    for (i = 0; i<N-1;i++){
        for (int j = 0; j <N-i-1; j++){
            if (x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    return (x[N-1]);
}

void Idx (int x[],int N, int n){
    int ketemu =0;
    for (int i = 0; i<N; i++){
        if (x[i]==n){
            if (x[i]= x[i+1]){
                printf("IDX %d",i-1);
            }else {
                printf("IDX %d",i);
            }
            ketemu = 1;
            break;
        }
    } if (ketemu == 0){
        printf("data tidak ada di dalam array\n");
    }
    return ;
}


int main(){
    int n;
    scanf ("%d",&n);
    int x[n];

    for (int k =0; k<n;k++){
        scanf("%d",&x[k]);
    }

    sum (x,n);
    Average (x,n);
    Max (x,n);
    int a = max1(x,n);
    Idx (x,n,a);

    return 0;
}
