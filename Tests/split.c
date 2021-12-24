#include <libft.h>
#include <criterion/criterion.h>

static int	number_of_pointers(char *s, char c)
{
	int		n_pointers;

	n_pointers = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*(s + 1) != c && *(s + 1) != 0)
		{
			n_pointers += 1;
			s += (ft_strchr(s, c) - s);
		}
		s++;
	}
	return (n_pointers);
}

Test(number_of_pointers, expected_3) {
	cr_assert(number_of_pointers("   gab virto ssale   ", ' ') == 3,
			"Wrong number_of_pointers_3\n");
}

Test(number_of_pointers, expected_0) {
	cr_assert(number_of_pointers("                     ", ' ') == 0,
			"Wrong number_of_pointers_0\n");
}
