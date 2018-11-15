#include<stdlib.h>
#include<time.h>
#include <vector>

void randomize(vector <int> &a,int start,int end)
{
	int temp;
	while(start<end)
	{
		int len = end - start + 1 ;
		int var = rand() % len;
		temp = a[start+var];
		a[start+var] = a[start];
		a[start] = temp;
		start++;
	}
}

