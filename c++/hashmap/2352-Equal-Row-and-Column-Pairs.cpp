class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        map<vector<int>,int>mp;
        // storing each row in the map
        for(int i=0;i<grid.size();i++){
            mp[grid[i]]++; // all elements rowcount =1
        }
        // Extracting columns
        for(int i=0;i<grid[0].size();i++){
            vector<int> v;
            // Extracting column in a vector
            for(int j=0; j<grid.size();j++){
                v.push_back(grid[j][i]);
            } 
            // Add the number of times that column appeard as roe.
            ans+=mp[v];
        }
        return ans;
    }
};