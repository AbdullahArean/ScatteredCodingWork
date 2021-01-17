#include<stdio.h>

int recursivelinearsearch(int arr[], int lb, int ub, int key)
{
	if (lb>ub) return 0;
	if(arr[lb]== key) return 1;
	return recursivelinearsearch(arr, lb+1, ub, key);
}



bool iterativelinearsearch(int arr[], int lb, int ub, int key)
{
	for(int i=lb; i<=ub; i++)
	{
		if(arr[i]== key) return true;
	}
	return false;
}
int recursivebinarysearch(int arr[], int lb, int ub, int key)
{
	if(lb>ub) return lb-1;
	int mid= lb+ (ub-lb)/2 ;
	if (key== arr[mid]) return mid;
	else if(key< arr[mid]) return recursivebinarysearch(arr, lb, mid-1, key);
	else return recursivebinarysearch(arr, mid+1, ub, key);
}
int iterativebinarysearch(int arr[], int lb, int ub, int key)
{
	while(lb<=ub)
	{
		int mid = lb + (ub-lb)/2;
		if(key== arr[mid]) return mid;
		else if(key < arr[mid]) ub= mid-1;
		else lb= mid+1;
	}
	return lb-1;
}
int main()
{
	int arr[100] ={1, 4 , 5 , 7,9};
	int n=5;
	int key= 3;
	//if(iterativelinearsearch(arr, 0, n-1, key)) printf("Found\n");
	//else printf("Not Found\n");
	printf("%d\n", iterativebinarysearch(arr, 0, n-1, key));
	return 0;
}
