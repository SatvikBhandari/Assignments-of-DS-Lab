// question 4(c) (delete vowels from a string)

#include<iostream>

using namespace std;

void rmvowel(char str[]){

    int l=0,i=0;
    char str1[100];
    int n=0;

    while(str[i]!='\0'){
        l++;
        i++;
    }

    for(i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            continue;
        }
        else{
            str1[n]=str[i];
            n++;
        }
    }

    for(i=0;i<n;i++){
        str[i]=str1[i];
    }
    for(i=n;i<l;i++){
        str[i]='\0';
    }

}

int main(){

    char str[]="hello aeiou xyz";
    rmvowel(str);

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }

    return 0;
}