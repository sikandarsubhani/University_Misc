#include <bits/stdc++.h>
using namespace std;
void printArray(int [], int);
static void insertionsort(int Array[], int n) {
  for(int i=0; i<n; i++) {
    int curr = Array[i];
    int j = i - 1;
    while(j >= 0 && curr < Array[j]) {
      Array[j + 1] = Array[j];
      Array[j] = curr;
      j = j - 1;
    }
  }
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = {9,6,8,19,24,18,5,-9,14};
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	insertionsort(arr, n);
	printArray(arr, n);
	return 0;
}