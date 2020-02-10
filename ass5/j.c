#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[], int l, int h, int x)
{
	int a = l;
	int b = (l>h+1? l: h+1);
	int mid ;

	while(a<b)
	{
		mid = (a+b)/2;

		if (x<= arr[mid])
			b = mid;
		else a = mid+1;

	}
	if ( x== arr[b]) return b;
	else return -1;

}

int main()
{
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
	#endif

	int n;
	scanf("%d", &n);
	int arr[n], sorted[n];
	int x;
	

	int i =0;
	int j =1;
	int flag = 1;

	for( i =0;i< n;i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);

	while(j<n && flag)
	{
		if(arr[j]< arr[j-1])	flag = 0;
		j+=1;
	}
	j--;

	for(int k = j;k< n;k++) sorted[k-j] = arr[k];
	for(int k = 0 ;k< j;k++) sorted[n-j+k] = arr[k];


	int res = binary_search(sorted, 0, n, x);
	

	if(res == -1) printf("NO");
	else {
		printf("YES\n");
		if (res<n-j) printf("%d\n" , res +j);
		else printf("%d\n", res +j-n);
	}

	return 0 ;
}