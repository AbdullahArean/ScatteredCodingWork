#include<stdio.h>

int strlen(char *s)
{
    int i=0, count=0;
    while(s[i++]!='\0') count++;

    return count;
}
int strcmp(char *a, char *b)
{
    for(int i=0; i<4; i++)
    {
        if(a[i]<b[i]) return -1;
        else if(a[i]>b[i]) return 1;
    }
    return 0;

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
void strcpy(char *smain, char *scopy, int t)
{
    int j=0;
    for(int i=t; i<t+4; i++)
    {
        scopy[j++]= smain[i];
    }
    scopy[j]='\0';
}
int main()
{
    char string[100];
    char str2[5];
    scanf("%s",string);
    strcpy(string, str2, 3);
    printf("%s %s",string, str2);
}