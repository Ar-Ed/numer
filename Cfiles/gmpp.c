#include <gmp.h>
#include <stdlib.h>
#include <stdio.h>

void pfib(unsigned long long term_count)
{

    mpz_t a, b, temp;
    mpz_init(a);
    mpz_init(temp);
    mpz_init_set_si(b, 1);

    for (unsigned long long i = 1; i < term_count; i++)
    {
        gmp_printf("\n%llu'th term is : %Zd", i, a);

        mpz_add(temp, a, b);
        mpz_set(a, b);
        mpz_set(b, temp);
    }

    gmp_printf("\n%llu'th term is : %Zd\n", term_count, a);

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(temp);
}

char *factorial(unsigned long term)
{
    mpz_t result;
    mpz_init_set_si(result, 1);

    for (unsigned long i = 1; i < term; i++)
    {
        mpz_mul_ui(result, result, i);
    }

    char *str = malloc(sizeof(char) * mpz_sizeinbase(result, 10));
    mpz_get_str(str, 10, result);

    mpz_clear(result);

    return str;
}
