/*  Address of each array element or variable in memory is printed using &arrayName[index].If we use %d output will be in decimal and %p will print output in hexaDecimal.
baseAddress=arr[0]
  */ 
#include <stdio.h>
int main(){
    int arr[10];
    for(int i = 0; i<10;i++){
    printf("Address of arr[%d] is %d\n",i, &arr[i]);    //%p will return address in hexadecimal and %d in decimal
    }
    return 0;
}