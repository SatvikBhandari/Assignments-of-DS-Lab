// question 4(b) (reverse a string)

#include<iostream>

using namespace std;

void reversestring(char str[]){

    int i=0,l=0;

    while(str[i]!='\0'){
        l++;
        i++;
    }

    for(i=0;i<l/2;i++){
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
}

int main(){

    char str[]="hello hi how are you";
    reversestring(str);

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }

    return 0;
}