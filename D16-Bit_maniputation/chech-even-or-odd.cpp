//check if the number id even or odd
#include<iostream>
using namespace std;
void oddoreven(int num){
    if(!(num&1)){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
    cout<<endl;
}
int main(){
    oddoreven(5);//odd
    oddoreven(8);//even
}