
#include <unistd.h>

int ft_putchar(char c) 
{
  write(1, &c, 1);
  return(0);
}

void ft_function()
{
  char i = 'z';
  while (i >= 'a')
    {
		ft_putchar(i);
      	i--;
    }
}

int main() 
{
  ft_function();
  return(0);
}
