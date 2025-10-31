#include <stdio.h>

int main() {
    double salary, new_salary, reajuste;
    int percent;

    scanf("%lf", &salary);

    if (salary <= 400.00) percent = 15;
    else if (salary <= 800.00) percent = 12;
    else if (salary <= 1200.00) percent = 10;
    else if (salary <= 2000.00) percent = 7;
    else percent = 4;

    reajuste = salary * percent / 100.0;
    new_salary = salary + reajuste;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percent);

    return 0;
}
