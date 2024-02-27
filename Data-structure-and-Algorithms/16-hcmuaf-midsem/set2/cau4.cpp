#include <iostream>

using namespace std;

int main(){

    string s="zzzhello*#/999//yyyZZZ000";
    int k=4; //key, k in Z_0+.
    //cin>>s>>k;
    cout<<s<<"\n";
    
    for(int i=0; i<s.length(); i++){
        if(s[i]>=97 && s[i]<=122){ 

            s[i]=122-(122-s[i]+k)%(122-97+1);
        }
        else if(s[i]>=65 && s[i]<=90){

            s[i]=90-(90-s[i]+k)%(90-65+1);

        }
        else if(s[i]>=48 && s[i]<=57){

            s[i]=57-(57-s[i]+k)%(57-48+1);

        } cout<<s[i];
    } return (0);

}