# regec
C Regex Implementation

## Design Goals
- Zero heap allocation
  - Strings will be accepted as a `const char *start, const char *end` pair, and only those ranges will be used.

## Roadmap

### v0.0.1
Substring match, equivalen to `strstr` (from `string.h`).
