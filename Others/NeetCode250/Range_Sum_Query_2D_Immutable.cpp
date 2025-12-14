// Bruteforce O(n2)

class NumMatrix
{
    vector<vector<int>> matrix;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        this->matrix = matrix;
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sum = 0;
        int iter = row1;
        for (int j = col1; iter <= row2 && j <= col2; j++)
        {
            sum += matrix[iter][j];
            cout << iter << " " << j << "\n";
            if (j == col2)
            {
                iter++;
                j = col1 - 1;
                cout << sum << "\n";
            }
        }
        return sum;
    }
};

// Using one dimensional prefix sums
class NumMatrix
{
    vector<vector<int>> pre;
    int n, m;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {

        m = matrix.size();
        n = matrix[0].size();
        pre.resize(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            pre[i][0] = matrix[i][0];
            for (int j = 1; j < n; j++)
            {
                pre[i][j] = matrix[i][j] + pre[i][j - 1];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sum = 0;
        int iter = row1;
        while (iter <= row2) // using one dimentional prefix sums
        {
            if (col1 == 0)
                sum += pre[iter][col2];
            else
                sum += (pre[iter][col2] - pre[iter][col1 - 1]);
            iter++;
        }
        return sum;
    }
};