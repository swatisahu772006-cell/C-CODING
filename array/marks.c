//WAP PRINT THE STUDENT MARKS LESS THAN 35 
#include<stdio.h>
int main(){
    int marks[]={45,87,32,49,23};
    printf("student score less than 35:\n");
    for (int i=0;i<=4;i++){
         if(marks[i]<=35){
            printf("student is %d:",i);
            printf("%d\n",marks[i]);}
        }
    }

// by user input 
#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0;i<=4;i++){
        printf("enter marks %d ",i);
        scanf("%d",&marks[i]);}
        printf("student score less than 35:\n");
    for (int i=0;i<=4;i++){
         if(marks[i]<=35){
            printf("student is %d:",i);
            printf("%d\n",marks[i]);}}}
