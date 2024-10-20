class Solution {
public:
    int binarySearch(vector<int>& arr, int left, int right, int x) {
        while (left <= right) {
            int middle = (left + right) / 2;

            // Check if x is present at mid
            if (arr[middle] == x)
                return middle;

            // If x greater, ignore left half
            if (arr[middle] < x)
                left = middle + 1;

            // If x is smaller, ignore right half
            else
                right = middle - 1;
        }

        // If we reach here, then element was not present
        // return -1;
        return left;
    }

    int searchInsert(vector<int>& nums, int target) {
        int index=binarySearch(nums,0,nums.size()-1,target);
        return index;
    }
};