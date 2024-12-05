//week13-4.cpp 解advent of code 2024 day 1 題目
//leetcode 右上角圖示，my playground
//new playground， +新的playground
//input 放在右下角的stdin 的準備輸入區
//前面leetcode 幫妳寫好了 #include <iostream> 和 #include <vector>
//using namespace std; 都幫妳寫好了，你不用寫，方便你在遊樂園玩程式
int main() {
    vector<int> A, B; //2個陣列(伸縮自如)
    int a, b; //2個數
    while( cin >> a >> b ){ //Step01: input
        A.push_back(a); //step02: 放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++){ //step03: output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "答案是" << ans;
}