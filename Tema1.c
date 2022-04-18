#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0 || n==2)
        printf("Cifra se afla in multimea {0,2}");
    else
        printf("Cifra nu se afla in multime");
    return 0;

}
