// Nhap xuat mang hai chieu
#include <stdio.h>

#define HANG    4
#define COT 	3

int main() {
    char matrix[HANG][COT];
    for(int i = 0; i < HANG; i++){
        for (int j = 0; j < COT; j++) {
            scanf("%s", &matrix[i][j]);
        }
    }
    printf("\n");

    for(int i = 0; i < HANG; i++) {
        for (int j = 0; j < COT; j++){
            putchar(matrix[i][j]);
        }
        printf("\n");
    }
}