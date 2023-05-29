class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      int i=0;
        vector<vector<int>> pas(numRows);
        while(i<numRows)
        {
          pas[i].resize(i+1,1);
        int j=1;
         while(j<i)
            {
            pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
            j++;
            }
        i++;
        }
        return pas;
    }
};
