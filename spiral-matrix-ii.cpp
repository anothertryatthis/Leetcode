class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n));
        
        int l=0,u=0,r=n-1,d=n-1,p=1;
        
        while(l<=r && u<=d)
        {
            for(int col = l;col<=r;col++)
                mat[u][col]=p++;
            
            if(++u>d) break;
            
            for(int row = u;row<=d;row++)
                mat[row][r]=p++;
            
            if(--r<l) break;
            
            for(int col = r;col>=l;col--)
                mat[d][col]=p++;
            
            if(--d<u) break;
            
            for(int row = d;row>=u;row--)
                mat[row][l]=p++;
            
            if(++l>r) break;
            
        }
        return mat;
    }
};

//Go through it again

//Optimized solution

class Solution {
public:

    int floorMod(int x, int y) {
        return ((x % y) + y) % y;
    }

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result (n, vector<int>(n));
        int cnt = 1;
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
       int d = 0;
        int row = 0;
        int col = 0;
        while (cnt <= n * n) {
            result[row][col] = cnt++;
            int r = floorMod(row + dir[d][0], n);
            int c = floorMod(col + dir[d][1], n);
            // change direction if next cell is non zero
            if (result[r][c] != 0) d = (d + 1) % 4;
            row += dir[d][0];
            col += dir[d][1];
        }
        return result;
    }
};
