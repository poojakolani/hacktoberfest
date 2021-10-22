#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b,n;
scanf("%d \n%d",&a,&b);
for(n=a;n<=b;n++)
{
    if(1<=n<=9)
    {
        if(n==1)
            printf("\none");
        else if(n==2)
            printf("\ntwo");
        else if(n==3)
            printf("\nthree");
        else if(n==4)
            printf("\nfour");
        else if(n==5)
            printf("\nfive");
        else if(n==6)
            printf("\nsix");
        else if(n==7)
            printf("\nseven");
        else if(n==8)
            printf("\neight");
        else if(n==9)
            printf("\nnine");
        else if(n>9 && n%2==0)
            printf("\neven");
        else if(n>9 && n%2!=0)
            printf("\nodd");
     }
}
return 0;
}
