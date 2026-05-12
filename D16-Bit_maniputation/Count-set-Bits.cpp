#include<iostream>
using namespace std;
int countSetBits(int num){
    int count =0;
    while(num>0){
        int lastDig = num & 1;
        count +=lastDig;
        num=num>>1;
    }
    cout<<count<<endl;
    return 0;
}
int main(){
    countSetBits(10);//12
    return 0;
}