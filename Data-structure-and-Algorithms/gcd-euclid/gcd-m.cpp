#include <iostream>

#define ll long long

int main() {
    ll a,b;
    std::cin>>a>>b;

    if(a<0 || b<0){
        a=abs(a);
        b=abs(b);
    }
    if(a==0 && b==0){
        return 0;
    }

    for(ll mod=a%b; mod!=0; mod=a%b) {

        a=b; 
        b=mod;

    }
    std::cout<<b;

    return 0;
}

// ll A, B;
// int main() {
//     std::cin>>A>>B;
//     while(true) {
//         ll mod=A%B;
//         if(mod==0) { std::cout<<B; return 0; }
//         A=B;
//         B=mod;
//     } return 0;
// }