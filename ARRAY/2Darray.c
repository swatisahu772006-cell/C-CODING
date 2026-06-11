//CASE1

#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=55;
    marks[0][1]=78;
    marks[0][2]=54;
    marks[1][0]=47;
    marks[1][1]=52;
    marks[1][2]=47;
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[1][0]);
    printf("%d",marks[1][2]);
    

}

//CASE 2
#include<stdio.h>
int main(){
    int marks[2][3]={{1,2,3},{4,8,9}};
    printf("%d\n%d\n%d\n%d",marks[0][2], marks[1][1],marks[0][3], marks[1][2]);
}

