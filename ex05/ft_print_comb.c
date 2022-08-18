// 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, ...

#include <unistd.h>
//#include <stdio.h>

void ft_print_comb(void);

int ft_print(int a, int b, int c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);

    if (a != 7){
        write(1, ',', 1);
        write(1, ' ', 1);
    }
}

void ft_print_comb(void)
{
    int num1;
    int num2;
    int num3;
    int comb;

    for (num1=0;num1<=9;num1++){
        for (num2=num1+1;num2<=9;num2++){
            for (num3=num2+1;num3<=9;num3++){
                //comb = num1 + num2 + num3;
                //printf("%d, ", comb);
                //printf("%d%d%d\n", num1, num2, num3);
                ft_print(num1, num2, num3);
            }
        }
    }
}

int main(){
    ft_print_comb();
    return 0;
}