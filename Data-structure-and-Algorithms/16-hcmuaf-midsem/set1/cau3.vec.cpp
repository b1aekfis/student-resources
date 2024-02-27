#include <iostream>
#include <vector>

using namespace std;

bool Is_Symmetric_Matrix(vector<vector<int>> &Matrix);

int main(){
    /*
        0 2 3 4
        2 1 8 7
        3 8 2 1
        4 7 1 4

        ma tran vuong kich thuoc 4 doi xung qua duong cheo chinh. 

    */

   // R HANG VA C COT
   int R, C;
   Input:
   cin>>R>>C; 

   if(R<=0 || C<=0) goto Input;
   
   //CAP PHAT VUNG NHO MA TRAN R HANG VA C COT
   vector<vector<int>> Matrix(R, vector<int> (C));

   //KHOI TAO CAC PHAN TU MA TRAN
   for(int i=0; i<R; i++)
        for(int j=0; j<C; j++) 
            cin>>Matrix[i][j];

    // HIEN THI MA TRAN
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++) 
            cout<<Matrix[i][j]<<" ";
        cout<<endl;    
    }

    //KIEM TRA TINH DOI XUNG CUA MA TRAN VUONG
    if(Is_Symmetric_Matrix(Matrix)){
        cout << "YES";
    }
    else cout <<"NO";

    return 0;
}

bool Is_Symmetric_Matrix(vector<vector<int>> &Matrix){

    if(Matrix.size()!=Matrix[0].size())
        return false; //ma tran khong vuong nen khong co doi xung.   
    for(int i=0, j=i+1; i<(Matrix.size()-1); j++){
        if(Matrix[i][j]!=Matrix[j][i]){
            return false; //khong doi xung.
        }
        if(j==(Matrix.size()-1)){
            i++;
            j=i;
        }
    } return true; //doi xung

}