class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // int n = board.size();
        // int m = board[i].size();
        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> s;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                if (s.count(board[i][j]))
                    return false;
                s.insert(board[i][j]);
            }
        }

        // col
        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> s;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] == '.')
                    continue;
                if (s.count(board[j][i]))
                    return false;
                s.insert(board[j][i]);
            }
        }

        // each 3*3 board
        for (int square = 0; square < 9; square++)
        {
            unordered_set<char> s;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;

                    if (board[row][col] == '.')
                        continue;
                    if (s.count(board[row][col]))
                        return false;
                    s.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};