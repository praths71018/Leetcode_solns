class Solution {
public:
    bool binarySearch(vector<int>& arr, int left, int right, int x) {
        while (left <= right) {
            int middle = (left + right) / 2;
            if (arr[middle] == x)
                return true;

            if (arr[middle] < x)
                left = middle + 1;

            else
                right = middle - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            bool val=binarySearch(matrix[i],0,matrix[i].size()-1,target);
            if(val){
                return true;
            }
        }
        return false;
    }
};