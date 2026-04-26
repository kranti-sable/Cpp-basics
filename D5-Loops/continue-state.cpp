#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        if(i==3){
            continue;//3 wil not print.
        }
        cout<<i<<endl;
    }
    return 0;
}
