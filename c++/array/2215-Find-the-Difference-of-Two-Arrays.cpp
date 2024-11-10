class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) { 
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        auto it1= unique(nums1.begin(),nums1.end());
        auto it2= unique(nums2.begin(),nums2.end());

        nums1.erase(it1,nums1.end());
        nums2.erase(it2,nums2.end());

        vector<int> unique1;
        vector<int> unique2;

        for(auto i: nums1){
            auto it=find(nums2.begin(),nums2.end(),i);
            if(it!=nums2.end()){
                continue;
            } else{
                unique1.push_back(i);
            }
        }
        for(auto i: nums2){
            auto it=find(nums1.begin(),nums1.end(),i);
            if(it!= nums1.end()){
                continue;
            } else{
                unique2.push_back(i);
            }
        }
        return {unique1,unique2};
    }
};