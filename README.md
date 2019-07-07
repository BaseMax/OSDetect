# OS (Operation System) Detect

A tiny header file for detects the operating system in C based program.

### Example

```c
#include <stdio.h>

const char *OS();

int main() {
	printf("==>%s\n", OS());
	return 0;
}
```

### Compile
```
gcc test.c source/osdetect.c -o test
```
