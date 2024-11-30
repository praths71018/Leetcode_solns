class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }

        int length=1;
        int maxlength=length;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if((nums[i]-1)==nums[i-1]){
                length++;
                cout<< length << endl;
            } else {
                if(maxlength<length){
                    maxlength=length;
                }
                length=1;
            }
        }
        if(maxlength<length){
            maxlength=length;
        }
        return maxlength;
    }
};