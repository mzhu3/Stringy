#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLen1(char *cp){
  int sum = 0;
  int i = 0;
  char *temp = cp;
  while(*temp){
    sum ++;
    temp ++;
  }
  return sum;
}


char *strcpy1(char *dest, char *source){
  int i = 0;
  int k = 0;
  while(dest[k]){
    dest[k] = 0;
    k++;
  }
  while(source[i]){
    dest[i]=source[i];
    i++;
  }
  return dest;
}

int same(char *a,char *b){
  return a == b;
}
int main(){
  char string1[100] = "hello, my name is...";
  char string2[100] = "my name is...";
  char string3[100] = "bob";
  printf("string1 strLen1: %d\n\n",strLen1(string1));
  printf("string2[0] :%d\n", string2[0]);
  printf("string3[0] :%d\n\n", string3[0]);
  printf("string2 :%s\n", string2);
  printf("string3 :%s\n", string3);
  printf("string2 cpy string3: %s\n",strcpy1(string2,string3));
  printf("string2 cpy String3(built in): %s\n",strcpy(string2,string3));
  printf("strcpy1 = strcpy?:%d\n\n",same(string2,string3));
  
  
  
  
}
  
  
