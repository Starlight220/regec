
#ifndef REGEC_REGEC_H
#define REGEC_REGEC_H

#include "regec/string.h"

/**
 * Match the given pattern against the given text.
 *
 * @param[in] pattern the pattern
 * @param[in] text to match against
 * @result[out] result struct
 * @return 0 on success.
 */
int regec_match(regec_str_t *pattern, regec_str_t *text, regec_str_t *result);

#endif // REGEC_REGEC_H
