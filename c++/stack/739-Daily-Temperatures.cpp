class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int index=st.top();
                st.pop();
                res[index]=i-index; // counts difference between days when temp is higher tham current
            }
            st.push(i); // pushing current day
        }
        return res;
    }
};