#ifndef REGEC_STRINGOP_H
#define REGEC_STRINGOP_H

#include "regec/string.h"

/**
 * Create a regec_str_t from a NUL-delimited string.
 *
 * NOTE: the returned regec_str_t points to the original string!
 *
 */
regec_str_t regec_str_from_nulstr(const char *nulstr);

/**
 * Create an empty regec_str_t.
 */
regec_str_t regec_str_empty(void);

#endif // REGEC_STRINGOP_H
