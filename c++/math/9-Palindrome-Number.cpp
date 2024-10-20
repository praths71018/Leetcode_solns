class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0){
            return false;
        }
        long int z=x;
        long int y=0;
        while(z>0){
            y= (y*10) + (z%10);
            z/=10;
        }
        // cout << y <<endl;
        if(x==y){
            return true;
        }
        else{
            return false;
        }
    }
};