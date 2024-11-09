class Solution {
public:
    int minChanges(string s) {
        // given s has an even length
        int count=0;
        for(int i=0;i< s.length()-1;i+=2){
            if(s[i]!=s[i+1]){
                count+=1;
            }
        }
        return count;
    }
};