class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>square[9];
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char value = board[r][c];
                char i = r/3*3+c/3;
                if(value=='.'){
                    continue;
                }
                if(row[r].count(value) || col[c].count(value) || square[i].count(value))
                    return false;
                row[r].insert(value);
                col[c].insert(value);
                square[i].insert(value);
            } 
        }
        return true;
    }
};