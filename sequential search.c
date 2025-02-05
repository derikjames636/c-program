#include <stdio.h>
int main() {
  int i,limit,element[i],num;
  printf("\n Enter the limit");
  scanf("%d",&limit);
   printf("Enter the element");
    for(i=0;i<limit;i++){
     scanf("%d",&element[i]);
    }
    printf("Enter the number to search");
    scanf("%d",&num);
      for(i=0;i<limit;i++){
        if(num==element[i]){
          printf("\n The given element found at position%d",i+1);
          break;
          }
      }
     if(num=!element[i]){
        printf("\n Invalid input");
        } 
        
          return 0;
}          
  
