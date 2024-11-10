class Solution {
public:
    void solve(const string& digits,int index,string comb,vector<string>& ans,const unordered_map<char,string>& numbers){
        if(index==digits.length()){
            cout << comb << endl;
            ans.push_back(comb);
            return;
        }

        string letters= numbers.at(digits[index]); // for \23\, index=0: 2: \abc\
        for(char letter : letters){
            solve(digits,index+1,comb+letter , ans,numbers);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits==\\){
            return ans;
        }
        unordered_map<char,string> numbers={
            {'2',\abc\},
            {'3',\def\},
            {'4',\ghi\},
            {'5',\jkl\},
            {'6',\mno\},
            {'7',\pqrs\},
            {'8',\tuv\},
            {'9',\wxyz\},
        };
        
        solve(digits,0,\\,ans,numbers);

        return ans;
    }
};