//SOIT107_ADVANCE_007：進階題：擲骰統計
//week02-2.cpp
#include <iostream>
#include <string>;
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(char c :s){
		 if(c != '2') cout <<c;
	}
	//cout << s;
	cout << "\n";
}