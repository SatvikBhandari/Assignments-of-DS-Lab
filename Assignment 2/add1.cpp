// additional question 1

#include<iostream>

using namespace std;

void function(int a[],int n,int k){
    int count=0;
    cout<<"pairs of i and j:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]-a[j]==k || a[j]-a[i]==k){
                cout<<"("<<i<<","<<j<<")";
                count++;
            }
        }
    }
    cout<<endl;
    if(count!=0){
        cout<<"no of pairs of i and j:"<<count<<endl;
    }
    else{
        cout<<"no pair matched"<<endl;
    }
}

int main(){

    int a[5]={1,2,3,4,5};
    int diff=1;

    function(a,5,1);

    return 0;
}