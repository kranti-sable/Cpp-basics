//check if the given word is palindrome or not.
#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            cout<<"its not palindrome";
            return false;
        }
        st++;
        end--;
    }
    cout<<"its palindrome"<<endl;
    return true;
}
int main(){
      char word[]="racecar";
      ispalindrome(word,strlen(word));
      return 0;
}