class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dict;
        vector<vector<string>> setAnagrams;
        for(auto str:strs){
            string sortWord=str;
            sort(sortWord.begin(),sortWord.end());
            dict[sortWord].push_back(str);
        }
        // dict:
        // {
        //     \aet\: [\eat\, \tea\, \ate\],
        //     \ant\: [\tan\, \nat\],
        //     \abt\: [\bat\]
        // }
        for(auto set:dict){
            setAnagrams.push_back(set.second); // first:key,second:value
        }
        return setAnagrams;
    }
};