#include <stdio.h>
#include "part1.c"
void f2(void);
int main(void) {
f1(); // Note: f1() is implemented in part1.c and
// is similar to f2(), except it prints “this is f1\n”
f2();
return 0;
}
void f2(void) {
printf("this is f2\n");
}
