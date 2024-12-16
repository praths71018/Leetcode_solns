class Solution {
public:
    // Logic: consider min1 and min2 as largest numbers
    // iterate nums, 1st number less than min1 is updated in min1
    // since using else if that means now its also checked whether next number is less than min1 first before checking min2 
    // similarly min2 is updated and eventually when reached in else we get a sequence where i<j<k and nums[i]< nums[j] < nums[k]
    bool increasingTriplet(vector<int>& nums) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int n: nums){
            if(n<=min1){
                min1=n; //updated 1st min
            } else if (n <= min2){
                min2=n; //updated 2nd min
            } else {
                return true; // found a third number greater than both
            }
        }
        return false;
    }
};