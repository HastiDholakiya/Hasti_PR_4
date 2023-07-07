#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();

for(i=1;i<=5;i++){
 if(i==1){
   printf("* * * *\n");
 }else if(i==2){
   printf("*      *\n");
 }else if(i==3){
   printf("* * * *\n");
 }else if(i==4 || i==5){
   printf("*      *\n");
 }
}

getch();
}

/*
* * * *
*      *
* * * *
*      *
*      *
*/