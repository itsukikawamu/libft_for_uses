#define ft_ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define ft_ISalpha ft_ISbit(2)
