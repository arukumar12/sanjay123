#include<stdio.h>
void main()
{
int i,n;
printf("print all even numbers till:");
scanf("%d",&n);
printf("all even numbers from 1 to %d are \n :",n);
i=1;
while(i<=n)
{
if(i%2==0)
{
printf("%d\n",i);
}
i++;
}

}
