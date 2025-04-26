/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:24:36 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 14:58:28 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (p1[i] != 0x00 && p2[i] != 0x00 && p1[i] == p2[i] && i < n)
		i++;
	return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_memcmp(const char *s1, const char *s2) {
	size_t size;
	if (sizeof(s1) < sizeof(s2))
		size = sizeof(s1);
	else
		size = sizeof(s2);
    int expected = memcmp(s1, s2, size);
    int actual = ft_memcmp(s1, s2, size);
    if ((expected == 0 && actual == 0) || (expected < 0 && actual < 0) 
		|| (expected > 0 && actual > 0)) {
        printf("OK : \"%s\" vs \"%s\"\n", s1, s2);
    } else {
        printf("NG : \"%s\" vs \"%s\"\n", s1, s2);
        printf("Expected: %d, Actual: %d\n", expected, actual);
        assert(0);
    }
}

int main(void) {
    test_ft_memcmp("abc", "abc");

    test_ft_memcmp("abc", "xbc");

    test_ft_memcmp("abcdef", "abcxef");

    test_ft_memcmp("abc", "abcdef");
    test_ft_memcmp("abcdef", "abc");

    test_ft_memcmp("", "");

    test_ft_memcmp("", "abc");
    test_ft_memcmp("abc", "");

    test_ft_memcmp("ABC", "abc");
    test_ft_memcmp("abc", "ABC");

    test_ft_memcmp("abc!", "abc?");
    test_ft_memcmp("abc ", "abc!");

    test_ft_memcmp("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
					"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    test_ft_memcmp("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
					"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");

    printf("all test passed\n");
    return 0;
}
*/