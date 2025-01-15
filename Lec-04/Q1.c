#include<stdio.h>  //  header file  stdio-> standard input output
int main()
{
    // declaring a integer variable
    int num;
// taking the input from user
    scanf("%d",&num);
    // if -> num>=0 and num<=10 -> print -> " hello"
    if(num>=0 && num<=10)
    {
        printf("Hello");
    }
    else if(num>=11 && num<=19)
    {
        printf("Hello World");
    }
    else if(num>=20)
    {                                      // num>=0 and num<=10 -> print num, num>=11 and num<=20 print num*2
        printf("World Hello");
    }
    return 0;
}