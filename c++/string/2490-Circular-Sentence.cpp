class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        // constructing stream from the string
        stringstream ss(sentence);
        while (getline(ss, sentence, ' ')) {
            // store token string in the vector
            words.push_back(sentence);
        }
        for(int i=0;i<words.size()-1;i++){
            if(words[i][(words[i].length()-1)]!=words[i+1][0]){
                return false;
            }
        }
        if(words[words.size()-1][words[words.size()-1].length()-1]!=words[0][0]){
            return false;
        }
        return true;
    }
};