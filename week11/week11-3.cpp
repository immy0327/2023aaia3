///week11-3.cpp �Q�ݬ� Hash Map
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{///�j�G�W ��ƺt��k �Ъ� Hash Map �����k
    unordered_map<string,int> m;///�S�p�S��
    m["���|��"] = 12750300;
    m["�i޳��"] = 12750794;

    cout << "���|�۪��Ǹ��O:" << m["���|��"] << endl;
    cout << "�i޳�����Ǹ��O:" << m["�i޳��"] << endl;
}

