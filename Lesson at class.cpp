#include<stdio.h>
#include<windows.h>
int main()
{
	int i;
	float A[10];
	for(i=0;i<10;i++)
	{
		printf("Input the ");
		if(i==0)
		{
			printf("first");
		}
		if(i==1)
		{
	     	printf("second");
		}
		if(i==2)
		{
	    	printf("third");
		}
		if(i==3)
		{
		    printf("fourth");
		}
		if(i==4)
		{
	        printf("fifth");
		}
		if(i==5)
		{
	    	printf("sixth");
		}
		if(i==6)
		{
	    	printf("seventh");
		}
		if(i==7)
		{
	    	printf("eighth");
		}
		if(i==8)
		{
    		printf("ninth");
		}
		if(i==9)
		{
    		printf("tenth");
		} 
		printf(" number: ");
		scanf("%f",&A[i]);
	}
	int a,b,c;
	float temp;
	for(a=0;a<10;a++)
	{
		c=A[a];
		for(c=a+1;c<10;c++)
		{
			if(A[a]<A[c])
			{
				temp=A[a];
				A[a]=A[c];
				A[c]=temp;
			}
		}
	}
	for(a=0;a<10;a++)
	{
		printf("%.2f\n",A[a]);
	}
	system("pause");
	return 0;
}