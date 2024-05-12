// problem link
// https://leetcode.com/problems/largest-local-values-in-a-matrix/description/

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> arr(n-2, vector<int>(n-2));

        for(int i = 0;i < n-2;i++){
            for(int j = 0;j<n-2;j++){
                int max = 0;
                for(int k = i;k < i+3;k++){
                    for(int l = j;l < j+3;l++){
                        if(grid[k][l] > max){
                            max = grid[k][l];
                        }
                    }
                }
                arr[i][j] = max;
            }
        }
        return arr;
    }
};
