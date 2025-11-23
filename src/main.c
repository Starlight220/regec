#include <stdio.h>
#include <string.h>

#include "regec.h"

int main(int argc, char **argv) {
    char pattern_str[] = "abc";
    char text_str[] = "defabcdef";
    str_t pattern = { .start = pattern_str, .end = pattern_str + strlen(pattern_str) };
    str_t text = { .start = text_str, .end = text_str + strlen(text_str) };
    str_t result = { .start = NULL, .end = NULL };

    printf("Hello regec!\n");
    if (match(&pattern, &text, &result)) {
	printf("Returned true!\n");
    }
    return 0;
}

int match(str_t *pattern, str_t *text, str_t *result) {
    int pattern_length, text_length, result_length;
    pattern_length = pattern->end - pattern->start;
    text_length = text->end - text->start;
    result_length = result->end - result->start;
    printf("Pattern: %d, Text: %d, Result: %d\n", pattern_length, text_length, result_length);
    return 0;
}
