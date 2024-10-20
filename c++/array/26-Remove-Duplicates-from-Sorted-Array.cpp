#include<algorithm>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> check;
        for(int i=0; i<nums.size();i++){
            // for sorted array use binary search
            if(binary_search(check.begin(), check.end(), nums[i])==false){
                cout<< nums[i]<<endl;
                check.push_back(nums[i]);
            }else{
                continue;
            }
            // if(nums[i]==nums[i+1]){
            //     nums.erase(nums.begin()+i);
            // }
            // else{
            //     cout<< nums[i] <<endl;
            //     k++;
            // }
        }
        nums=check;
        return check.size();
    }
};