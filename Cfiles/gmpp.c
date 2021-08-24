#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>
#include <mpfr.h>

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

char *fibonacci(unsigned long term, unsigned long precision)
{
    mpfr_t phi, sqrt5, a, b, num;
    mpz_t result;
    mpz_init(result);
    mpfr_inits2(precision, phi, sqrt5, a, b, num, NULL);
    mpfr_set_str(phi, "1.61803398874989484820458683436563811772030917980576286213544862270526046281890", 10, 0);
    mpfr_set_str(sqrt5, "2.2360679774997896964091736687312762354406183596115257242708972454105209256378", 10, 0);

    mpfr_pow_ui(a, phi, term, 0);
    mpfr_ui_sub(num, 1, phi, 0); // num temporarily becomes 1 - phi
    mpfr_pow_ui(b, num, term, 0);

    mpfr_sub(num, a, b, 0);
    mpfr_div(num, num, sqrt5, 0);

    mpfr_get_z(result, num, -1);

    char *str = malloc(sizeof(char) * mpz_sizeinbase(result, 10));
    mpz_get_str(str, 10, result);

    mpfr_clears(phi, sqrt5, a, b, num, NULL);
    mpz_clear(result);
    mpfr_free_cache();

    return str;
}
