// question 4 (infix to postfix)

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int precedence(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='^'){
        return 3;
    }
    else{
        return -1;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string result;

    for(int i=0;i<s.length();i++){
        char c=s[i];

        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            result=result+c;
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')'){
            while(st.top()!='('){
                result=result+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(!st.empty() && precedence(c)<=precedence(st.top())){
                result=result+st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }

    return result;
}

int main(){

    string str="(a+(b*c-(d/e^f)*g)*h)";
    cout<<infixToPostfix(str);

    return 0;
}