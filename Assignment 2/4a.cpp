// question 4(a) (concatenate one string to another)

#include<iostream>

using namespace std;

void concatenate(char str1[],char str2[]){

    int l1=0,l2=0;
    int i=0;
    
    while(str1[i]!='\0'){
        l1++;
        i++;
    }
    i=0;
    while(str2[i]!='\0'){
        l2++;
        i++;
    }

    for(i=0;i<l2;i++){
        str1[l1+i]=str2[i];
    }

    for(i=0;i<=(l1+l2-1);i++){
        cout<<str1[i];
    }
}

int main(){

    char str1[]="hello ";
    char str2[]="world";

    concatenate(str1,str2);

    return 0;
}