#include <iostream>
#include <cmath>

using namespace std;

float recursive_7(float);
float tail_7(float , float);
float recursive_8 (float);
float tail_8(float , float);

int main(){
    float n=2;
    const float s=0;

    cout << "\nS(" << n << ") = " << recursive_7(n); // S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1), n in N
    cout << "\nS(" << n << ") = " << tail_7(n, s) << endl;

    cout << "\nS(" << n << ") = " << recursive_8(2*n+1); // S(n) = 1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2), n in Z_0+
    cout << "\nS(" << n << ") = " << tail_8(2*n+1, s) << endl;

    return 0;
}

float recursive_7(float n){
    if(n>0) {
        float i=n, j=n+1, s=i/j;
        return recursive_7(n-1) + s;
    } return 0; // if n out N, return 0 & escape recursive


/*
    float i=n, j=n+1, s=i/j;
    return (n>0)? recursive_7(n-1)+s : 0; 
*/

}

// fix stack (call stack) overflow for recursive_7
float tail_7(float n, float s){

    float i=n, j=n+1, r=i/j;
    return (n<=0) ? s : tail_7(n - 1, s + r); // if n out N, return s.
}


float recursive_8 (float n){
   
    if(n >= 1) {
        float i=n, j=n+1, s=0;
        s+=i/j;
        return recursive_8(n - 2) + s;
    } return 0; // if n out Z_0+, return 0 & escape recursive
}

// fix stack (call stack) overflow for recursive_8
float tail_8(float n, float s){
    float i = n, j = n + 1, r = i/j;
    return (n<0)? s : tail_8(n - 2, s + r); // if n out Z_0+ return s.
}