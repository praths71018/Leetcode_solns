class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        makeCombination(candidates,target,0,comb,0,res);
        return res;
    }

private:
    void makeCombination(vector<int>& candidates,int target,int i,vector<int>& comb,int total,vector<vector<int>>& res){
        if(total==target){
            res.push_back(comb);
            return;
        }
        if(total>target|| i>=candidates.size()){
            return;
        }
        comb.push_back(candidates[i]);
        makeCombination(candidates,target,i,comb,total+candidates[i],res);
        comb.pop_back();
        makeCombination(candidates,target,i+1,comb,total,res);
    }
};