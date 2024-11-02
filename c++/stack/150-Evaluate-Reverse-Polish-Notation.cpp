class Solution {
public:
    int operation(int a,int b,string operator_value)
    {
        char ch = operator_value[0];
        switch(ch)
        {
            case '+': return a+b;
            case '-': return b-a;
            case '*': return b*a;
            case '/': return b/a;
        }
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int size=tokens.size();
        for(int i=0;i<size;i++){
            if(tokens[i]==\*\ || tokens[i]==\-\ || tokens[i]==\/\ || tokens[i]==\+\){
                int value1=st.top();
                st.pop();
                int value2=st.top();
                st.pop();
                int newValue=operation(value1,value2,tokens[i]);
                st.push(newValue);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};