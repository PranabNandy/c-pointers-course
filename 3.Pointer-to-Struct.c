#include <stdio.h>
struct main
{
    long long int a;
    float b;
    char c;
    struct main *next;
};
void main() {
    struct main var;
    struct main *p_var;
    p_var=&var;
    /* There are 3 different ways */
    var.a=100;
    (*p_var).b=200.0;
    p_var->c='P';
    printf("No Error ==> 'struct main' and 'main()' \n");

}
