#include <stdio.h>

int main(){
    int i;
    printf("Enter a value: ");
    scanf("%d", &i);
    if(i > 5) {
        printf("Greater than 5!");
    } else {
        printf("Less than or equal to 5");
    }
    return 0;
}
