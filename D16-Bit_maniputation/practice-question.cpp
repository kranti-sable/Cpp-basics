//In the binnary number we have to find ith position and check if ith  bit have 0 or 1.
#include<iostream>
using namespace std;
int getithbit(int num,int i){
    int bitmark=1<<i;
   if(!(num&bitmark)){
    return 0;
   }else{
    return 1;
   }
}
int main(){
    cout<<getithbit(6,2)<<endl;
    cout<<getithbit(7,5)<<endl;
}