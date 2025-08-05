class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int a, b; 
        int actualSum=0,  expectSum=0;
        unordered_set<int>s;
        vector<int> ans; 
        for(int i = 0; i<=m-1;i++){
          for(int j = 0; j<=n-1;j++){
            actualSum  =actualSum+ grid[i][j];
            // repeated element
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);

          }    
        }

        // missing elemnt
        int total = m*n;
        
        expectSum =total * (total+1)/2;
        b =expectSum +a - actualSum;
        ans.push_back(b);

        return ans;
    }
};