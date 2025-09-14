// additional question 5 

#include<iostream>

using namespace std;

void duplicate(int a[],int n){

    int i,j;

    for(i=0;i<n;i++){
        if(a[i]==2){
            for(j=n-1;j>i;j--){
                a[j]=a[j-1];
            }
            if((i+1)<n){
                a[i+1]=2;
            }
            i++;
        }
    }
}

int main(){

    int a[5]={1,2,3,4,5};

    duplicate(a,5);

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}