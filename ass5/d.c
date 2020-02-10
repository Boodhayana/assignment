#include<stdio.h>
#include<stdlib.h>

int lb(int arr[], int l, int r, int x)
{
	if(x<arr[l]|| l> r)
		return -1;
	if(x> arr[r])
		return r;

	r = r+1;
	int mid;
	while(l< r)
	{
		mid = l + (r-l)/2;
		if(x< arr[mid])		r= mid;
		else l = mid+1;
	}
	if(x == arr[r]) 	return r;
	return r-1;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int nn;
	scanf("%d", &nn);
	int k;scanf("%d", &k);

	int arr[nn+2];
	for(int i=0;i<nn;i++)	scanf("%d", &arr[i]);

	

	int index;
	int count =0;

	for(int i =0;i< nn-2;i++)
	{
		index = lb(arr, i+2, nn-1, arr[i]+k);
		if(index != -1) count += ((index- i-1)*(index -  i))/2;
		printf("%d %d %d %d\n", arr[i] +k, index, count, i);
	}

	printf("%d", count);
	return 0;
}