#include <iostream>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<bool> col(m, false);
    vector<bool> row(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    int row, col;
    cin >> row>>col;
    vector<vector<int>> matrix(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}