int	ft_recursive_power(int nb, int power)
{
	int y;

	if(power < 0)
	{
		return (0);
	}
	if(power == 0)
	{
		return (1);
	}
	if(power == 1)
	{
		return (nb);
	}
	y = ft_recursive_power(nb, power / 2);
	return (y * y * ft_recursive_power(nb, power % 2)); // Good Approch and will conver the odd power to odd and even.
}
