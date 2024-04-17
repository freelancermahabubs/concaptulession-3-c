#include <stdio.h>
#include <limits.h>
int main(){
    int n = 7854;
int rev = 0;
  while (n !=0)
  {
 int last_digit = n % 10;
 rev = rev * 10 +last_digit;
 n = n /10;
  }
  printf("%d\n", rev);
  return 0;
    
}