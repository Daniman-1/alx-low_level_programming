#include <stdio.h>

int is_palindrome(int num) {
    int rev = 0;
    int temp = num;
    
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    
    return (num == rev);
}

int main() {
    int largest_palindrome = 0;
    
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    
    printf("%d\n", largest_palindrome);
    
    return 0;
}
