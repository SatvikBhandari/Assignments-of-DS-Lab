// question 4(e) (covert characters from uppercase to lowercase and vice versa)

#include<iostream>

using namespace std;

void convert(char str[]){

    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}

int main(){

    char str[]="HellO HoW ArE YoU";
    convert(str);
    cout<<str;

    return 0;
}