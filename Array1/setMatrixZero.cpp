#include <bits/stdc++.h>
using namespace std;

// 1. Brute force Approach

// assigning all rows to -1
void matRow(vector<vector<int>> &matrix, int i)
{
    int m = matrix[0].size();       // total no. of rows
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
            matrix[i][j] = -1;
    }
}

// assigning all columns to -1
void matCol(vector<vector<int>> &matrix, int j)
{
    int n = matrix.size();      // total no. of columns
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
            matrix[i][j] = -1;
    }
}

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matRow(matrix, i);
                matCol(matrix, j);
            }
        }
    }

    // assigning all rows and columns to 0 where necessary
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}