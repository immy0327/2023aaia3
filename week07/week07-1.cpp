//1725leetcode
//week07-1

class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //裡面都放0
        //for(vector<int> move : moves) {原本用2微陣列，取出1微陣列}
        for(auto move : moves) { //用auto 它會幫你用好
            int i = move[0], j = move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A"; //勝利的是誰?
    }
};