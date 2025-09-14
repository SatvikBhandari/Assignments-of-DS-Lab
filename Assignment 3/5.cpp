// question 5 (evaluate postfix)

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int evaluatePostfix(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        char c=s[i];

        if(c>='0' && c<='9'){
            int a=c-'0';
            st.push(a);
        }
        else{
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();

            if(c=='+'){
                st.push(val1+val2);
            }
            else if(c=='-'){
                st.push(val1-val2);
            }
            else if(c=='*'){
                st.push(val1*val2);
            }
            else{
                st.push(val1/val2);
            }
        }
    }

    return st.top();
}

int main(){

    string str="231*+9-";
    int result=evaluatePostfix(str);

    cout<<"result:"<<result<<endl;

    return 0;
}