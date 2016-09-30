/*
** my_factoriel_synthesis.c for my_factoriel_synthesis in /home/khoual_s/rendu/Synthese/Pala
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 15 16:40:28 2016 Khoualdia Sabri
** Last update Thu Jun 16 16:14:25 2016 Khoualdia Sabri
*/

int	my_factrec_synthesis(int nb)
{
  if (nb > 12 || nb < 0)
    return (0);
  else if (nb == 0 || nb == 1)
    return (1);
  else
    nb = nb * my_factrec_synthesis(nb - 1);
  return (nb);
}

int	my_squareroot_synthesis(int nb)
{
  int   i;

  i = 0;
  if (nb == 0)
    return (0);
  if (nb == 1)
    return (1);
  while (i <= (nb / 2))
    {
      if ((i * i) == nb)
	return (i);
      i++;
    }
  return (-1);
}
