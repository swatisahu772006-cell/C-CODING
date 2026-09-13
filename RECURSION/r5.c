//WAF TO CONVERT CELSIUS  TO FEHRENHEIT
#include<stdio.h>
int celsiustofeh(int c);
 int main(){
    int c;
    printf("celsius to fehrenheit:%d",celsiustofeh(1));
 }

 celsiustofeh(int c){
    int feh=(c*(9/5))+32;
    return feh;
 }
