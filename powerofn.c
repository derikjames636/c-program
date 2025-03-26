#include<stdio.h>
  int power(int n1,int n2){
    if (n2==0){
    return 1;
    }
    else {
      return n1*power(n1,n2-1);
    }
    }
    int main(){
    int n1,n2;
    printf("enter base value");
    scanf("%d",&n1);
    printf("enter exponent value");
    scanf("%d",&n2);
    int result=power(n1,n2);
    printf("%d",result);
    return 0;
    }
      

