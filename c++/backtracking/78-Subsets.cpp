class Solution {
public:
    void solve(vector<int> nums,vector<int> subset,vector<vector<int>>& ans,int index){
        if(index == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        solve(nums,subset,ans,index+1);

        subset.pop_back();
        solve(nums,subset,ans,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int index=0;
        solve(nums,subset,ans,index);
        return ans;
    }
};