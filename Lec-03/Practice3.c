#include<stdio.h>


int main()
{

int first=20,second=10;

int third=first-second+second-first;
char alp='*';

printf("%d %c %d\n",third,alp,second);
printf("%c %d %c\n",'A',36-180,alp);

return 0;


}






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
