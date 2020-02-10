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
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r" , stdin);
	#endif

	int n;
	scanf("%d", &n);

	int arr[n+1];

	for(int i=0;i<n;i++) 	scanf("%d", &arr[i]);

	int sum;
	scanf("%d", &sum);

	for(int j =0;j< n-1;j++)
	{	

		if (bs(arr, j+1, n, sum-arr[j]) != -1)
		{
			printf("YES\n%d %d\n", arr[j], sum-arr[j]);
			return 0;
		}
	}
	printf("NO\n" );

	return 0 ;
}