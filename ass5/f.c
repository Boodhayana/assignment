#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int comp(const void * a, const void *b)
{
	int l = *(const int *)a;
	int r = *(const int *)b;

	return l-r;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;	scanf("%d", &n);

	int arr[n+2];

	for(int i=0;i< n;i++)	scanf("%d", &arr[i]);

	qsort(arr,  n, sizeof(int), comp);

	int k =1;
	int count= 0;
	for(int i =0;i<n-1;i++)
	{
		count += k; 
		if (arr[i+1] == arr[i])		continue;
		k++;
	}
	count+= k;

	printf("%d", count);
	return 0;
} 