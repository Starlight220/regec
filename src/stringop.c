
#include "regec/stringop.h"

#include <string.h>

regec_str_t regec_str_from_nulstr(const char *nulstr) {
    regec_str_t str = { .start = nulstr, .end = nulstr + strlen(nulstr) };
    return str;
}

regec_str_t regec_str_empty(void) {
    regec_str_t str = { .start = NULL, .end = NULL };
    return str;
}
