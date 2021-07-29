#include <stdio.h>

int a;//unintialized global variable(bss)
int b=10;//initialized global variable(data)

int add(int x, int y)
{
    int sum =0;//local variable
    sum =x+y;
    return sum;

}
int main()
{
    int c = 5;
    add(2,4);
    return 0;
}