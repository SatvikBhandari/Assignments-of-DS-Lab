// question 3

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int checkParenthesis(string s){
    stack<char> st;

    for(int i=0;i<s.length();i++){
        char c=s[i];

        if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            if(st.empty()){
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty()){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    string str="(a+b*(c)+(d))";

    int n=checkParenthesis(str);

    if(n==1){
        cout<<"balanced expression";
    }
    else{
        cout<<"non balanced expression";
    }

    return 0;
}