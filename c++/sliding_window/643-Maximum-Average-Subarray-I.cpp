class Solution {
public:
    // double findMaxAverage(vector<int>& nums, int k) {
    //     int TraversalOfWindow=nums.size()-k+1;
    //     double maxAverage=INT_MIN;
    //     // Sliding Window
    //     for(int i=0;i<TraversalOfWindow;i++){
    //         // each element in window
    //         double currentAverage=0;
    //         for(int j=0;j<k;j++){
    //             currentAverage+= nums[i+j]; 
    //             // if window starts from index=1, 1st element in that window is nums[1+0]
    //         }
    //         currentAverage/=k;
    //         maxAverage=max(maxAverage,currentAverage);
    //     }
    //     return maxAverage;
    // }
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum=0;
        double maxSum=0;

        // Initialize currentAverage and maxAverage to sum of initial window of size k
        for(int i=0;i<k;i++){
            currentSum += nums[i];
        }
        maxSum=currentSum;

        // Start window from kth element and iterate till end of all windows
        for(int i=k;i<nums.size();i++){
            //Subtract previous leftmost element of window from previous currentSum
            // Then add new rightmost element of window in currentSum
            // Hence newCurrentSum=previousCurrentSum + newRightMostElement - previousLeftMostElement
            currentSum+= nums[i] - nums[i-k];
            maxSum=max(maxSum,currentSum);
        }
        
        return maxSum/k;
    }
};