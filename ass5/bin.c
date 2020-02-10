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