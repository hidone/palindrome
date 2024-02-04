#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]){
    int left=0;
    int right=strlen(str)-1;
    while(right>left){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    if(isPalindrome(inputString)){
        printf("%s is a palindrome. \n", inputString);
    }else{
        printf("%s is not a palindrome . \n", inputString);
    }
    return 0;
}

