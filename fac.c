#include <stdio.h>
/*
 * Факториал
   Факториалом натурального числа N называют произведение всех натуральных чисел от 1 до N включительно.
   Факториал обозначают значком ! после числа.
   Например:
   3!=1⋅2⋅3 -- факториал трёх
   5!=1⋅2⋅3⋅4⋅5 -- факториал пяти
 */

int main() {
    int k = 10, i, a = 1;

    for(i = 1; i <= k; i++)
    {
        a *= i;
        if(i != 10) { printf("%-1i! = %7i\n", i, a);}
        else { printf("%-1i!= %7i\n", i, a); }
    }

    printf("\n");
    return 0;
}