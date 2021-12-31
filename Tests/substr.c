#include <libft.h>
#include <signal.h>
#include <criterion/criterion.h>


Test(substr, expected_str_in_first_parameter) {
	char	*str = ft_substr("Gabriel Vitor", 0, 42000);

	cr_assert_str_eq(str, "Gabriel Vitor");
}

Test(substr, expected_str_vitor) {
	char	*str = ft_substr("Gabriel Vitor", 8, 5);

	cr_assert_str_eq(str, "Vitor");
}

Test(substr, expected_empty_str) {
	char	*str = ft_substr("Gabriel", 100, 1);

	cr_assert_str_empty(str);
}
