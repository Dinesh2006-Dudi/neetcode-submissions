class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool col[9][9]={false};
        bool box[9][9]={false};

        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                continue;
                int num=board[r][c]-'1';
                int boxidx=(r/3)*3+(c/3);

                if(row[r][num]) return false;
                row[r][num]=true;

                if(col[c][num]) return false;
                col[c][num]=true;

                if(box[boxidx][num]) return false;
                box[boxidx][num]=true;
            }
        }
        return true;
    }
};
