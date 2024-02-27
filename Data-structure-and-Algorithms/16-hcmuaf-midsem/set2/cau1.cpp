#include <iostream>
#include <vector>

#define pb push_back

int n;
std::vector <int> v;

int main(){
    std::cin>>n;
    while(n>0){
        v.pb(n%10);
        n/=10;
    } std::cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); ++i) 
        std::cout<<v[i];
}