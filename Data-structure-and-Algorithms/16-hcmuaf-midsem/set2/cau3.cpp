#include <iostream>


using namespace std;

int main(){
    int m, n; //m hang
    cin>>n>>m;
    int a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
            
    int M=0, I;
    for(int i=0; i<m; i++){
        int S=0;
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
            S+=a[i][j];
        }
        if(M<=S){
            M=S;
        	I=i;
        } cout<<"\n";
    }
    cout<<"\n";
    for(int i=0; i<n; ++i)
        cout<<a[I][i]<<" ";
    return (0);
}