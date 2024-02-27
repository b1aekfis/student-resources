#include <iostream>

using namespace std;

int main(){

    string s="zzzhello*#/999//yyyZZZ000";
    int k=1; //key, k in Z+.
    //cin>>s>>k;
    cout<<s<<"\n";
    
    for(int i=0; i<s.length(); i++){
        if(s[i]>=97 && s[i]<=122){ 
        /*
        
        Ma hoa ky tu s[i] (97<=s[i]<=122) tien len k vi tri trong bang chu cai,
        sao cho s[i] tro ve vi tri dau tien neu vi tri tiep theo vuot ra khoi mien gia tri cua bang chu cai.

        a -> z co mien gia tri so nguyen trong khoang tu 97 toi 122 thuoc ma Ascii,
        gom 26 (122-97+1) vi tri.

        Mot phep chia mod voi moi so k tren so vi tri ta luon co: 
        0<=k%26<=25.
        Vi vay:
        ----khi s[i] tien len k vi tri----> s[i]=[(s[i]-97+k)%26] + 97
        hoac:
        ----khi s[i] lui lai k vi tri----> s[i]= 122-[(122-s[i]+k)%26]

        */

            s[i]=(s[i]-97+k)%(122-97+1) + 97;

        }
        else if(s[i]>=65 && s[i]<=90){

            s[i]=(s[i]-65+k)%(90-65+1) + 65;

        }
        else if(s[i]>=48 && s[i]<=57){

            s[i]=(s[i]-48+k)%(57-48+1) + 48;

        } cout<<s[i];
    } return (0);

}