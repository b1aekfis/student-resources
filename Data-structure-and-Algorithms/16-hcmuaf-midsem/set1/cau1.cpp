#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n){
    if(n<2) return false; // n in N\{1}
    /* 

    Voi a la mot so tu nhien, vi sqrt(n)*sqrt(n) = [sqrt(n)]^2 = n:
    => tich hai thua so cua n (neu co) thi hai thua so khong the dong thoi cung < sqrt(n) hoac dong thoi cung > sqrt(n)
    => hai thua so phai co mot > sqrt(n) va mot < sqrt(n), hoac ca hai bang nhau neu sqrt(n) la mot so tu nhien 
    => vi vay co the thu hep kich thuoc vong lap chia thu: [2, sqrt(n)] thay cho [2, n).

    */
    for(int i=2; i<=sqrt(n); ++i)
        if(n%i==0)
            return false;
    return true;
}

int main(){
    int n=88888;
    if(is_prime(n)) {
        cout<<"YES\n";
        cout<<n;
        return 0;
    }
    else {
        cout<<"NO\n";
        for(int i=2; n!=1; ++i){

            if(n%i==0){
                n/=i;
                cout<<i<<" ";
                i=1;
            }

        }
    } return (0);
}