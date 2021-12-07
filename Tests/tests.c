#include <libft.h>
#include <Tests/minunit.h>
#include <stdlib.h>

MU_TEST(test_array_with_4_chars_equal_a_and_expected_a_array_with_4_chars_b)
{
	char	*array;

	array = (char *)calloc(sizeof(char), 4);
	for (int i = 0; i < 4; i++) {
		array[i] = 'a';
	}
	array = ft_memset(array, 'b', 4);
	mu_assert_int_eq('b', array[0]);
	mu_assert_int_eq('b', array[1]);
	mu_assert_int_eq('b', array[2]);
	mu_assert_int_eq('b', array[3]);
	free(array);
}

MU_TEST(test_array_with_80_bytes_expected_array_only_with_0)
{
	char	array[80];

	for (int i = 0; i < 80; i++) {
		array[i] = 'a';
	}
	ft_memset(array , '\0', sizeof(array));
	mu_assert_int_eq('\0', array[0]);
	mu_assert_int_eq('\0', array[1]);
	mu_assert_int_eq('\0', array[2]);
	mu_assert_int_eq('\0', array[3]);
	mu_assert_int_eq('\0', array[4]);
	mu_assert_int_eq('\0', array[5]);
	mu_assert_int_eq('\0', array[6]);
	mu_assert_int_eq('\0', array[7]);
	mu_assert_int_eq('\0', array[8]);
	mu_assert_int_eq('\0', array[9]);
	mu_assert_int_eq('\0', array[10]);
	mu_assert_int_eq('\0', array[11]);
	mu_assert_int_eq('\0', array[12]);
	mu_assert_int_eq('\0', array[13]);
	mu_assert_int_eq('\0', array[14]);
	mu_assert_int_eq('\0', array[15]);
	mu_assert_int_eq('\0', array[16]);
	mu_assert_int_eq('\0', array[17]);
	mu_assert_int_eq('\0', array[18]);
	mu_assert_int_eq('\0', array[19]);
	mu_assert_int_eq('\0', array[20]);
	mu_assert_int_eq('\0', array[21]);
	mu_assert_int_eq('\0', array[22]);
	mu_assert_int_eq('\0', array[23]);
	mu_assert_int_eq('\0', array[24]);
	mu_assert_int_eq('\0', array[25]);
	mu_assert_int_eq('\0', array[26]);
	mu_assert_int_eq('\0', array[27]);
	mu_assert_int_eq('\0', array[28]);
	mu_assert_int_eq('\0', array[29]);
	mu_assert_int_eq('\0', array[30]);
	mu_assert_int_eq('\0', array[31]);
	mu_assert_int_eq('\0', array[32]);
	mu_assert_int_eq('\0', array[33]);
	mu_assert_int_eq('\0', array[34]);
	mu_assert_int_eq('\0', array[35]);
	mu_assert_int_eq('\0', array[36]);
	mu_assert_int_eq('\0', array[37]);
	mu_assert_int_eq('\0', array[38]);
	mu_assert_int_eq('\0', array[39]);
	mu_assert_int_eq('\0', array[40]);
	mu_assert_int_eq('\0', array[41]);
	mu_assert_int_eq('\0', array[42]);
	mu_assert_int_eq('\0', array[43]);
	mu_assert_int_eq('\0', array[44]);
	mu_assert_int_eq('\0', array[45]);
	mu_assert_int_eq('\0', array[46]);
	mu_assert_int_eq('\0', array[47]);
	mu_assert_int_eq('\0', array[48]);
	mu_assert_int_eq('\0', array[49]);
	mu_assert_int_eq('\0', array[50]);
	mu_assert_int_eq('\0', array[51]);
	mu_assert_int_eq('\0', array[52]);
	mu_assert_int_eq('\0', array[53]);
	mu_assert_int_eq('\0', array[54]);
	mu_assert_int_eq('\0', array[55]);
	mu_assert_int_eq('\0', array[56]);
	mu_assert_int_eq('\0', array[57]);
	mu_assert_int_eq('\0', array[58]);
	mu_assert_int_eq('\0', array[59]);
	mu_assert_int_eq('\0', array[60]);
	mu_assert_int_eq('\0', array[61]);
	mu_assert_int_eq('\0', array[62]);
	mu_assert_int_eq('\0', array[63]);
	mu_assert_int_eq('\0', array[64]);
	mu_assert_int_eq('\0', array[65]);
	mu_assert_int_eq('\0', array[66]);
	mu_assert_int_eq('\0', array[67]);
	mu_assert_int_eq('\0', array[68]);
	mu_assert_int_eq('\0', array[69]);
	mu_assert_int_eq('\0', array[70]);
	mu_assert_int_eq('\0', array[71]);
	mu_assert_int_eq('\0', array[72]);
	mu_assert_int_eq('\0', array[73]);
	mu_assert_int_eq('\0', array[74]);
	mu_assert_int_eq('\0', array[75]);
	mu_assert_int_eq('\0', array[76]);
	mu_assert_int_eq('\0', array[77]);
	mu_assert_int_eq('\0', array[78]);
	mu_assert_int_eq('\0', array[79]);
}

MU_TEST(test_array_with_10_random_number_expected_letter_a)
{
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
	mu_assert_int_eq(97, array[0]);
	mu_assert_int_eq(97, array[1]);
	mu_assert_int_eq(97, array[2]);
	mu_assert_int_eq(97, array[3]);
	mu_assert_int_eq(97, array[4]);
	mu_assert_int_eq(97, array[5]);
	mu_assert_int_eq(97, array[6]);
	mu_assert_int_eq(97, array[7]);
	mu_assert_int_eq(97, array[8]);
	mu_assert_int_eq(97, array[9]);
}

MU_TEST_SUITE(suite_ft_memset)
{
	MU_RUN_TEST(test_array_with_4_chars_equal_a_and_expected_a_array_with_4_chars_b);
	MU_RUN_TEST(test_array_with_80_bytes_expected_array_only_with_0);
	MU_RUN_TEST(test_array_with_10_random_number_expected_letter_a);
}

int	main(int argc, char *argv[])
{
	MU_RUN_SUITE(suite_ft_memset);
	MU_REPORT();
	return MU_EXIT_CODE;
}
