//class:civil FE
//Name:Shaikh Noorealam 
//UIN:251C006
//Divion:B

#include<stdio.h>
int main()
{
    int p,c,m;
    float avg;
    printf("Physics marks:");
    scanf("%d" ,&p);
    printf("Chemistry marks:");
    scanf("%d" ,&c);
    printf("Mathematic marks:");
    scanf("%d" ,&m);
    avg = (p+c+m)/3.0;
    printf("\navg mark in pcm =%.2f\n",avg);
    (avg>=50)
    ?printf("student is eligible for admission.\n")
    :printf("student is not eligible for admission.\n");

    return 0;
}