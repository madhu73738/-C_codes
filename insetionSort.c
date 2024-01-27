
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
	{
		key = arr[i]; // key:9 , i:1
		j = i - 1;    // j:0

		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
			printf("%d \n", arr[j]);
		}
		arr[j + 1] = key;
		printf("mew: %d \n", arr[j+1]);
	}
}

// A utility function to print 
// an array of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
