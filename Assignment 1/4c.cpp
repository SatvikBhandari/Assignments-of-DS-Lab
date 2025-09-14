// question 4(c) (Find the Transpose of a Matrix)

#include<iostream>

using namespace std;

void input(int a[3][3]){

    cout<<"enter elements of 2d array:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
}

void display(int a[3][3]){

    cout<<"array:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void transpose(int a[3][3]){

    cout<<"transpose"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[j][i]<<"  ";
        }
        cout<<endl;
    }
}

int main(){

    int a[3][3];

    input(a);
    display(a);
    transpose(a);

    return 0;
}