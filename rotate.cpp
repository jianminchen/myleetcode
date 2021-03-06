class Solution {  
//the key is to find the independent circle in the matrix  
public:  
    void rotate(vector<vector<int> > &matrix) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        int n = matrix.size();  
        for (int i = 0; i < n/2 + n%2; ++i)  
        {  
            for (int j = 0; j < n/2; ++j)  
            {  
                int tmp = matrix[i][j];  
                matrix[i][j] = matrix[n-1-j][i];  
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];  
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];  
                matrix[j][n-1-i] = tmp;  
            }  
        }  
    }  
};  