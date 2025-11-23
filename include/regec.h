
#ifndef REGEC_REGEC_H
#define REGEC_REGEC_H

typedef struct {
    const char *start;
    const char *end;
} str_t;

/**
 * Match the given pattern against the given text.
 *
 * @param[in] pattern the pattern
 * @param[in] text to match against
 * @result[out] result struct
 * @return 0 on success.
 */
int match(str_t *pattern, str_t *text, str_t *result);

#endif // REGEC_REGEC_H
