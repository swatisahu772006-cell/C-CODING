//wap to print namaste if write i and bonjour if write f
#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter f for french & i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch =='i'){
        namaste();

    }
    if(ch =='f'){
        bonjour();
    }

}
 void namaste(){
    printf("namaste\n");
 }
 void bonjour(){
    printf("bonjour\n");
 }