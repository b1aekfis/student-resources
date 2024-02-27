#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
        0 2 3 4 1
        2 1 8 7 1
        8 8 8 8 8
        4 7 1 4 1
    */

    int m, n; //m hang
    cin>>n>>m;

    //CAP PHAT VUNG NHO MA TRAN
    vector<vector<int>> Matrix(m, vector<int> (n));

    //KHOI TAO CAC PHAN TU
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>Matrix[i][j];

    //HIEN THI MA TRAN + TIM DAY MA TRAN CO TONG LON NHAT
    int M=0, I;
    for(int i=0; i<m; i++){
        int S=0;
        for(int j=0; j<n; j++){
            cout<<Matrix[i][j]<<" ";
            S+=Matrix[i][j];
        }
        if(M<=S){
            M = S;
            I = i;
        }
        cout << "\n";
    }

    //DAY MA TRAN CO TONG LON NHAT
    for(int i=0; i<n; i++){
        cout << Matrix[I][i]<< " ";
    }
    return 0;
}