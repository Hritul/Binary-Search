#include <stdio.h>
void binarysearch(int a[], int f, int r, int key)
{
	int middle = (f + r)/2;
	while (f<=r)
	{
		if(a[middle]==key)
		{
		printf("Found");
		break;
	}
		else if(a[middle]>key)
		{
		binarysearch(a, f, middle-1, key);
		break;
	}
		else
		{
		binarysearch (a, middle+1, r, key);
		break;
	}
	}
}
int main()
{
	int a[5], key, i;
	printf("Enter elements of array: ");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\nNumber to search for: ");
	scanf("%d", &key);
	int f=0, r=4;
	binarysearch(a, f, r, key);
}
