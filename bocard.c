#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include <gmp.h>


int main(int argc, const char **argv) {
	char str[100];
	uint64_t n, maxn;
	if(argc > 1)
		maxn=atoll(argv[1]);
	else
		maxn=1000;
	mpz_t fac;
	mpz_t fac_plus;
	mpz_init_set_ui(fac, 1UL);
	mpz_init_set_ui(fac_plus, 1UL);
	for(n = 2; n < maxn; n++) {
//		fac *= n;
		mpz_mul_ui(fac, fac, n);
//		fac_plus = fac + 1;
		mpz_add_ui(fac_plus, fac, 1UL);
		if(mpz_perfect_square_p(fac_plus))
			printf("found %" PRIu64 "\n", n);
		else if(0){
			mpz_get_str(str, 10, fac_plus);
			printf("n=1: n!+1=%s\n", str);
		}
	}
	printf("last checked n=%" PRIu64 "\n", n);
	return 0;
}
