///week11-3.cpp 想看看 Hash Map
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{///大二上 資料演算法 教的 Hash Map 湊雜法
    unordered_map<string,int> m;///又小又快
    m["蔡育倫"] = 12750300;
    m["張瑋辰"] = 12750794;

    cout << "蔡育倫的學號是:" << m["蔡育倫"] << endl;
    cout << "張瑋辰的學號是:" << m["張瑋辰"] << endl;
}

