#include <libft.h>
#include <stdlib.h>
#include <criterion/criterion.h>

Test(ft_memset, test_array_with_4_chars_equal_a_and_expected_a_array_with_4_chars_b) {
	char	*array;

	array = (char *)calloc(sizeof(char), 4);
	for (int i = 0; i < 4; i++) {
		array[i] = 'a';
	}
	array = ft_memset(array, 'b', 4);
	cr_assert_eq('b', array[0]);
	cr_assert_eq('b', array[1]);
	cr_assert_eq('b', array[2]);
	cr_assert_eq('b', array[3]);
	free(array);

}

Test(ft_memset, test_array_with_80_bytes_expected_array_only_with_0) {

	char	array[80];

	for (int i = 0; i < 80; i++) {
		array[i] = 'a';
	}
	ft_memset(array , '\0', sizeof(array));
	for (int i = 0; i < 80; i++) {
		cr_assert('\0' == array[i], "Wrong memset in position: %d\n", i);
	}
}

Test(ft_memset, test_array_with_10_random_number_expected_letter_a) {
	char	array[10];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	array[5] = 6;
	array[6] = 7;
	array[7] = 8;
	array[8] = 9;
	array[9] = 10;
	ft_memset(array, 'a', sizeof(array));
	cr_assert(97 == array[0], "Wrong value on position%d\n", 0);
	cr_assert(97 == array[1], "Wrong value on position%d\n", 1);
	cr_assert(97 == array[2], "Wrong value on position%d\n", 2);
	cr_assert(97 == array[3], "Wrong value on position%d\n", 3);
	cr_assert(97 == array[4], "Wrong value on position%d\n", 4);
	cr_assert(97 == array[5], "Wrong value on position%d\n", 5);
	cr_assert(97 == array[6], "Wrong value on position%d\n", 6);
	cr_assert(97 == array[7], "Wrong value on position%d\n", 7);
	cr_assert(97 == array[8], "Wrong value on position%d\n", 8);
	cr_assert(97 == array[9], "Wrong value on position%d\n", 9);
}
