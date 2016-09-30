/*
** ite.c for ite in /home/khoual_s/rendu/Synthese/SBMLparser/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 15 17:17:32 2016 Khoualdia Sabri
** Last update Wed Jun 15 17:21:03 2016 Khoualdia Sabri
*/

int	find_quote(char **tab, int i, int k)
{
  if (tab[i][k++] == '"')
    while (tab[i][k] != '"' && tab[i][k])
      k++;
  return (k);
}
