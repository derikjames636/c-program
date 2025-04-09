#include<stdio.h>
  int main(){
    FILE *fp;
    int wordCount=0;
    fp = fopen("sample.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)==1){
        if(ch==' ' || ch=='.'){
          wordCount++;
        }
    }
    printf("word count=%d",wordCount);
    fclose(fp);
    return 0;
}
