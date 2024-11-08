class Solution {
public:
    int hammingWeight(int n) {
        // string binary=bitset<32>(n).to_string();
        // int count=0;
        // for(int i=0;i<binary.length();i++){
        //     if(binary[i]=='1'){
        //         count++;
        //     }
        // }
        // return count;
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
            // 11 >> 1

            // 1011  = 11
            // ------------
            // 0101  = 5

            // We put 0 into left space.

            //  AND only if true and true= true rest false
            // keep shifting the number and if and is true i.e. 1 and 1 =1 
            // that is the set bit count
        }
        return res; 
    }
};