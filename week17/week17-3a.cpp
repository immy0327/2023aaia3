//SOIT107_ADVANCE_005：進階題：字串長度 
//week17-3a.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cin >> a;
	cin >> b; //C: strlen() C++: string.length()
	int N1 = a.length(), N2 = b.length();
	if(N1>N2) cout << 1;
	else if(N1<N2) cout << -1;
	else{
		//C: strcmp() C++: string.compare()
		cout << a.compare(b);
	}
}