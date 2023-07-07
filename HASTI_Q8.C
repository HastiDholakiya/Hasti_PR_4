#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();

for(i=1;i<=5;i++){
 if(i==2 || i==3){
   printf("*       *\n");
 }else if(i==1){
   printf("  * * *\n");
 }else if(i==4){
   printf("  * *  *\n");
 }else if(i==5){
   printf("        *\n");
 }

}
getch();
}

/*
  * * *
*       *
*       *
  * *  *
	*
*/