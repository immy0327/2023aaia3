YKL11.UVA10035：Primary Arithmetic

//week13-2.cpp
#include <iostream>
using namespace std;
int helper(int a, int b)
{// step 03: function
	int ans = 0, carry = 0;
	while(a>0 || b>0) {//step 04: bo pi fa
		int now = a%10 + b%10 + carry;
		carry = now / 10;
		ans += carry;
		a /= 10;
		b /= 10;
	}
	return ans;
}

int main()
{
	int a, b;
	while( cin >> a >> b ){ //step 01: input
		if(a==0 && b==0) break;
		
		int ans = helper(a, b);// step 03: function
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout << "1 carry operation.\n";
		else cout << ans << " carry operations.\n";
	}//step 02: output
}