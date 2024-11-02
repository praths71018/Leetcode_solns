class Solution {
public:
    // MergeSort
    void merge(vector<int>& arr,int left,int mid,int right){
        int n1=mid-left+1; // size of left subarray
        int n2=right-mid; // size of right subarray
        vector<int> leftarr(n1);
        vector<int> rightarr(n2);

        // Filling values of subarray
        for(int i=0;i<n1;i++){
            leftarr[i]=arr[left+i];
        }
        for(int i=0;i<n2;i++){
            rightarr[i]=arr[mid+1 +i];
        }
        int i=0;
        int j=0;
        int k=left;

        // Merge subarrays by appending lowest values of both subarrays and sort them 
        while(i<n1 && j<n2){
            if(leftarr[i]<=rightarr[j]){
                arr[k]=leftarr[i];
                i++;
            } else{
                arr[k]=rightarr[j];
                j++;
            }
            k++;
        }

        // if remaining elements in left subbarray are all bigger than right
        while(i<n1){
            arr[k]=leftarr[i];
            i++;
            k++;
        }
        // Vice Versa for right subarray
        while(j<n2){
            arr[k]=rightarr[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums,int left,int right){
        if(left<right){
            int mid=left+ (right-left)/2;
            mergeSort(nums,left,mid); // split arrays into subarrays
            mergeSort(nums,mid+1,right);
            merge(nums,left,mid,right); // sort and merge the subarrays
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};