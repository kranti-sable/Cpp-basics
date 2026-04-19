//reverse achar array 
#include <iostream>
#include<cstring>
using namespace std;
void reversearr(char word[],int n){
      int st=0,end=n-1;
      while(st<end){
        swap(word[st++],word[end--]);
      }
      cout<<word<<endl;
}
int main(){
    char word[]="code";
    reversearr(word,strlen(word));
    return 0;
}