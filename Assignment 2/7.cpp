// question 7 (find number of inversion)

#include<iostream>

using namespace std;

void inversion(int a[],int n){
    
    int count=0;

    cout<<"inversion pairs:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i && a[i]>a[j]){
                count++;
                cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
            }
        }
    }
    cout<<endl;

    cout<<"total number of inversions:"<<count<<endl;

}

int main(){

    int a[5]={5,4,3,2,1};
    inversion(a,5);

    return 0;
}