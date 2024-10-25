class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1); // all val=1 in arr
        int leftSide=1;
        // Left side of i all values multiply
        for(int i=0;i<nums.size();i++){
            ans[i]*=leftSide;
            leftSide*=nums[i];
        }
        int rightSide=1;
        // Right side of i all values multiply
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=rightSide;
            rightSide*=nums[i];
        }
        return ans;
    }
};