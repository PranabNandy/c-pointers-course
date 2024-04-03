#include <stdio.h>
void main() {
    char *cptr="PRANAB-NANDY";
    char c_arr[]="pranab-nandy";
    printf("sizeof(cptr):%lu  sizeof(c_arr):%lu\n",
                              sizeof(cptr),sizeof(c_arr));


    int arr[]={11,12,13,44,55,66};
    int *ptr;
    ptr=arr;
    printf("sizeof(ptr):%lu  sizeof(arr):%lu\n",
                              sizeof(ptr),sizeof(arr));

    arr=ptr; // error
    cptr=c_arr; // ok
    c_arr=cptr; // error
    cptr[10]='$'; //ok
    printf("cptr=%s cptr=%p *cptr=%c \n",cptr,cptr,*(cptr+10));

}
