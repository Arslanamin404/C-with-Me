#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter Num1: ");
    scanf("%d", &num1);

    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("Enter Num3: ");
    scanf("%d", &num3);

    printf("Enter Num4: ");
    scanf("%d", &num4);

    // try to make flow chart or rough sketch of code on notebook.
    if (num1 > num2 && num1 > num3 && num1 > num4){
        printf("%d is largest number",num1);
    }
    else if(num2 > num3 && num2 > num4 && num2 > num1){
        printf("%d is largest number",num2);
    }
    else if(num3 > num4 && num3 > num1 && num3 > num2){
        printf("%d is largest number",num3);
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3){
        printf("%d is largest number",num4);
    }
        return 0;
}
