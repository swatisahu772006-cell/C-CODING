#include<stdio.h>
int main(){
    int age=20;;
    int _age=24;
    int *ptr=&age;
    int *_ptr=&_age;
    printf("%d,%d different is:%d",_ptr,ptr ,ptr-_ptr);
    _ptr=&age;
    printf(" comparion:%d",ptr==_ptr);

}