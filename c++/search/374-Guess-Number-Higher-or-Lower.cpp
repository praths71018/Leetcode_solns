/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return \t     -1 if num is higher than the picked number
 *\t\t\t      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
class Solution {
public:
    int binarySearch(int left, int right)
    {
        while (left <= right) {
            int middle = left + (right - left) / 2;
            cout << guess(middle) << endl;
            // Check if target is present at mid
            if (guess(middle) == 0)
                return middle;
    
            if (guess(middle) == -1)
                right = middle - 1;
    
            if  (guess(middle)==1)
                left = middle + 1;
        }
        // If we reach here, then element was not present
        return -1;
    }

    int guessNumber(int n) {
        int ans=binarySearch(0,n);
        return ans;
    }
};