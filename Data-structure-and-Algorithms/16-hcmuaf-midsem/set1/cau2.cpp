#include <iostream>

using namespace std;

int n;

int main(){
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n-1; i++)
        if((a[i]>=0 && a[i+1]>=0) || (a[i]<0 && a[i+1]<0)){
            cout<<"NO";
            return (0);
        }
        
    cout<<"YES";
    return (0);
}