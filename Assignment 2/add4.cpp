// additional question 4 (Sort an array of 0s, 1s and 2s - Dutch National Flag Problem)

#include<iostream>

using namespace std;

void sort(int a[],int n){
    int i;
    int zero=0,one=0,two=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            zero++;
        }
        else if(a[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    for(i=0;i<zero;i++){
        a[i]=0;
    }
    for(i=zero;i<zero+one;i++){
        a[i]=1;
    }
    for(i=zero+one;i<zero+one+two;i++){
        a[i]=2;
    }
}

int main(){

    int a[10]={1,2,2,2,1,1,0,0,0,2};
    sort(a,10);

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}