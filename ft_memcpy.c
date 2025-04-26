/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:42:29 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 11:53:48 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}


#include <stdio.h>
#include <assert.h>

int main(void)
{
    char src1[] = "hello";
    char dst1[6] = {0};
    assert(ft_memcpy(dst1, src1, 6) == dst1);
    for (int i = 0; i < 6; i++)
        assert(dst1[i] == src1[i]);

    char src2[] = "abc";
    char dst2[] = "xxx";
    assert(ft_memcpy(dst2, src2, 0) == dst2);
    assert(dst2[0] == 'x' && dst2[1] == 'x' && dst2[2] == 'x'); // 変わらない

    // 3. 部分コピー
    char src3[] = "world";
    char dst3[] = "XXXXX";
    assert(ft_memcpy(dst3, src3, 3) == dst3);
    assert(dst3[0] == 'w');
    assert(dst3[1] == 'o');
    assert(dst3[2] == 'r');
    assert(dst3[3] == 'X');
    assert(dst3[4] == 'X');

    // 4. 同じ配列内コピー（近い領域）
    // memcpyは領域が重なっている場合、正しい動作は保証されない
    // これはあくまで動作確認だけ（memmoveなら保証される）
    char buf4[] = "ABCDE";
    ft_memcpy(buf4 + 1, buf4, 4);
    // 期待できないけど、一応動くか見る
    // ただし標準では未定義動作なのであまり真剣にチェックしない

    // 5. 長いデータ
    char src5[100];
    char dst5[100];
    for (int i = 0; i < 100; i++)
        src5[i] = (char)(i % 128);
    assert(ft_memcpy(dst5, src5, 100) == dst5);
    for (int i = 0; i < 100; i++)
        assert(dst5[i] == src5[i]);

    printf("all tests passed\n");
    return 0;
}
