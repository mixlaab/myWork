#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arroz = 10;
    printf("Name \t Value \t\t Address \n");
    printf("%s \t %d \t\t %p\n", "arroz", arroz, &arroz);
    int * pArroz = &arroz;
    printf("%s \t %p  %p\n", "pArroz", pArroz, &pArroz);
    * pArroz = 42;
    printf("%s \t %d \t\t %p\n", "arroz", arroz, &arroz);
    printf("%s \t %p  %p\n", "pArroz", pArroz, &pArroz);
    arroz = 36;
    printf("%s \t %d \t\t %p\n", "arroz", arroz, &arroz);
    printf("%s \t %p  %p\n", "pArroz", pArroz, &pArroz);
    return 0;
}
