int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb) 
{ 
	if (nb == 0) 
		return (1);
  	else if (nb < 0)
      return (0);
	return (nb * factorial(nb - 1)); 
}
