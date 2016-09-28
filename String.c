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


char* strcpy1(char *dest, char *source){
  int i = 0;
  while(*source){
    *dest = *source;
    dest++;
    source++;
    i++;
  }
  return dest;
}
  
int main(){
  char string1[100] = "hello, my name is...";
  char string2[100] = "my name is...";
  char string3[100] = "bob";
  printf("string1 strLen1: %d\n\n",strLen1(string1));
  printf("string2[0] :%d\n", string2[0]);
  printf("string3[0] :%d\n\n", string3[0]);
  printf("string2 cpy string3: %lu\n",strcpy1(string2,string3));
  printf("string2 cpy String3(built in): %lu\n", strcpy(string2,string3));
  printf("string2[0] :%d\n", string2[0]);
  printf("string3[0] :%d\n", string3[0]);
  
  
  
}
  
  
