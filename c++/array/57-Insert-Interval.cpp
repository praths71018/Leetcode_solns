class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> merged;
        int i=0;
        if(intervals.empty()){
            intervals.push_back(newInterval);
        } else {
            while(i<intervals.size() && intervals[i][0]<newInterval[0]){
                i++;
            }
            intervals.insert(intervals.begin()+i,newInterval);
        }

        for(auto interval:intervals){
            if(merged.empty()||  merged.back()[1]<interval[0]){
                merged.push_back(interval);
            } else{
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;
    }
};