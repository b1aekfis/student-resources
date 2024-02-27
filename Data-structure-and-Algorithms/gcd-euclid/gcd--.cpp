#include <iostream>

#define ll long long

// a>b, gcd(a,b) = gcd(a-b,b)
// b>a, gcd(a,b) = gcd(a,b-a)
// a=b, gcd(a,b) = a = b
ll gcd_euclid(ll a, ll b){

    if(a==0 || b==0){ // gcd(0,0)
        if(a==b){
            return 0; // zero is its own greatest divisor if greatest is understood in the context of the divisibility relation
        }
        if(a==0){ // gcd(0,b)
            return abs(b);
        }
        if(b==0){
            return abs(a);
        }
    }


    if(b>a){
        ll t=a;
        a=b;
        b=t;
    }

    if(a%b==0){
        return b;
    }

    while(a!=b) {

        ll c=a-b;

        if(b>c){
            a=b;
            b=c;
        }
        else{
            a=c;
        }

    }

    return b;

}

int main() {
    ll a, b;
    std::cin>>a>>b;

    if(a<0 || b<0){ // 1 <= a <= 10^18, 1 <= b <= 10^18
        std::cout << gcd_euclid(abs(a),abs(b));
        return 0;
    }

    std::cout << gcd_euclid(a, b);
    return 0;
}