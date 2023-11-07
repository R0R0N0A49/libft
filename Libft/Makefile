#definie le nom de la lib apres la compilation.
NAME=libft.a

#definie les fichier que va contenir la variable Source.
SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#definie ce que va devenir les fichier dans Source. "$" permet de faire une commande.
OBJS=$(SRC:.c=.o)

RM=rm -f
#definie la variable CC comme compilateur.
CC=gcc -Wextra -Werror -Wall
#ar -rc cree la bibliotheque et lui donne le nom NAME.
ARRC=ar -rc
#all sert a faire les execution de fichier comme pour faire le fichier .a.
#il faut le placer au debut pour ne pas a avoir a preciser les nom de fichier (SRC).
all: $(NAME)

#permet de passer les fichier .o en un seul fichier .a.
$(NAME): $(OBJS)
	$(ARRC) $(NAME) $(OBJS)

#permet de supe les fichier .o si clean est rajouter deriere Make apres la compilation ?
clean:
	$(RM) $(OBJS)
#permet de supr le fichier .a et .o si fclean est rajouter deriere Make apres la compilation ?
fclean: clean
	$(RM) $(NAME)
#permet d'executer la commande fclean.
re: fclean $(NAME)
