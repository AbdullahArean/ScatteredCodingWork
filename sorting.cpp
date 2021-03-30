#include <stdio.h>
#include <stdlib.h> //For Randomized Quick Sort
#include<time.h>//For Randomized Quick Sort
void swap(int *, int *); 

void bubblesort(int arr[], int n) //Function for implementing bubble sort
{

    for (int i = 0; i < n - 1; i++) //Outer Loop
    {
        bool flag = false;                  //to make it more efficient
        for (int j = 0; j < n - 1 - i; j++) //inner loop
        {
            if (arr[j] > arr[j + 1]) //Comparison
            {                        //Swapping
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //	printf("ran\n");
                flag = true;
            }
        }
        if (!flag)
            return;
    }
}
void insertionsort(int arr[], int n) //Function for implementing insertion sort
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selectionsort(int arr[], int n) //Function for implementing selection sort
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp = arr[i], ref = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < temp)
            {
                temp = arr[j];
                ref = j;
            }
        }
        int temp2 = arr[i];
        arr[i] = temp;
        arr[ref] = temp2;
    }
}
void merge(int arr[], int start, int mid, int end)
{

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int leftArr[len1], rightArr[len2];

    for (int i = 0; i < len1; i++)
        leftArr[i] = arr[start + i];
    for (int j = 0; j < len2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = start;

    while (i < len1 && j < len2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void countingsort(int a[], int n, int max, int min)
{
    int count[1000006] = {0}, i, j;
    if (min <= 0)
    {
        for (int i = 0; i < n; i++)
        {
            count[a[i]-min]++;
        }
        int k = 0;
        for (i = 0; i <= max -( min); ++i)
        {
            for (j = 1; j <= count[i]; ++j)
            {
                a[k++] = i+(min);
            }
        }
    }
    else
    {

        for (i = 0; i < n; ++i)
            count[a[i]] = count[a[i]] + 1;
        int k=0;
        for(i=0;i<=max;++i){
            for(j=1;j<=count[i];++j){
                a[k++]=i;
            }

        }
      
    }
}
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp; 
}  
int PartitionPivotReturn(int *A, int start, int end)
{
    int Pivot = *(A+end);
    int PartitionIndex = start; //set partition index as start initially
    for(int i= start; i<end; i++)
    {
        if(*(A+i) <= Pivot)
        {
            swap(A+i,A+PartitionIndex); //swap if element lesser than pivot element
            PartitionIndex++;
        }
    }
    swap(A+PartitionIndex,A+end);//swap Pivot element at a parttion index
    return PartitionIndex;
}

int RandomizedPartitionPivotReturn(int *A, int start, int end){
    /* Intializes random number generator */
    srand(time(NULL));
    int PivotIndex= ((int)rand() % (end - start + 1)) + start;
    swap(A+PivotIndex,A+end);
    int Pivot = *(A+end);
    int PartitionIndex = start; //set partition index as start initially
    for(int i= start; i<end; i++)
    {
        if(*(A+i) <= Pivot)
        {
            swap(A+i,A+PartitionIndex); //swap if element lesser than pivot element
            PartitionIndex++;
        }
    }
    swap(A+PartitionIndex,A+end);//swap Pivot element at a parttion index
    return PartitionIndex;

}
void QuickSort(int *A, int start, int end)
{
    if(start<end)
    {
        int PartitionIndex= RandomizedPartitionPivotReturn(A,start, end);
        QuickSort(A,start,  PartitionIndex-1);
        QuickSort(A, PartitionIndex+1, end);
    }
}
int main()
{
    int arr[1000006];
    /*
    int max = -10000001; //for counting sort
    int min = 10000001; //for counting sort
    */
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);

        /*
        if (arr[i] > max) //for counting sort
            max = arr[i];//for counting sort
        if (arr[i] < min)//for counting sort
            min = arr[i];//for counting sort
        */
    }

    printf("Original array\n");
    display(arr, t);
    QuickSort(arr,0,t-1);
    // mergeSort(arr,0,t-1); //for mergesort
    // bubblesort(arr,t);//for bubule sort
    // selectionsort(arr,t); //for selection sort
    // insertionsort(arr,t); //for insertion sort
    // countingsort(arr, t, max, min);//for counting sort

    printf("Sorted array\n");
    display(arr, t);
    return 0;
}
