// Example of function pointer or callback
#include <stdio.h>
void fun1(int a){
    printf("fun1 : a = %d\n",a);
}
void fun2(int b){
    printf("fun2 : b = %d\n",b);
}
// defines a new function type fun_ptr
typedef void (*fun_ptr)(int);
int main() {
    fun_ptr fptr;
    fptr=fun1;
    fptr(10);

    fptr=&fun2;
    fptr(22);
    return 0;
}
