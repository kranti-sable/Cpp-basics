#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int row=3,col=4;

    int**matrix=new int*[row];
    for(int i=0;i<row;i++){
       matrix[i]=new int [col];
    }
    //data storeage
    int x=1;
    for(int  i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //both give same outputs
    cout<<matrix[2][2]<<endl;
    cout<<*(*(matrix+2)+2)<<endl;
    return 0;
}