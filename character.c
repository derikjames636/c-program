#include<stdio.h>
int main(){
  char name[20];
  printf("enter your name");
  fgets(name,sizeof(name),stdin);
  printf("welcome %s",name);
  return 0;
}  
