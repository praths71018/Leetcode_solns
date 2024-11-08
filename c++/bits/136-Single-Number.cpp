class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int num: nums){
            result^=num;
            // nums = [2,2,1]
            // ^ : XOR Gate 
            // 0 ^ 2 =2 : 0 => 000 , 2 => 010 : XOR : unlikes=1 , likes=0;
            // 2^2= 0 : 010 XOR 010 =0 , i.e. if number is repeated in nums it will make frequency=0;
            //  2^2^1 =1 : 010 XOR O1O XOR 001 == 001=1 ; i.e. a^a^b or b^a^a or a^b^a =b; i.e. eventually we get the unique number
        }
        return result;
    }
};