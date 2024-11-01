class Solution {
public:
    string intToRoman(int num) {
        string ans=\\;
        // greater<int> stores keys in descending order
        // By default maps store keys in ascending order
        map<int,string,greater<int>> roman{
            {1000,\M\},{900,\CM\},{500,\D\},{400,\CD\},{100,\C\},{90,\XC\},{50,\L\},
            {40,\XL\},{10,\X\},{9,\IX\},{5,\V\},{4,\IV\},{1,\I\}
        };
        // Traversing map
        for(auto map: roman){
            while(num >= map.first){
                ans+= map.second;
                num-= map.first;
            }
        }
        return ans;
    }
};