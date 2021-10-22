#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void update(int *pa,int *pb);
int main()
{
int a,b;
int *pa=&a, *pb=&b;
scanf("%d %d",&a,&b);
update(pa,pb);
printf("%d \n%d",a,abs(b));
return 0;
}
void update(int *pa,int *pb)
{
int *c,*d;
*c=(*pa)+(*pb);
*d=(*pa)-(*pb);
*pa=*c;
*pb=*d;
}
