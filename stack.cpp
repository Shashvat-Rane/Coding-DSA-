#include<bits/stdc++.h>
using namespace std;
// Reverse a string using stack

/*
int main(){

    stack<char> st;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }

    string ans="";

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    cout<<ans<<endl;

    return 0;
}
*/




// Delete middle element froms stack

/*
void solve(stack<int> &st,int c,int n){
    if(c==n/2){
        st.pop();
        return;
    }

    int num =st.top();
    st.pop();

    solve(st,c+1,n);
    st.push(num);
}

void print(stack<int> st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    cout<<num<<" ";

    st.pop();
    print(st);
    st.push(num);
}

int main(){

    stack<int> st;
    // st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    print(st);
    cout<<endl;

    solve(st,0,8);

    print(st);

    return 0;
}

*/




// Valid Parenthesis

/*
int main(){

    string s;
    cin>>s;

    stack<char> st;

    bool ans=true;

    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                ans=false;
                break;
            }
            else{
                if((s[i]==')' && st.top()=='(') ||
                   (s[i]=='}' && st.top()=='{') ||
                   (s[i]==']' && st.top()=='[')){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
    }

    if(ans){
        cout<<"valid\n";
    }
    else{
        cout<<"Not Valid\n";
    }


    return 0;
}
*/



// Insert an element at bottom of the stack

/*
void solve(stack<int> &st, int n){
    if(st.empty()){
        st.push(n);
        return;
    }

    int num = st.top();
    st.pop();
    solve(st,n);
    st.push(num);
}

void print(stack<int> st){
    if(st.empty()){
        cout<<endl;
        return;
    }

    int num = st.top();
    cout<<num<<endl;

    st.pop();
    print(st);
    st.push(num);
}

int main(){

    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"Stack before:\n";
    print(st);

    solve(st,1);

    cout<<"Stack after:\n";
    print(st);

    cout<<endl;

    return 0;
}
*/




// Reverse Stack using Recursion

/*
void insertAtBottom(stack<int> &st, int n){
    if(st.empty()){
        st.push(n);
        return;
    }

    int num = st.top();
    st.pop();
    insertAtBottom(st,n);
    st.push(num);
}

void solve(stack<int> &st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();
    solve(st);
    insertAtBottom(st,num);
}

void print(stack<int> st){
    if(st.empty()){
        cout<<endl;
        return;
    }

    int num = st.top();
    cout<<num<<endl;

    st.pop();
    print(st);
    st.push(num);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"Stack before:\n";
    print(st);

    solve(st);

    cout<<"Stack after:\n";
    print(st);

    return 0;
}
*/




// Sort a stack using recursion without using any loop

void insertAtCorrectPosition(stack<int> &st,int n){
    if(st.empty()){
        st.push(n);
        return;
    }
    if(n>=st.top()){
        st.push(n);
        return;
    }
    else{
        int t=st.top();
        st.pop();
        insertAtCorrectPosition(st,n);
        st.push(t);
    }
}

void solve(stack<int> &st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();

    solve(st);
    insertAtCorrectPosition(st,num);
}

void print(stack<int> st){
    if(st.empty()){
        cout<<endl;
        return;
    }

    int num = st.top();
    cout<<num<<endl;

    st.pop();
    print(st);
    st.push(num);
}

int main(){

    stack<int> st;
    st.push(9);
    st.push(-8);
    st.push(7);
    st.push(11);
    st.push(2);

    cout<<"Stack before:\n";
    print(st);

    solve(st);

    cout<<"Stack after:\n";
    print(st);

    return 0;
}



// Minimum Cost to Make String Valid

