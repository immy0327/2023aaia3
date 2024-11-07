//week09-1.cpp 
//leetcode  1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(); //有個幾人
        int N = accounts[0].size(); //這個人，有幾個帳戶
        int ans = 0;
        for(int i=0; i<M; i++){ // 第i個人
        
            int total = 0; //迴圈前面 total=0;
            for(int j=0; j<N; j++){
                total += accounts[i][j];
            }
            if(total>ans) ans = total; //迴圈後面 total 拿來用
        }
        return ans;
        
    }
};




//wwek09-1.c 
////leetcode  1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int M = accountsSize;
    int N = accountsColSize[0];
    int ans = 0;
    for(int i=0; i<M; i++){

        int total = 0;
        for(int j=0; j<N; j++){
            total += accounts[i][j];
        }
        if(total>ans) ans = total;
    }
    return ans;
}