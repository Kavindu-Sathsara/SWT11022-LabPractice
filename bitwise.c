#include <stdio.h>
int main(){
    int x = 12;
    int y = 6;

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;
    int notResult = ~x;
    int leftShift = x << 2;
    int rightShift = x >> 1;

    printf("AND Result: %d\n", andResult);
    printf("Or Result: %d\n", orResult);
    printf("XOR Result: %d\n", xorResult);
    printf("NOT Result: %d\n", notResult);
    printf("Left Result: %d\n", leftShift);
    printf("Right Result: %d\n", rightShift);

    return 0;

}
