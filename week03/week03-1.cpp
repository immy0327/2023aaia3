///week03-1.cpp 了解range-based for迴圈 在2011年的c++才能用!
///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///CodeBlocks-Settings-Comiler 把 -std=c++的2011年的c++開起來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){ ///這種簡單好看好寫的for迴圈，是2011年的c++開始有
        cout << c << "\n";
    }
}
