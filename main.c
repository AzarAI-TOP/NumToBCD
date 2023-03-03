#include <stdio.h>
#include <math.h>

int main (void)
{
    long num;
    printf("Please input your number:");
    scanf("%ld", &num);

    printf("The BCD code of number %ld is ", num);

    // covert to BCD code
    long num_bcd = 0;
    int pos = 0;

    while (num / (int)pow(10, pos)){
        char a = num / (int)pow(10, pos) % 10;
        num_bcd |= a << (4*pos);

        pos++;
    }

    printf("0x%x\n", num_bcd);


    return 0;
}