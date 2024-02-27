#include <stdio.h>

int fac(int);
int fibo (int);

int main() {
    printf("%d\n", fac(5));
    printf("%d\n", fibo(8));
}

int fac(int n) {

    if (n<0){
        return 0;
    }
    return (n<2)? 1:n*fac(n-1);
}

int fibo (int n) {

    if (n<=0){
        return 0;
    }
    if (n==1 || n==2){
        return 1;
    }

    //1 1 2 3 5 8 13 21 34 55 89 144 233 ...
    return fibo(n-1) + fibo(n-2);
}