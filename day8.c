#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int n,sum;
scanf("%d",&n);
if(10000<=n<=99999)
sum =(n/10000)+(n/1000)%10+(n/100)%10+(n/10)%10+(n)%10;
printf("%d",sum);
return 0;
}
