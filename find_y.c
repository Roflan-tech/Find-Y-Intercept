#include <stdio.h>
#include <math.h>

void input(double * number)
{
    do
    {
        scanf("%lf", number);
    } while (*number == '\t' || *number == '\n' || *number == '\v');
}

void calculate(double * v_x, double * v_y, double * m_x, double * m_y, double * r)
{
    double m = (*v_y / *v_x) * *r;
    printf("M: %lf\n", m);
    printf("B: %lf\n", *m_y - (*m_x * m));
}

    int main()
{
    double variance_y = 0, variance_x = 0, mean_y = 0, mean_x = 0, r = 0;
    printf("Enter r: ");
    input(&r);
    printf("Enter mean X: ");
    input(&mean_x);
    printf("Enter mean Y: ");
    input(&mean_y);
    printf("Enter variance of X: ");
    input(&variance_x);
    printf("Enter variance of Y: ");
    input(&variance_y);
    
}