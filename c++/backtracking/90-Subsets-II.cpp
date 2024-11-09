class Solution {
public:
    void solve(vector<int> nums,vector<int> subset,vector<vector<int>>& ans,int index){
        if(index >= nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        solve(nums,subset,ans,index+1);
        subset.pop_back();

        // Skip all duplicates of the current element
        while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++;
        }

        solve(nums,subset,ans,index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int index=0;
        sort(nums.begin(),nums.end());
        solve(nums,subset,ans,index);
        return ans;
    }
};