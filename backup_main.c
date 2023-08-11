#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst[9];
	const char	*src = "Freedom";
	const char	*src2 = "Frddom";
        const char      *big = "Is that a gun in your pocket?";
        const char      *little = "gun";
	const char	*empty = "";
	const char	*atoi_str = " 	--1542.0";
        char dst3[12] = "Test_";
        const char *src3 = "phrase.Shouldn't appear";
	int	result;

	printf("\n\nMEMCMP\n\n");
	char s2[] = {0, 0, 127, 0};
	char s3[] = {};
	printf("%i\n", ft_memcmp(s2, s3, 4));
	char s4[] = {-128, 0, 127, 0};
	printf("%i\n", ft_memcmp(s4, s2, 1));

	printf("\n\nSPLIT\n\n");

	printf("\n\nITOA\n\n");
	int	itoa = -123;
	printf("%s\n", ft_itoa(itoa));

/*
	printf("\n\nBZERO\n\n");
	const char	*bzero_str = "Freedom";
	bzero(bzero_str, 2);
	printf("%c%c%c\n", bzero_str[0], bzero_str[1], bzero_str[2]);
*/
	printf("\n\nSTRDUP\n\n");
	printf("Original: %s\nCopy: %s\n", strdup(src), ft_strdup(src));
	printf("Original: %s\nCopy: %s\n", strdup(empty), ft_strdup(empty));

	printf("\n\nATOI\n\n");
	printf("%i\n", ft_atoi(atoi_str));
	
	printf("\n\nMEMMOVE\n\n");
	printf("%s\n", (char *)ft_memmove(dst, src2, 5));

	printf("\n\nTOUPPER\n\n");
	printf("%c\n", ft_toupper('a'));

	printf("\n\nSTRLCAT\n\n");
        result = ft_strlcat(dst3, src3, 3);
        printf("%s\n", dst3);
        result = ft_strlcat(dst3, src3, 11);
        printf("%s\n", dst3);
        printf("returns (28):%d\n", result);
        //printf("%c\n (last letter)", dst3[sizeof(dst3) - 1]);

	printf("\n\nSTRLCPY\n\n");
	printf("dst before: %s\n", dst);
	printf("src: %s\n", src);
	printf("Return length of src: %li\n", ft_strlcpy(dst, src, 13));
	printf("dst after: %s\n", dst);
	ft_strlcpy(dst, src, 2);
	printf("strlcpy n byte: %s\n", dst);
	

	printf("\n\nISALPHA\n\n not alpha returns 0: ");
	printf("%d ", ft_isalpha('@'));
	printf("%d ", ft_isalpha('['));
	printf("%d ", ft_isalpha(96));
	printf("%d ", ft_isalpha('{'));
	printf("\nalpha returns 1: %d ", ft_isalpha('A'));
	printf("%d ", ft_isalpha('Z'));
	printf("%d ", ft_isalpha('a'));
	printf("%d ", ft_isalpha('z'));

	printf("\n\nISDIGIT\n\n not a digit returns 0: ");
	printf("%d ", ft_isdigit('/'));
	printf("%d ", ft_isdigit(':'));
	printf("\ndigits return 1: ");
	printf("%d ", ft_isdigit('0'));
	printf("%d ", ft_isdigit('9'));

	printf("\n\nISALNUM\n\n");
	printf("not alnum returns 0: ");
	printf("%d ", ft_isalnum('@'));
	printf("%d ", ft_isalnum('['));
	printf("%d ", ft_isalnum(96));
	printf("%d ", ft_isalnum('{'));
	printf("%d ", ft_isalnum('/'));
	printf("%d ", ft_isalnum(':'));

	printf("\nalnum returns 1: ");
	printf("%d ", ft_isalnum('Z'));
	printf("%d ", ft_isalnum('a'));
	printf("%d ", ft_isalnum('z'));
	printf("%d ", ft_isalnum('0'));
	printf("%d ", ft_isalnum('9'));

	printf("\n\nISASCII\n\n");
	printf("\nascii returns 1: ");
	printf("%d ", ft_isascii(1));
	printf("%d ", ft_isascii(127));
	printf("\nnot ascii returns 0: ");
	printf("%d ", ft_isascii(-1));
	printf("%d ", ft_isascii(128));

	printf("\n\nISPRINT\n\n");
	printf("\nprintable returns 1: ");
	printf("%d ", ft_isprint(' '));
	printf("%d ", ft_isprint('~'));
	printf("\nnot printable returns 0: ");
	printf("%d ", ft_isprint(' ' - 1));
	printf("%d ", ft_isprint('~' + 1));

	printf("\n\nSTRLEN\n\n");
	printf("Input: %s\n", src); 
	printf("Return str length (7): %zu\n", ft_strlen(src));
	printf("%zu\n", ft_strlen(dst));

	printf("\n\nSTRCHR\n\n");
	printf("String: %s\n", src);
	printf("Searching %c\n", 'e');
	printf("returns: %s\n", ft_strchr(src, 'e'));
	printf("returns \\0: %s\n", ft_strchr(src, '\0'));
	printf("Needs to return null: %s\n", ft_strchr(src, 'a'));

	printf("\n\nSTRRCHR\n\n");
	printf("to return edom: %s\n", ft_strrchr(src, 'e'));
	printf("to return Freedom: %s\n", ft_strrchr(src, 'F'));
	printf("to return \\0: %s\n", ft_strrchr(src, '\0'));
	printf("to return \\0: %s\n", ft_strrchr(empty, '\0'));
	

	printf("\n\nSTRNCMP\n\n");
	printf("return 1: %i\n", ft_strncmp(src, src2, 3));
	printf("returns 0: %i\n", ft_strncmp(src, src2, 2));
	printf("returns 1: %i\n", ft_strncmp(src, src2, -1));
	printf("returns 0: %i\n", ft_strncmp(empty, empty, 42));
	printf("returns 0: %i\n", ft_strncmp(empty, src2, 0));
	printf("returns 0: %i\n", ft_strncmp(src, empty, 0));
	printf("returns -69: %i\n", ft_strncmp(empty, src2, 2));
	printf("returns 69: %i\n", ft_strncmp(src, empty, 2));

	printf("\n\nSTRNSTR\n\n");
	printf("Big String:\n\t%s\nSmall String:\n\t%s\n", big, little);
        printf("Point to small in big:\n\t%s\n", ft_strnstr(big, little, 15));
        printf("Search first 12 chars:\n\t%s\n", ft_strnstr(big, little, 12));
        printf("Empty little returns big:\n\t%s\n", ft_strnstr(big, empty, 12));
	return (0);
}
