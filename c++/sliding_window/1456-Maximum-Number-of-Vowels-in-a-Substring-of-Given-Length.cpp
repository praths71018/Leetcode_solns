class Solution {
public:
    bool isVowel(char chr){
        return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u';
    }

    int maxVowels(string s, int k) {
        int maxSum=0;
        int currentSum=0;

        // Initialize currentSum and maxSum by counting vowels in 1st Window
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                currentSum++;
            }
        }
        maxSum=currentSum;

        // Sliding Window from second Window onwards
        for(int i=k;i<s.length();i++){
            if(isVowel(s[i])){
                currentSum++;
            }
            // character is vowel and is leaving the window
            if(isVowel(s[i-k])){
                currentSum--;
            }
            maxSum=max(maxSum,currentSum);
        }
        return maxSum;
    }
};