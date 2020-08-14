#include<stdio.h>
int main()
{
    int i,j,m,n,k=0,l=0;
    double result;
    int c=0,d=0;
    int a[6];
    int b[6];
    int arr[6][6]={
                  {11,12,13,14,15,16},
                  {21,22,23,24,25,26},
                  {31,32,33,34,35,36},
                  {41,42,43,44,45,46},
                  {51,52,53,54,55,56},
                  {61,62,63,64,65,66}
                  };
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Set A\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
        	
            if(((arr[i][j]%10)+(arr[i][j]/10)) < n)
            {
            printf("%d\n",arr[i][j]);
			a[k]=arr[i][j];
			k++;  
            }
        }
    }
    
    printf("Set B\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(((arr[i][j])/10)==2)
            {
            	printf("%d\n",arr[i][j]);
            	c++;
            	b[l]=arr[i][j];
            	l++;
            }
        }
    }
    printf("Set B has %d elements \n",c);
    printf("Set A intersection B\n");
  for (i=0;i<6;i++)
    {
    	for(j=0;j<6;j++)
		{
            if(a[i]==b[j])
            {
             d++;
             printf("%d\n",a[i]);
            
			}
		}
    }
    printf("Set A intersection B has %d elements\n",d);
result=(double) d/c;
printf("Probability is: %f",result);
}
    


