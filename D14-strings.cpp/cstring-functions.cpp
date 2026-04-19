//<cstring> functions 
/* --strcpy : to copy string from sorce to destination.
   --strcat : to concatnate /join str1 with str2.
   --strcmp : compares 2 strings based on valuse (-ve,0,+ve) */
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // strcpy
    char str1[100];
    char str2[100]="hello world";
    strcpy(str1,str2);
    cout<<str1<<endl;//hello world

    // strcat 
    char str3[100]="hello";
    char str4[100]="world";
    strcat(str3,str4);
    cout<<str3<<endl;//helloworld

    //strcmp
    char str5[50]="abc";
    char str6[50]="xyz";
    cout<<strcmp(str5,str6)<<endl;//-value

    char str7[50]="xyz";
    char str8[50]="abc";
    cout<<strcmp(str7,str8)<<endl;//+value
    return 0;
}