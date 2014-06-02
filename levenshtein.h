#ifndef INCLUDE_LEVENSTEIN_H
#define INCLUDE_LEVENSTEIN_H 1

#include <stddef.h>

#ifndef bool
typedef enum { false, true } bool;
#endif

extern unsigned int levenshtein_with_costs(
      const char *src, const char *dst,
      int cost_ins, int cost_del, int cost_subst);

extern unsigned int levenshtein(
		const char *src, const char *dst);

extern unsigned int levenshtein_less_equal_with_costs(
      const char *src, const char *dst,
      int cost_ins, int cost_del, int cost_subst,
      unsigned int max_dist);

extern unsigned int levenshtein_less_equal(
		const char *src, const char *dst,
		unsigned int max_dist);

#endif /* INCLUDE_LEVENSTEIN_H */
