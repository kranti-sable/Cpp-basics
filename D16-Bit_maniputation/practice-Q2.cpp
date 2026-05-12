//wap to clear last i bits of number num=15,i=2.
#include<iostream>
using namespace std;
void clearIthBits(int num,int i){
    int bitmask = (~0)<<i;
    num=num & bitmask;
    cout<<num<<endl;
}
int main(){
    clearIthBits(15,2);//12
}