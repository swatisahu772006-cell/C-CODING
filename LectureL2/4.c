#include<stdio.h>
int main()
{
    char day;
    printf("enter day(m-s):");
    scanf("%c",&day);
    switch(day){
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday\n");
        break;
        case 'w':printf("wednesday\n");
        break;
        case 'T':printf("thursday\n");
        break;
        case 'f':printf("friday\n");
        break;
        case 'S':printf("saturday\n");
        break;
        case 's':printf("sunday\n");
        break;
        defult:printf("not a valid day\n");



    }
}