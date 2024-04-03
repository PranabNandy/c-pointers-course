#include<stdio.h>
#include "math_lib.h"

void add(int op1,int op2){
    printf("addition is : %d\n",op1+op2);
}
void div(int op1,int op2){
    printf("division is : %d\n",op1/op2);
}

typedef void (*fun_ptr)(int ,int);
fun_ptr fptr[2]={add,div};

void execute_operation(int operation,int op1,int op2){
    fptr[operation](op1,op2);
}
