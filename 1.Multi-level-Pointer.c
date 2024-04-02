#include <stdio.h>
void main() {
    int i=0xFF;
    char c='A';
    char *cptr;
    int x;
    cptr=&c;
    x= i & cptr; // error
    x= i & & c;  // error
    x= i && c;  //  ok - logical AND
    x= i & (int)&c; // ok
    x = i * cptr; // error
    x = i ** cptr; //ok
    printf("x= i & cptr; --> %x\n",x);
    printf("cptr=%p\n",cptr);
    printf("cptr=0x%llx\n",(long long unsigned int)cptr);
}
