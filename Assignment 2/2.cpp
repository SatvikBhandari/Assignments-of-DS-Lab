// question 2 (bubble sort (64,34,25,12,22,11,90))

#include<iostream>

using namespace std;

void bubblesort(int a[],int n){

    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
}

int main(){

    int a[7]={64,34,25,12,22,11,90};

    bubblesort(a,7);

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}