/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main()
{    
    
    int x;
    printf("Introduza um numero de 1 a 9:");
    scanf("%d" ,&x);
    for(int i=1;i<11;i++){
        printf("%d*d%d=&d\n" ,x,i,x*i);
    }
    return 0;
}
