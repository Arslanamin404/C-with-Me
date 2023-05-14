#include <stdio.h>
int main(){
    char arr[] = {'H', 'e','l', 'l', 'o',' ', 'W', 'o','r', 'l', 'd',  '\0'};
    // null or '\0' is used to terminate charters array.

    int i =0;
    while(arr[i] != '\0'){
        printf("%c ", arr[i]);
        i++;
    }
    
    return 0;
}