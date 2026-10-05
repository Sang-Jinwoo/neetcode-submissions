class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        bool isUpdated = true;
        int intMax = 2147483647;
        while(isUpdated){
            isUpdated=false;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==-1 || grid[i][j]==0 || grid[i][j]==1)
                    continue;
                else{
                    if(i>0 && grid[i-1][j]>=0 && grid[i-1][j] != intMax && (grid[i][j]> (1+ grid[i-1][j])))
                    {
                        grid[i][j]= 1 + grid[i-1][j];
                        isUpdated=true;
                    }
                    if(i<grid.size()-1 && grid[i+1][j]>=0 && grid[i+1][j] != intMax && (grid[i][j]> (1 + grid[i+1][j])))
                    {
                        grid[i][j]= 1 + grid[i+1][j];
                        isUpdated=true;
                    }
                    if(j>0 && grid[i][j-1]>=0 && grid[i][j-1] != intMax && (grid[i][j]>(1 + grid[i][j-1])))
                    {
                        grid[i][j]= 1 + grid[i][j-1];
                        isUpdated=true;
                    }
                    if(j<grid[0].size()-1 && grid[i][j+1]>=0 && grid[i][j+1] != intMax && (grid[i][j]> (1 + grid[i][j+1])))
                    {
                        grid[i][j]= 1 + grid[i][j+1];
                        isUpdated=true;
                    } 
                }
            }
        }
        }
    }
};
