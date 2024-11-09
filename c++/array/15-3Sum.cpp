class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue; // duplicate skip
            }

            int j=i+1;
            int k=nums.size()-1;

            // j should not exceed k as num[j] cant be equal to num[k]
            while(j<k){
                int total=nums[i]+nums[j]+nums[k];

                if(total >0){
                    k--;
                } else if (total<0){
                    j++;
                } else {
                    sums.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    
                    // Again skipping duplicates i
                    while(nums[j]==nums[j-1] && j<k){
                        j++;
                    }
                }
            }

            // for(int j=i+1;j<nums.size()-1;j++){
            //     for(int k=j+1;k<nums.size();k++){
            //         if(nums[i]+nums[j]+nums[k] == 0){
            //             vector<int> numbers= {nums[i],nums[j],nums[k]};
            //             sort(sums.begin(),sums.end());
            //             if(!sums.empty() && sums[sums.size()-1]==numbers){
            //                 continue;
            //             }
            //             sums.insert(sums.end(),numbers);
            //         }
            //     }
            // }
        }
        return sums;
    }
};