int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power) 
{
	int sum = 0;
	if (power == 0) 
		return (1);
	else if (power < 0) 
		return (0);
	
	while (power > 1) 
	{
		sum = nb * power;
		power--;
	}
	return (sum);
}

