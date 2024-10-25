class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowel;
        for(int i=0;i<s.length();i++){
            char chr=tolower(s[i]);
            if(chr=='a' || chr=='e' || chr=='i'|| chr=='o'|| chr=='u'){
                vowel.push_back(s[i]);
            }
        }
        reverse(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            char chr=tolower(s[i]);
            if(chr=='a' || chr=='e' || chr=='i'|| chr=='o'|| chr=='u'){
                s[i]=vowel[j];
                j++;
            }
        }
        return s;
    }
};