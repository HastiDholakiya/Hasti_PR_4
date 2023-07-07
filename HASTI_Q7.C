#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();

for(i=1;i<=5;i++){
 if(i==1 || i==3){
   printf("* * * *\n");
 }else if(i==2 || i==4 || i==5){
   printf("*     *\n");
 }
}

getch();
}

/*
* * * *
*     *
* * * *
*     *
*     *
*/