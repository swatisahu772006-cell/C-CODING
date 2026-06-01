#include<stdio.h>
 int main(){
    int age=23;
    int *ptr=&age;
    //address
    printf("%p\n",&age);
    printf("%u",ptr);}