class Solution {
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        // transpose the array;
        int n = matrix.size();
        for(int i=0;i<=n-2;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            swap(&matrix[i][j],&matrix[j][i]);
        }
        // reverse all the rows;
        for(int i=0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());
    }
};