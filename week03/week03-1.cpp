///week03-1.cpp �F��range-based for�j�� �b2011�~��c++�~���!
///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///CodeBlocks-Settings-Comiler �� -std=c++��2011�~��c++�}�_��
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){ ///�o��²��n�ݦn�g��for�j��A�O2011�~��c++�}�l��
        cout << c << "\n";
    }
}
