#include <stdio.h>
#include <unistd.h>

void print_table_nultiplicate(int n);
int _putchar(char c);


void print_table_multiplicate(int n){
    int x;
    if(n < 0)
        return;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            x=i*j;
            printf("%d",x);
        }
        printf("\n");
    }

}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    print_table_multiplicate(3);
    return (0);
}
