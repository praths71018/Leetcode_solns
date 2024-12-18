class Solution {
public:
    string removeStars(string s) {
        stack<char> characters;
        string newString="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                characters.push(s[i]);
            } else{
                characters.pop();
            }
        }
        while(!characters.empty()){
            newString += characters.top();
            characters.pop();
        }
        reverse(newString.begin(),newString.end());
        return newString;
    }
};