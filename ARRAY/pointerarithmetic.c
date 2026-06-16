//CASE 1

#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("%d\n",ptr);
    ptr++;               //CHANGE DATA TYPE INCREMENT
    printf("%d\n",ptr);
    ptr--;               //CHANGE DATA TYPE DECREMENT
    printf("%d",ptr);

}

//CASE2

#include<stdio.h>
int main(){
    float age=55;
    float *ptr=&age;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d",ptr);

}

//CASE3 

#include<stdio.h>
int main(){
    char star='*';
    char *ptr=&star;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d",ptr);

}