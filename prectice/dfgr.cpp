
#include<stdio.h>
#include <conio.h>

 void  main()
 {
    int i;
    clrscr();
    for( i = 0; i < 10; i++)
    printf("clrscr function test\n");
    printf("\n\nPress any key to clear screen");
    getch();

    clrscr();
    printf("The screen has been cleared!");
    getch();
 }
