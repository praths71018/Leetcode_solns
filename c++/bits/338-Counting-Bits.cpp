class Solution {
public:
    int setBits(int n){
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
        }
        return res;
    }

    vector<int> countBits(int n) {
        vector<int> setCount;
        for(int i=0;i<=n;i++){
            setCount.push_back(setBits(i));
        }
        return setCount;
    }
};