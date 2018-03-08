/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 16:14:43 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/14 20:19:05 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <inttypes.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <wchar.h>
# include <locale.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>

# define RED	"\033[1;31m"
# define BLACK	"\033[1;30m"
# define BLUE	"\033[1;34m"
# define GREEN	"\033[1;32m"
# define GREY	"\033[1;37m"
# define YELLOW	"\033[1;33m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define EOC	"\033[0;m"
# define BUFF_SIZE 100

typedef	struct	s_list
{
	char		buff[BUFF_SIZE];
	int			curs;
	int			zero;
	int			moin;
	int			plus;
	int			esp;
	int			htag;
	int			l;
	int			h;
	int			lm;
	int			j;
	int			z;
	int			champ;
	int			precision;
	int			rtrn;
}				t_list;

int				ft_printf(const char *format, ...);
int				ft_strlen(char const *str);
void			*ft_memset(void *str, int c, size_t n);
void			ft_recup_char(t_list *var, va_list ap, unsigned char *buf);
int				ft_color(const char *format, t_list *var);
void			ft_printparms(const char *tmp, int *i, t_list *var, va_list ap);
int				ft_care_is_me(const char *tmp, t_list *var, va_list ap);
void			ft_offplace(char tmp, t_list *var);
int				ft_compt(long long nbr, int base);
void			ft_resetprset(t_list *var);
long long		ft_atoi(const char *str);
char			*ft_itoa(int n);
void			ft_itoab_buff(long long nbr, int base, t_list *var);
int				ft_charcmp(int c, char const *s1);
int				ft_charnumb(char const *s1, int c);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_isdigit(int c);
int				ft_copyinbuff(char c, t_list *var);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_strupper(char *tmp);
void			*ft_memalloc(size_t size);
char			*ft_strdup(char const *s1);
char			*ft_strcpy(char *str, const char *strc);
char			*ft_strncpy(char *str, const char *strc, size_t n);
void			ft_regulflag(t_list *var);
void			ft_printf_b(t_list *var, int i, va_list ap);
void			ft_printf_c(t_list *var, int i, void *item);
void			ft_printf_cc(t_list *var, int i, void *item);
void			ft_printf_x(t_list *var, int i, void *item, int n);
void			ft_printf_s(t_list *var, int i, void *item);
void			ft_printf_ss(t_list *var, int i, void *item);
void			ft_printf_p(t_list *var, int i, void *item);
void			ft_printf_u(t_list *var, int i, void *item);
void			ft_printf_i(t_list *var, int i, void *item);
void			ft_printf_o(t_list *var, int i, void *item);
void			ft_printf_pc(t_list *var, int i);
void			ft_lstinitcurs(t_list *li);
void			ft_lstinit(t_list *li);
void			ft_put_wc(int32_t c, t_list *var);
int				ft_ucompt(unsigned long long nbr, int base);
void			ft_copystr(t_list *var, char *str);
int				ft_memdel(void **ap);

#endif
