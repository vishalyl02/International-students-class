#include<stdio.h>  //  header file  stdio-> standard input output
int main()
{
    // declaring a integer variable
    int num;
// taking the input from user
    scanf("%d",&num);
    // if -> num>=0 and num<=10 -> print -> " hello"
    if(num>=0 && num<=15)
    {
        printf("%d",num-10);
    }
    else if(num>=16 && num<=30)
    {
        printf("%d",num-15);
    }
    else if(num>=100 || num<=-1000)
    {                                      // num>=0 and num<=10 -> print num, num>=11 and num<=20 print num*2
        printf("%d",num*2);
    }
    return 0;
}