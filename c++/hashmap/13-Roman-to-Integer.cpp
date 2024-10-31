class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> roman={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(int i=0;i<s.length()-1;i++){
            if(roman[s[i]]<roman[s[i+1]]){
                ans-=roman[s[i]]; 
                // example for IV, i.e. 4 : 1st it subtracts 1 i.e ans =-1 , then next iteration adds 5 hence end result is 4
            } else {
                ans+=roman[s[i]];
            }
        }
        ans+=roman[s[s.length()-1]];
        return ans;
    }
};