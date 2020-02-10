#include<stdio.h>
#include<stdlib.h>

int bs(int arr[], int l , int r , int x)
{
	if (l>r)
		return -1;

	int mid = l + (r-l)/2;

	if (arr[mid] == x)
		return mid;

	if (x< arr[mid])
		return bs(arr, l, mid-1, x);

	if (x> arr[mid])
		return bs(arr, mid+1, r, x);

	return -1;
}

int main()
{
	#ifndef ONLINE_JUDHE 
		freopen("input.txt", "r", stdin);
	#endif

	int n, m;
	scanf("%d %d", &n, &m);

	int arr[n+1][m+1];

	for(int i=0;i< n;i++)
		for(int j=0;j<m;j++)
			scanf("%d", &arr[i][j]);

	int price;
	scanf("%d", &price);
	int index;

	for(int i =0;i< n;i++)
	{
		index = bs(arr[i], 0, m, price);
		if (indexe != -1)
		{
			printf("YES\n%d %d", i,index );
			return 0;
		}
	}

	printf("N0\n");
	return 0 ;
}