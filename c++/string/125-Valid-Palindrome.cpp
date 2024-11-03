class Solution {
public:
    bool isPalindrome(string s) {
        string s1=\\;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }
        for(int i=0;i<s1.length()/2 ;i++){
            if(s1[i]!=s1[(s1.length()-1)-i]){
                return false;
            }
        }
        return true;
    }
};