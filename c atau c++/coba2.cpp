#include <stdio.h>
#include <conio.h>

main()
{
    char nm1[50];
    char nm2[50];

    puts("Masukakan nama pertama ="); gets(nm1);
    printf("Masukkan nama kedua ="); scanf("%s",&nm2);


    printf("\n\n");
    puts("Selamat datang"); puts(nm1);
    printf("selamat datang %s",nm2);
}