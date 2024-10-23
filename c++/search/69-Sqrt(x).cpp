class Solution {
public:
    int mySqrt(int x) {
        long long value =0;
        while((value * value)<x){
            value+=1;
        }
        if(value*value >x){
            value-=1;
        }
        return value;
    }
};