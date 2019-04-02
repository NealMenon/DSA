#include <stdio.h>

int findoptimal(int n)
{
	if (n<=6)
		return n;

	int max = 0, i;
	for (i=n-3; i>=1; i--)
	{
			// If the breakpoint is s at b'th keystroke then
			// the optimal string would have length
			// (n-b-1)*screen[b-1];
			int curr = (n-i-1)*findoptimal(i);
			if (curr > max)
				max = curr;
	}
	return max;
}


int main()
{
	int n, count=0, paste=0;
	printf("\nEnter n:\n");
	scanf("%d", &n);
	printf("\n%d\n", findoptimal(n));
	return 0;
}