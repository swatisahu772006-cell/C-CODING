//find area of square,rectangle,circle
#include<stdio.h>
void areasquare();
void arearectangle();
void areacircle();
int main()
{
int side;
printf("enter side:");
scanf("%d",&side);
areasquare(side);
int l,b;
printf("enter l :\n");
scanf("%d",&l);
printf("enter b :");
scanf("%d",&b);
arearectangle(l,b); 
int r;
printf("enter r:");
scanf("%f",&r);
areacircle(r);
}
void areasquare(int side){
side=side*side;
printf("area of square:%d\n",side);
}
void arearectangle(int l, int b){
printf("area of rectangle:%d\n",l*b);
}
void areacircle(int r)
{int area;
area=3.14*r*r;
printf("area of circle:%d",area);} 

