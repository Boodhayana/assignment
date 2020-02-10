#include<stdio.h>
#include<stdlib.h>

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int n;scanf("%d", &n);
	unsigned int arr[n+2];

	for(int i=0;i< n;i++) scanf("%u", &arr[i]);

	long long int ans= 0;
	int count ;

	for(int i =0;i< 32;i++)
	{
		count =0;
		for(int j = 0;j< n;j++)
		{
			if(arr[j] & (1<<i))		count++;
			
		}
		ans += count*(n-count)*2;
	}

	printf("%lld", ans);
	return 0;
}