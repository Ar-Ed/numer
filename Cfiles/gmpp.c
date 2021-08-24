#include <gmp.h>
#include <stdio.h>

void pfib(unsigned long long term_count){

    mpz_t a, b, temp;
    mpz_init(a);
    mpz_init(temp);
    mpz_init_set_si(b, 1);

    for(unsigned long long i = 1; i < term_count; i++){

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
