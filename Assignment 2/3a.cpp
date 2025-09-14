// question 3(a) (finding missing number using linear search)

#include<iostream>

using namespace std;

int main(){

    int a[9]={1,2,3,5,6,7,8,9,10};
    int missing=0;

    if(a[0]!=1){
        missing=1;
    }
    else{
        for(int i=1;i<9;i++){
            if((a[i-1]+1)!=a[i]){
                missing=(a[i-1]+1);
                break;
            }
            else{
                continue;
            }
        }
    }

    cout<<"missing number:"<<missing<<endl;

    return 0;
}