class Solution {
public:
    void dfs(int openParenthesis,int closeParenthesis, string s,int n, vector<string>& res)
    {
        // openParenthesis+closeParenthesis = n+n
        if(openParenthesis==closeParenthesis && openParenthesis+closeParenthesis==n*2){
            res.push_back(s);
        }
        if(openParenthesis < n){
            dfs(openParenthesis+1,closeParenthesis,s+\(\,n,res);
        }
        if(closeParenthesis < openParenthesis){
            dfs(openParenthesis, closeParenthesis+1,s+\)\,n,res);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0,0,\\,n,res);
        return res;
    }
};