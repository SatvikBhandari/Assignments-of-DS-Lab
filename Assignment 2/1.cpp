// question 1 (binary search)

#include<iostream>

using namespace std;

void binarysearch(int a[],int n,int num){
    
    int left=0;
    int right=n-1;
    int i,mid=0;
    int find=0;

    while(left<=right){

        mid=(left+right)/2;

        if(a[mid]==num){
            find=1;
            cout<<num<<" found at index "<<mid<<endl;
            break;
        }
        else if(a[mid]>num){
            right=mid-1;
            find=0;
        }
        else if(a[mid]<num){
            left=mid+1;
            find=0;
        }
    }

    if(find==0){
        cout<<num<<" not found"<<endl;
    }

}

int main(){

    int a[5]={1,2,3,4,5};
    int num=2;

    binarysearch(a,5,2);

    return 0;
}