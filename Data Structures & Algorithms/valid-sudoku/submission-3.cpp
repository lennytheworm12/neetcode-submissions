
class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row_set(9);
        vector<unordered_set<int>> col_set(9);

        vector<unordered_set<int>> chunk_set(9);
        int rows = board.size();
        int cols = board[0].size();

        for (int r{}; r < rows; r++) {
            for (int c{}; c < cols ; c++) {
                //for each cell check the set of its grid and column to see if it has been seen
                int curr = board[r][c];
                int curr_chunk = (r/3) * 3 + (c/3);
                if (row_set[r].contains(curr) || col_set[c].contains(curr) || chunk_set[curr_chunk].contains(curr)) {
                    return false;
                }
                //to check if a digit is in the 3x3 we check r or c //3 since we are working from 0-8
                //this makes our r and c in terms of 0-2 
                //we then flatten from 2d to 1d
                if (curr != '.') {
                row_set[r].insert(curr);
                col_set[c].insert(curr);
                chunk_set[curr_chunk].insert(curr);
                }
                

            }
        }
        return true;
    }
};

