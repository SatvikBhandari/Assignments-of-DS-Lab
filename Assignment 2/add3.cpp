// additional question 3 (anagram pair)

#include<iostream>

using namespace std;

void CheckAnagram(char str1[],char str2[]){
    
    int l1=0,l2=0;
    int i=0,j=0;
    int val;

    while(str1[i]!='\0'){
        l1++;
        i++;
    }
    i=0;
    while(str2[i]!='\0'){
        l2++;
        i++;
    }

    if(l1!=l2){
        cout<<"strings are not anagram pair"<<endl;
    }
    else{
        int used[100]={0};
        for(i=0;i<l1;i++){
            val=0;
            for(j=0;j<l1;j++){
                if(str1[i]==str2[j] && used[j]==0){
                    val=1;
                    used[j]=1;
                    break;
                }
                else{
                    val=0;
                }
            }
            if(val!=1){
                break;
            }
        }
        if(val==1){
            cout<<"strings are anagram pair"<<endl;
        }
        else{
            cout<<"strings are not anagram pair"<<endl;
        }
    }
}

int main(){

    char str1[]="hello";
    char str2[]="lohle";

    CheckAnagram(str1,str2);

    return 0;
}