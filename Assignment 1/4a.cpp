// question 4(a) (Reverse the elements of an array)

#include<iostream>

using namespace std;

void reverse(int a[],int n){

    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

int main(){
    
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;

    reverse(a,10);

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}