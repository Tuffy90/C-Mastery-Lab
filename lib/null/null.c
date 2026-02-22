#include <stdio.h>
#include <errno.h> // download lib errono
#include <string.h>

int main(){
 FILE *fp = fopen("test.txt", "r");
     if (fp == NULL){
      perror("don't read test.txt");
      return errno; // what this error "code"
     }
 return 0;
}