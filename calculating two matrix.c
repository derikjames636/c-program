
#include <stdio.h>
int main(){
  int row,col,i,j;
  printf("enter row and column");
  scanf("%d%d",&row,&col);
  int matrix1[row][col],matrix2[row][col],matrix3[row][col];
  printf("enter elements of first matrix:");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&matrix1[i][j]);
      }
    }
  printf("enter elements of second matrix:");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&matrix2[i][j]);
      }
    }
  for(i=0;i<row;i++){
    for(j=0;j<row;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  printf("Sum of two matrix is: \n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d\t",matrix3[i][j]);
      }
    printf("\n");
    }
    return 0;
    
}    
  
    
