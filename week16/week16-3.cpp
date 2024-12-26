//week16-3.cpp 學習計畫 math最後一題
//50Pow(x, n) 試著用for迴圈看看
class Solution {
public:
    double helper(double x, long long int n){
        if(n==0) return 1; // 終止條件、結束條件 terinal condition
        if(n==1) return x;
        double now = helper(x, n/2);
        if(n%2==0) return now * now;
        else return now * now * x;
    }
    double myPow(double x, long long int n) {
        double ans = 1;
        if(n<0){ //遇到負的會失敗，所以要把n變成正的
            n = -n;
            x = 1/x; //-1次方就是 1/x;
        }
        //for(int i=0; i<n; i++){
        //   ans *= x;
        //}
        return helper(x,n);//先不要上傳

    }
};