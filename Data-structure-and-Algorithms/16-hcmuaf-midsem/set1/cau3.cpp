#include <iostream>

using namespace std;

int main(){
    /*
        0 2 3 4
        2 1 8 7
        3 8 2 1
        4 7 1 4

        ma tran vuong kich thuoc 4 doi xung qua duong cheo chinh. 

    */
   int n;
   cin>>n;
   int a[n][n];
   
   for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) 
            cin>>a[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) 
            cout<<a[i][j]<<" ";
        cout<<endl;    
    }

    for(int i=0, j=i+1; i<(n-1); j++){
        if(a[i][j]!=a[j][i]){
            cout<<"NO"; //khong doi xung
            return 0;
        }
        if(j==(n-1)){
            i++;
            j=i;
        }
    } cout<<"YES"; //doi xung

    return 0;
}