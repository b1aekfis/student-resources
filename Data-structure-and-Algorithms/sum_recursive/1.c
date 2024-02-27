#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recursive_1 (int n);
int tail_1(int n, int x);
int recursive_2(int n);
int tail_2 (int n, int x);
float recursive_3 (float n);
float tail_3 (float n, float x);

int main(){

    int n = 1;

    printf("s(%d) = %d\n", n, recursive_1(2*n+1)); // S(n) = 1 + 3 + 5 + ... + (2n+1), n in Z_0+
    printf("s(%d) = %d\n", n, tail_1(2*n + 1, 1));
    printf("s(%d) = %d\n", n, recursive_2(n)); // S(n) = 1^2 + 2^2 + ... + n^2, n in N
    printf("s(%d) = %d\n", n, tail_2(n, 1));
    printf("S(%d) = %f\n", n, recursive_3(n)); // S(n) = 1 + 1/2 + 1/3 + ... + 1/n, n in N
    printf("S(%d) = %f\n", n, tail_3(n, 1/1));

    return 0;
}

int recursive_1(int n){

    if (n<0) // if n out Z_0+, return 0.
        return 0;

    if (n==1)
        return 1;

    return recursive_1(n - 2) + n;
}

// fix stack (call stack) overflow for recursive_1.
int tail_1(int n, int x){

    if(n<0)
        return 0; // if n out Z_0+, return 0.

    if (n == 1)
        return x;

    return tail_1 (n - 2, x + n);
}

int recursive_2(int n){
    if (n<=0) // if n out N, return 0.
        return 0;

    int square_n = pow(n, 2);
    if (n == 1)
        return 1;

    return recursive_2(n - 1) + square_n;
}

// fix stack (call stack) overflow for recursive_2
int tail_2 (int n, int x){
    if(n<=0) // if n out N, return 0.
        return 0;

    int square_n = pow(n, 2);
    if (n == 1)
        return x;

    return tail_2(n - 1, x + square_n);
}

float recursive_3 (float n) {
    if (n<=0) // if n out N, return 0.
        return 0;

    float ratio = 1/n;
    if(n == 1)
        return ratio;

    return recursive_3(n - 1) + ratio;
}

// fix stack (call stack) overflow for recursive_3
float tail_3 (float n, float x){
    if(n<=0) // if n out N, return 0.
        return 0;

    float ratio = 1/n;
    if(n == 1)
        return x;
        
    return tail_3 (n - 1, x + ratio);
}