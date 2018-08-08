/*
** 108trigo.c for 108trigo in /home/VSridhar78/108trigo
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Wed Mar 15 09:27:23 2017 Sridhar Vengadesan
** Last update Wed Mar 15 10:01:21 2017 Sridhar Vengadesan
*/

#include <stdio.h>
#include <unistd.h>

int	calc(char **av)
{
  printf("OK\n");
  return (0);
}

int	check_function(char *av)
{
  if (av[0] == 'C' && av[1] == 'O' && av[2] == 'S' && av[3] == '\0')
    return (0);
  else if (av[0] == 'S' && av[1] == 'I' && av[2] == 'N' && av[3] == '\0')
    return (0);
  else if (av[0] == 'E' && av[1] == 'X' && av[2] == 'P' && av[3] == '\0')
    return (0);
  else if (av[0] == 'C' && av[1] == 'O' && av[2] == 'S' && av[3] == 'H' && av[4] == '\0')
    return (0);
  else if (av[0] == 'S' && av[1] == 'I' && av[2] == 'N' && av[3] == 'H' && av[4] == '\0')
    return (0);
  else
    return (1);
}

int	check_argv(int ac, char **av)
{
  int	i;
  int	x;

  i = 2;
  x = 0;
  while (i != ac)
    {
      while (av[i][x] != '\0')
	{
	  if (av[i][x] > 57 || av[i][x] < 48)
	    return (1);
	  x++;
	}
      x = 0;
      i++;
    }
  return (0);
}

void	display()
{
  printf("USAGE\n");
  printf("\t./108trigo fun a0 a1 a2....\n");
  printf("DESCRIPTION\n");
  printf("\tfun  function to be applied, among at least EXP, COS, SIN, COSH and SINH\n");
  printf("\tai   coeficients of the matri\n");
}

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      if (av[1][0] == '-' && av[1][1] == 'h')
	display();
      else if (ac >= 3)
	{
	  if ((check_function(av[1])) == 0)
	    {
	      if ((check_argv(ac, av)) == 0)
		calc(av);
	      else
		return (84);
	    }
	  else
	    return (84);
	}
      else
	return (84);
    }
  else
    return (84);
}
