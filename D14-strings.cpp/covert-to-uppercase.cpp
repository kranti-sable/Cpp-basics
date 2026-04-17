#include<iostream>
#include<cstring>
using namespace std;
void touppercase(char word[],int n){
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){//uppercase
            word[i]=ch-'A'+'a';
        }else{//lowercase
            continue;
        }
    }
}
int main(){
    char word[]="ABCDE";
    
    touppercase(word,strlen(word));
    cout<<word<<endl;
    return 0;
}