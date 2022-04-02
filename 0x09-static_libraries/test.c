#include <stdio.h>

void modify_my_char_var(char *cc, char ccc);

void modify_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
	printf("the value of ccc: %c\n", ccc);
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modify_my_char_var(p, c);
	printf("the value of c: %c\n", c);
	return (0);
}
