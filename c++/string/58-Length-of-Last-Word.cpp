class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int i=s.length()-1;
        while(s[i]==' '){
            i--;
        }
        while(s[i]!=' ' && i>=0){
            len++;
            if(i==0){
                break;
            }
            i--;
        }
        return len;
    }
};