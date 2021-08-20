 #include "codeblock.h"

 bool isValid(string s) {
    stack<char> st;
    for(int i =0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }else if (st.empty() == false && s[i] == ')' && st.top() == '('){
            st.pop();
        }else if (st.empty() == false && s[i] == ']' && st.top() == '['){
            st.pop();
        }else if (st.empty() == false && s[i] == '}' && st.top() == '{'){
            st.pop();
        }else{
            return false;
        }
    }
    return st.empty();
}   
int main()
{
    string s;
    cout << "Enter Brackets : ";
    getline(cin,s);
    cout << isValid(s);
    return 0;
}