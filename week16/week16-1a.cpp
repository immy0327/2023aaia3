//SOIT106_ADVANCE_005_C：進階題：A的B次方函數
//week16-1a.cpp
#include <stdio.h>

int MYPOWER(int a, int b)
{
	 int ans = 1;
 	for(int i=0; i<b; i++){
 		ans *= a;
 	}
 	return ans;
 }

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}