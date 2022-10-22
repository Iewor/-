#include <stdio.h>
int main()
{
 int A, B, C, D, E;
 int x;
 printf("³É¼¨\n");
 scanf("%d", &x);
 if (x >= 90)
 {
  printf("grade:A");
 }
 if (x >= 80 && x <= 89)
 {
  printf("grade:B");
 }
 if (x >= 70 && x <= 79)
 {
  printf("grade;C");
 }
 if (x >= 60 && x < 69)
 {
  printf("grade:D");
 }
 if (x < 60)
 {
  printf("grade;E");
 }
  return 0;
}
