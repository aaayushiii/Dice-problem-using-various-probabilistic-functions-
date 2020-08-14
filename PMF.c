#include<stdio.h>
int main()
{
    int i,j,m=0,n,k=0,l=0;
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
            if((arr[i][j]%10)!=n && (arr[i][j]/10)!=n)
            {
            	printf("%d\n",arr[i][j]);
			    k++;
			
			}
		}
	}
	printf("Probability of zero occurence of %d is %f\n ",n,k/36.0);
	
	for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
        	if((arr[i][j]%10)==n || (arr[i][j]/10)==n)
        	{
        		if((arr[i][j]%10)==n && (arr[i][j]/10)==n)
        		{
        			continue;
				}
        		printf("%d\n",arr[i][j]);
        		l++;
        	}
        		

		}
	}
	printf("Probability of single occurence of %d is %f\n ",n,l/36.0);
	
	for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
        if((arr[i][j]%10)==n && (arr[i][j]/10)==n)
		{
			printf("%d\n",arr[i][j]);
			m++;
			}
		}
	}
	printf("Probability of double occurence of %d is %f\n ",n,m/36.0);
}

	

     

     	/*	if((arr[i][j]/10)!=n)
			 {
			 	if((arr[i][j])/10==n && (arr[i][j]%10==n))
			 	{
			 		continue;
				 }
            	printf("%d\n",arr[i][j]);
			    a[k+1]=arr[i+1][j+1];
			    k++;
			    
			
     		}
            
			
        }
    }
    printf("\nNew array is: ");
	printf("%d\n",arr[i][j]);   
	printf("\nNew array is: ");
    for(i = 0; i < 12; i++)
    {
        for(j = i+1; j < 12; )
        {
            if(a[z] == a[k])
            {
                for(k = j; k < 12; k++)
                {
                    b[l] = b[l+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i = 0; i < 12; i++)
    {
        printf("%d ", a[k]);
    }
    int getch();
}*/
