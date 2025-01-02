//week17-1.cpp  2559. Count Vowel Strings in Ranges
//找到 母音開始，母音結束，有幾個
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans; //他要什麼，我們就給他宣告 什麼 
        int prefixSum[ words.size() + 1 ]; //累積有幾個勾勾
        prefixSum[0] = 0;
        for(int i=0; i<words.size();i++){ //words[i]這個字
            prefixSum[i+1] = prefixSum[i]; //本來和左邊一樣多的勾勾
            if(words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u'){
                int N = words[i].length();
                if(words[i][N-1]=='a' || words[i][N-1]=='e' || words[i][N-1]=='i' || words[i][N-1]=='o' || words[i][N-1]=='u'){
                    prefixSum[i+1]++;//找到自首是字母、字尾也是母音的字
                }
            }
        }
        for(int i=0;i<queries.size();i++){
            int left = queries[i][0], right = queries[i][1];
            ans.push_back( prefixSum[right+1] - prefixSum[left] );
        }
        return ans;
    }
};