//WAP to print all the ASCII values and their equivalent characters of 26 alphabets of both upperCase & lowerCase using while loop.
#include <stdio.h>
int main(){
    for(int i = 65; i<= 90; i++){
        char upperCase = (char)i;   //typecasting   int->char
        printf("The ASCII value of \"%c\" is %d\n",upperCase,i);
    }

    for(int j = 97; j<=122; j++){
        char lowerCase = (char)j; //typeCasting
        printf("The ASCII value of \"%c\" is %d\n", lowerCase,j);
    }
    return 0;
}