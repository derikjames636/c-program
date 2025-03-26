#include<stdio.h>
int sumofarray(int arr[],int n){
int sum=0;
for( int i=0;i<n;i++){
 sum=sum+arr[i];
 }
 return sum;
 }
 int main(){
 int n, array[10];
 printf("enter number of elements");
  scanf("%d",&n);
  printf("\nEnter the  elements");
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int result =sumofarray(array,n);
  printf("%d",result);
 }



