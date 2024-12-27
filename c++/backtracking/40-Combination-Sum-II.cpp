class Solution {
public:
    void makeCombination(vector<int>& candidates,int target,int start,vector<int>& comb,int total,vector<vector<int>>& res){
        if(total==target){
            res.push_back(comb);
            return;
        }

         for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            // If adding the current element exceeds the target, break the loop
            if (total + candidates[i] > target) {
                break;
            }
            
            comb.push_back(candidates[i]);
            // here since candidate[i] can be used only once in combination add index by 1
            makeCombination(candidates, target, i + 1, comb, total + candidates[i], res);
            comb.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int total=0;
        vector<vector<int>> res;
        vector<int> comb;
        makeCombination(candidates,target,0,comb,total,res);
        return res;
    }
};