#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Saurabh";
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans=" ";

    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Reverse string is "<<ans<<endl;
}
    //T.C=O(n)
    //S.C=O(n)