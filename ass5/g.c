#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void toBin(int n, int len)
{
	int arr[18];
	int count =0;

	memset(arr, 0, len*sizeof(int));


	while(n>0)
	{
		arr[count] = n%2;
		n/= 2;
		count++;
	}
	for(int i =len -1;i>= 0;i--) printf("%d", arr[i]);

	return ;		
}

int main()
{
	int n;	scanf("%d", &n);
	int k;	scanf("%d", &k);
	
	int final[1<<n +5];
	memset(final, 0, (1<<n+5)*sizeof(int));

	

	for(int i =1;i< ((1<<(n))-1);i++)
	{	
		final[k|i] = 1;
	}
	for(int i =0;i< (1<<n);i++)
	{
		if(final[i] == 0)	continue;
		toBin(i, n);
		printf("\n");
	}
	return 0;
}