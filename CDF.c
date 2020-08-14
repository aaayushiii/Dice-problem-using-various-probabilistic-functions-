#include<stdio.h>
int main()
{
    int i,j,n,m,k=0;
    double sum=0;
    int arr[6][6]={
                  {11,12,13,14,15,16},
                  {21,22,23,24,25,26},
                  {31,32,33,34,35,36},
                  {41,42,43,44,45,46},
                  {51,52,53,54,55,56},
                  {61,62,63,64,65,66}
                  };
    printf("Enter the value of m:");
    scanf("%d",&m);
for (n=2;n<=12;n++)
{
    k=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(((arr[i][j]%10)+(arr[i][j]/10)) == n)
            {
            printf("%d ",arr[i][j]);
			k++;
            }
        }
    }
printf("\n");
printf("Probability of getting a sum equal to %d is %f\n",n,k/36.0);
}

for (n=2;n<=m;n++)
{
    k=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(((arr[i][j]%10)+(arr[i][j]/10)) == n)
            {
			k++;
            }
        }
    }
    sum=sum+k/36.0;
}
printf("Required probability is %f",sum);
}

    
    


