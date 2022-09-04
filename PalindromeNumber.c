//program to check a number is palindrome or not
#include<stdio.h>

int main(){
    int num,reversed = 0,rem,original;
    printf("Enter an number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0){
        rem = num  % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }
    if(original == reversed)
        printf("%d is a palindrome number",original);
    else
        printf("%d is not a palindrome number",original);
    return 0;
}