// question 5 (sum of every row and sum of every coloumn)

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

void sum(int a[3][3]){

    int i,j;

    cout<<"sum of rows:"<<endl;

    for(i=0;i<3;i++){
        int rs=0;
        for(j=0;j<3;j++){
            rs=rs+a[i][j];
        }
        cout<<"row "<<i+1<<"="<<rs<<endl; 
    }

    cout<<"sum of coloumns:"<<endl;

    for(j=0;j<3;j++){
        int cs=0;
        for(i=0;i<3;i++){
            cs=cs+a[i][j];
        }
        cout<<"coloumn "<<j+1<<"="<<cs<<endl;
    }
}

int main(){

    int a[3][3];

    input(a);
    display(a);
    sum(a);

    return 0;
}