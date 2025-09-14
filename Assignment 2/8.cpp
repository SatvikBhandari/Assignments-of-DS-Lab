// question 8 (count the total number of distinct elements in an array of length n)

#include<iostream>

using namespace std;

int main(){

    int n=10;
    int arr[n]={1,2,2,3,4,4,5,5,6,6};
    int i,j;
    int visited[10]={0};
    int count=0;
    int z=0;
    
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
        z++; 
    }

    cout<<"number of distinct elements:"<<z<<endl;
    
}