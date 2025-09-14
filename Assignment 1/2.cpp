// question 2 (remove duplicates in an array)

#include<iostream>

using namespace std;

int main(){

    int x=10;
    int arr[x]={1,2,2,3,4,4,5,5,6,6};
    int i,j;
    int visited[10]={0};
    int count=0;
    int index=0;
    int duplicates[10];

    index=0;
    for(i=0;i<10;i++){
        if(visited[i]==1){
            continue;
        }
        count=1;
        for(j=i+1;j<10;j++){
            if(arr[j]==arr[i]){
                count++;
                visited[j]=1;
            }
        }
        duplicates[index]=arr[i];
        index++;
    }
    x=index;
    for(i=0;i<x;i++){
        arr[i]=duplicates[i];
    }

    for(i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}