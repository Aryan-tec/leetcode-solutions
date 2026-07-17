class Solution {
public:
    void solve(int col, vector<vector<string>>& ans,int n,vector<string>& board,vector<int>&leftrow, vector<int> &lowerDiagnol,vector<int> &upperDiagnol ){
        if(col == n) {
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n ;row++){
            if(leftrow[row]==0 && upperDiagnol[(n-1)+(col-row)]== 0 && lowerDiagnol[col+row] == 0){
                board[row][col] = 'Q';
                leftrow[row] =1;
                upperDiagnol[(n-1)+(col-row)]= 1;
                lowerDiagnol[col+row] = 1;
                solve(col+1 , ans,n, board, leftrow, lowerDiagnol, upperDiagnol);
                board[row][col]= '.';
                leftrow[row] =0;
                upperDiagnol[(n-1)+(col-row)]= 0;
                lowerDiagnol[col+row] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n,'.');
        for(int i=0; i<n;i++){
            board.push_back(s);
        }
        vector<int> leftrow(n,0), upperDiagnol(2*n -1, 0), lowerDiagnol(2*n-1,0); 
        solve(0,ans,n,board,leftrow,lowerDiagnol,upperDiagnol);
        return ans;
    }
};