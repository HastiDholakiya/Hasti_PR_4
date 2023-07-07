#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
int n=11;
clrscr();

for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
      printf("%d ",n++);
   }
   printf("\n");

}
getch();
}

/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/