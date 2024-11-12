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
        // keep adding candidates[i] in total until total== target, if total > target pop
        // last element in comb and add next element and recurse all over till total== target or total > target
        makeCombination(candidates,target,i,comb,total+candidates[i],res);
        comb.pop_back();
        makeCombination(candidates,target,i+1,comb,total,res);
    }
};