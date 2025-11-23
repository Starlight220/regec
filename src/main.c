#include <stdio.h>
#include <string.h>

#include "regec/stringop.h"
#include "regec/regec.h"

int main(int argc, char **argv) {
    regec_str_t pattern = regec_str_from_nulstr("abc");
    regec_str_t text = regec_str_from_nulstr("defabcdef");
    regec_str_t result = regec_str_empty();

    printf("Hello regec!\n");
    if (regec_match(&pattern, &text, &result)) {
	printf("Returned true!\n");
    }
    return 0;
}

int regec_match(regec_str_t *pattern, regec_str_t *text, regec_str_t *result) {
    int pattern_length, text_length, result_length;
    pattern_length = pattern->end - pattern->start;
    text_length = text->end - text->start;
    result_length = result->end - result->start;
    printf("Pattern: %d, Text: %d, Result: %d\n", pattern_length, text_length, result_length);
    return 0;
}
