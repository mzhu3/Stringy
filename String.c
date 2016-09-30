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
int findNull(char *dest){
  int i = 0;
  while(*dest){
    i++;
    dest++;
  }
  return i;
}

char *strncat1(char *dest, char *source,int n){
  int found = findNull(dest);
  int index = n;
  while(*source && index ){
    *(dest + found) = *source;
    found++;
    index--;
  }
  return dest;
}

int strcmp1(char *s1, char *s2){
  int sum = 0;
  int k = 0;
  while(*s1 || *s2){
    sum = (*s2 - *s1);
    s1++;
    s2++;
  }
  
return sum;
}

int main(){
  char string1[100] = "hello, my name is...";
  char string2[100] = "my name is...";
  char string3[100] = "bob";
  char string4[100] = "hello, my name is...";
  char string5[100] = "my name is...";
  char string6[100] = "bob";
  
  /*printf("string1 strLen1: %d\n\n",strLen1(string1));
  printf("string2[0] :%d\n", string2[0]);
  printf("string3[0] :%d\n\n", string3[0]);
  printf("string2 :%s\n", string2);
  printf("string3 :%s\n", string3);
  
  printf("string2 cpy string3: %s\n",strcpy1(string2,string3));
  printf("string5 cpy String6(built in): %s\n",strcpy(string5,string6));
  printf("strcpy1 = strcpy?:%d\n\n",same(string2,string5));
  
  printf("string1 catn string3: %s\n",strncat1(string1,string3,1));
  printf("string4 catn String6(built in): %s\n",strncat(string4,string6,1));
  printf("strncat1 = strncat?:%d\n\n",same(strncat1(string1,string3,1),strncat(string4,string6,1)));*/
    
  printf("string2 cmp string3: %d\n",strcmp1(string2,string3));
  printf("string2 cmp String3(built in): %d\n\n",strcmp(string2,string3));
    
  printf("string2 cmp string5: %d\n",strcmp1(string2,string5));
  printf("string2 cmp String5(built in): %d\n",strcmp(string2,string5));
  
  
}
  
  
