class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r=0;r<9;r++){
            unordered_set<char> row;
            for(int c=0;c<9;c++){
                if(board[r][c]!='.' && row.find(board[r][c])!=row.end()){
                    return false;
                }
                row.insert(board[r][c]);
            }
        }

        for(int c=0;c<9;c++){
            unordered_set<char> col;
            for(int r=0;r<9;r++){
                if(board[r][c]!='.' && col.find(board[r][c])!=col.end()){
                    return false;
                }
                col.insert(board[r][c]);
            }
        }

        vector<unordered_set<char>> sub(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                int subno=(r/3)*3+(c/3);
                if(board[r][c]!='.' && sub[subno].find(board[r][c])!=sub[subno].end()){
                    return false;
                }
                sub[subno].insert(board[r][c]);                
            }
        }
        return true;
    }
};
