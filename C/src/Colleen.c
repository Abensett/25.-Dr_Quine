#include<stdio.h>
void hi(void){}
//This commnent is outside
char*s="#include<stdio.h>%cvoid hi(void){}%c%c%cThis commnent is outside%cchar*s=%c%s%c;%cint main(void){ hi();//This comment is inside%cprintf(s,10,10,47,47,10,34,s,34,10,10,10);}%c";
int main(void){ hi();//This comment is inside
printf(s,10,10,47,47,10,34,s,34,10,10,10);}
