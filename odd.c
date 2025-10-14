//class:civil FE
//Name:Shaikh Noorealam 
//UIN:251C006
//Divion:B

#include<stdio.h>
int main()
{
    int start,end,sum=0;
    printf("the staring number:");
    scanf("%d" ,&start);
    printf("the ending number:");
    scanf("%d" ,&end);
    for(int i=start; i<=end;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("the sum, of all odd number between %d 
        and %d\n",start,end,sum);

    return 0;

}
