//week11-1b.cpp UVA11332 Steo02 bo pi fa
#include <iostream>
using namespace std;

int f(int n) {
	int ans = 0;
	while( n>0 ){ //step : bo pi fa
		ans += n%10;
		n = n / 10;
	}
	return ans;
}
	
int main()
{
	int n;
	while( cin >> n){ //step : input
		if(n==0) break;
		
		n = f(n);
		
		cout << n << endl;
	}
}