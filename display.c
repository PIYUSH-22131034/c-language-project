#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    if (m > 0) {
        n = 1;  
	printf("m is larger than 0");
    } else if (m == 0) {
        n = 0;  
	printf("m is equal to zero");
    } else {
        n = -1; 
	printf("m is less than zero");
    }

    printf("The value of n is: %d\n", n);

    return 0;
}

