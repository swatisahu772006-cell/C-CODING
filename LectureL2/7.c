//ELSEIF CONDITION
#include<stdio.h>
int main()
{
    int mark;
    printf("enter mark(1-100) :");
    scanf("%d",&mark);
    if( mark>=0&&mark>30&&mark<=100)
    {
        printf("PASS");}
        else if(mark<=30){
            printf("FAIL");
        }
            else{
            printf("wrong mark enter");
            }
    }
