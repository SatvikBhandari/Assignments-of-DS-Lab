// question 4(d) (sort string in alphabetically order)

#include<iostream>
#include<string>

using namespace std;

int main() {
    string str="hello hi how are you I am a boy";
    string words[20];  
    int count=0;

    string temp="";
    for (int i=0;i<str.length();i++){
        if(str[i]==' '){
            words[count++]=temp;
            temp="";
        } 
        else{
            temp+=str[i];
        }
    }
    words[count++]=temp; 

    for(int i=0;i<count-1;i++) {
        for(int j=i+1;j<count;j++){
            if(words[i].compare(words[j])>0){
                string t=words[i];
                words[i]=words[j];
                words[j]=t;
            }
        }
    }

    for (int i=0;i<count;i++) {
        cout<<words[i]<<" ";
    }

    return 0;
}