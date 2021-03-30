#include<stdio.h>
#include<cstdlib>
#define Max 999999999
int main()
{
	// int numisprime[Max];
	int *numisprime = (int*)malloc(sizeof(int)*Max);//Memory Dynamically Allocated
    numisprime[0]=-1;
    numisprime[1]=-1;
	for(int num = 2; num< Max; num++)
	{
		numisprime[num] = num;
	}
	
	for(int num = 2; num*num < Max; num++)
	{
		if(numisprime[num] != -1)
		{
			for(int mulnum = 2*num; mulnum <Max ; mulnum += num)
				numisprime[mulnum] = -1;
		}
	}
    // int inp;
    // scanf("%d",&inp);
    // if(numisprime[inp]!=-1)
    // {
    //     printf(("==>>Prime<<==!\n"));
    // }
    // else printf("Number is not a Prime\n");
	for(int i=0; i<Max; i++)
	{
		
		if(numisprime[i]==(-1)) continue;
		else printf("%d\n",numisprime[i]);
		
	}
	free(numisprime);
	return 0;
}

