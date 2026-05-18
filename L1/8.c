//average of three no
#include<stdio.h>
int main()
{
  int a,b,c;
  printf(" enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  printf("enter the value of c:");
  scanf("%d",&c);
  printf ("average of 3 no is:%d",(a+b+c)/3 );
}
//OR 

#include<stdio.h>
int main()
{
  int a,b,c;
  printf(" enter the value of a,b,c:");
  scanf("%d %d %d",&a,&b,&c);
  printf ("average of 3 no is:%d",(a+b+c)/3 );
}