#include <stdio.h>

long long int arr[100002], temp[100002];

void merge(long long int l, long long int r, long long int *arr)
{
	long long int mid = (l + r) / 2;
	long long int f = l, s = mid + 1, t = l;
	while(f <= mid && s <= r)
	{
		if(arr[f]<=arr[s])
			temp[t++] = arr[f++];
		else
			temp[t++] = arr[s++];
	}
	while(f <= mid)
		temp[t++] = arr[f++];
	while(s <= r)
		temp[t++] = arr[s++];
	for(long long int i=l;i<=r;i++)
		arr[i] = temp[i];
}


void sort(long long int l, long long int r, long long int * arr)
{
	if(l < r)
	{
		long long int mid = (l + r) / 2;
		sort(l, mid, arr);
		sort(mid + 1, r, arr);
		merge(l, r, arr);
	}
}

long long int min(long long int a, long long int b)
{
	if(a<b)
		return a;
	return b;
}

int main()
{
	long long int n, m;
	long long int  ans = 0;
	scanf("%lld %lld", &n, &m);
	long long int cnt = 0;
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld", &arr[i]);
		cnt += arr[i];
	}
	sort(0, n-1, arr);
	long long int c = 0;
	for(long long int i=n-1;i>0;i--)
	{
		long long int diff = arr[i] - arr[i-1];
		if(diff == 0)
		{
			c++;
		}
		else
		{
			c++;
			long long int val = min(c, diff);
			c -= val;
			ans += val;
			diff -= val;
			ans += diff;
		}
	}
	long long int diff = arr[0];
	c++;
	long long int val = min(c, diff);
	c -= val;
	ans += val;
	diff -= val;
	ans += diff;
	printf("%lld\n", cnt-ans-c);
	return 0;
}