#include <libft.h>
#include <signal.h>
#include <criterion/criterion.h>

static void	destroy(char **result)
{
	char	**tmp;

	tmp = result;
	while (*tmp != NULL)
	{
		free(*tmp);
		tmp++;
	}
}

static int	number_of_pointers(const char *tmp, char c)
{
	int		n_pointers;

	n_pointers = 0;
	while (tmp != NULL && *tmp != '\0')
	{
		if (*(tmp) != c && *(tmp) != '\0')
		{
			n_pointers += 1;
			tmp += (ft_strchr(tmp, c) - tmp);
		}
		if (tmp != NULL)
			tmp += 1;
	}
	return (n_pointers);
}

Test(number_of_pointers, expected_3) {
	cr_assert(number_of_pointers("gab virto ssale   ", ' ') == 3,
			"Wrong number_of_pointers_3\n");
}

Test(number_of_pointers, expected_0) {
	cr_assert(number_of_pointers("                     ", ' ') == 0,
			"Wrong number_of_pointers_0\n");
}

Test(number_of_pointers, expected_13) {
	cr_assert(number_of_pointers("has cc hd c kc ckdc ucy ctc 9c 0c 1c ccc ", 'c') == 13);
}

Test(number_of_pointers, expected_8) {
	cr_assert(number_of_pointers("gabriel rsalesr r r tdsr   r234r", 'r') == 8);
}

Test(number_of_pointers, check_with_the_pointer_doesnt_change) {
	char	*tmp;
	char	*tmp_2;

	tmp = strdup("gabriel sales  ");
	tmp_2 = tmp;
	int np = number_of_pointers(tmp, ' ');
	cr_assert(tmp == tmp_2, "Adress are wrong, string was moved");
	cr_assert(np == 2);
	free(tmp);
}

Test(number_of_pointers, expected_1) {
	cr_assert(number_of_pointers("gabriels", 's') == 1);
}

Test(number_of_pointers, expected_no_sigsev) {
	cr_assert(number_of_pointers("gabriel vitor sales", ' ') == 3);
}

Test(split, expected_char_pp_with_three_strings)
{
	char	**result = ft_split("gabriel vitor sales", ' ');
	char	*expected[] = {"gabriel", "vitor", "sales", NULL};

	for (int i = 0; i < 3; i++) {
		cr_expect_str_eq(result[i], expected[i], "String error: %s\n", result[i]);
	}
	destroy(result);
	free(result);
}
