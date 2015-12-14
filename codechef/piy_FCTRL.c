#include <stdio.h>
 
 
int main(int argc, char *argv[])
{
	long long times, num;
	scanf("%lld", &times);
	while(times--)
	{
		int count=0;
		scanf("%lld", &num);
		int tst =5;
		while(tst <= num)
		{
			count += num/tst;
			tst*=5;
		}
		printf("%d\n", count);	
	}
	return 0;
}
