class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
           if(digits[i]+1 !=10){
                digits[i]+=1;
                return digits;
           }
        //    if digits[i]+1 =10;
           digits[i]=0;
        //    1st digits+1=10;
           if(i==0){
                digits.insert(digits.begin(),1);
                return digits;
           }
        }
        return digits;
    }
};