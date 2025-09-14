// question 4(b) (Find the matrix multiplication)

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

void multiplication(int a[3][3],int b[3][3],int c[3][3]){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
}

int main(){

    int array1[3][3];
    int array2[3][3];
    int mul[3][3];

    input(array1);
    input(array2);

    display(array1);
    display(array2);

    multiplication(array1,array2,mul);
    display(mul);

    return 0;
}