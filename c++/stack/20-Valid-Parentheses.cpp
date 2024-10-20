class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int i=0;
        while(i<s.length()){
            if(stk.empty() && (s[i]==')' || s[i]==']'|| s[i]=='}')){
                return false;
            }
            if(s[i]=='(' || s[i]=='['|| s[i]=='{'){
                stk.push(s[i]);
                cout<< \push : \<< s[i] <<endl;
                i++;
            } else{
                if(s[i]==')' && stk.top()=='('){
                    stk.pop();
                    cout<< \pop : (\<<endl;
                    i++;
                }
                else if(s[i]=='}' && stk.top()=='{'){
                    stk.pop();
                    cout<< \pop : {\<<endl;
                    i++;
                }
                else if(s[i]==']' && stk.top()=='['){
                    stk.pop();
                    cout<< \pop : [\<<endl;
                    i++;
                } else{
                    return false;
                }
            }
        }
        if(!stk.empty()){
            return false;
        }
        return true;
    }
};