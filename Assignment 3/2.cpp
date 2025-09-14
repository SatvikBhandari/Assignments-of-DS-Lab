// question 2

#include<iostream>

using namespace std;

class rev{

    int size;
    char *str;
    char *stack;
    int top;

    public:

    rev(int s){
        size=s;
        str=new char[size];
        stack=new char[size];
        top=-1;
    }

    void push(char item){
        if(top==size-1){
            cout<<"stack is overflow";
        }
        else{
            top++;
            str[top]=item;
        }
    }

    char pop(){
        if(top==-1){
            cout<<"stack is underflow";
        }
        else{
            return str[top--];
        }
    }

    char display(){
        int i=0,j=0;
        for(i=top;i>=0;i--,j++){
            stack[j]=str[i];
        }
        stack[j]='\0';
        cout<<"reversed string:"<<stack;
    }
};

int main(){

    char str[]="DataStructure";

    int n=0;
    for(int i=0;str[i]!='\0';i++){
        n++;
    }

    rev st(n);
    
    for(int i=0;i<n;i++){
        st.push(str[i]);
    }
    st.display();

    return 0;
}