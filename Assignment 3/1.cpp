// question 1

#include<iostream>

using namespace std;

int top=-1;
const int size=5;
int a[size];

void push(int item){
    if(top==size-1){
        cout<<"stack is overflow";
    }
    else{
        top++;
        a[top]=item;
    }
}

void pop(){
    if(top==-1){
        cout<<"stack is underflow";
    }
    else{
        top--;
    }
}

void isEmpty(){
    if(top==-1){
        cout<<"stack is underflow";
    }
}

void isFull(){
    if(top==size-1){
        cout<<"stack is overflow";
    }
}

void display(){
    if(top==-1){
        cout<<"no elements in stack";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

void peek(){
    if(top==-1){
        cout<<"no elements in stack";
    }
    else{
        cout<<"top:"<<a[top]<<endl;
    }
}

int main(){

    cout<<"-- STACK MENU --"<<endl;
    cout<<"enter 1 for push an element"<<endl;
    cout<<"enter 2 for pop an element"<<endl;
    cout<<"enter 3 to check whether stack is empty or not"<<endl;
    cout<<"enter 4 to check whether stack is full or not"<<endl;
    cout<<"enter 5 to display the stack"<<endl;
    cout<<"enter 6 for peek function"<<endl;

    int n;
    cin>>n;

    switch(n){
        case 1:
        int num;
        cout<<"enter number to push:";
        cin>>num;
        push(num);
        break;

        case 2:
        pop();
        break;

        case 3:
        isEmpty();
        break;

        case 4:
        isFull();
        break;

        case 5:
        display();
        break;

        case 6:
        peek();
        break;

        default:
        cout<<"Invalid choice";
    }

    return 0;
}