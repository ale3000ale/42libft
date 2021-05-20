# 42libft amarcell [![jaeskim's 42Project Score](https://badge42.herokuapp.com/api/project/amarcell/Libft)](https://github.com/JaeSeoKim/badge42)

## Libft

### Mandatory
Make a library with basic and utils function for:
- String
- Memory
- Identity
- Print

### BONUS

This bonus is very important in future, DO IT! and understand ​it

is required to do:
- List management

### Trick and tips

Read the manual very carefully, compare your function with the original, study the List and reuse the functions already done.

## Libft Extended

Includes:
- Greater Makefile with:
  - Command norme for check norme
  - No bonus command
  - All objs are in a directory
- Linked lists
- Long atoi
- Putstr_fd return the number of chars written
- Freestrjoin a join that frees the arguments
- Char swapping
- Int swapping
- Get next line (simple version)

### Prototypes

```C
typedef struct s_clist
{
	void			*content;
	struct s_clist	*next;
	struct s_clist	*pre;
	int				last;
}				t_clist;

t_clist			*ft_clstnew(void *content);
void			ft_clstadd_front(t_clist **lst, t_clist *new);
int				ft_clstsize(t_clist *lst);
t_clist			*ft_clstlast(t_clist *lst);
void			ft_clstadd_back(t_clist **lst, t_clist *new);
void			ft_clstdelone(t_clist *lst, void (*del)(void*));
void			ft_clstclear(t_clist **lst, void (*del)(void*));
void			ft_clstiter(t_clist *lst, void (*f)(void *));
t_clist			*ft_clst_export(t_clist *lst);

char			*ft_freestrjoin(char *s1, char *s2);
void			ft_char_swap(char *a, char *b);
void			ft_swap(int *a, int *b);

int				get_next_line(int fd, char **line);
int				ft_putstr_fd(char *s, int fd);
long			ft_latoi(const char *str);
```