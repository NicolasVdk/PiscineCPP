NAME 	= annuaire

SRCS	= main.cpp annuaire.class.cpp contact.class.cpp

OBJS	= $(SRCS:.cpp=.o)

RM		= /bin/rm -f
ECHO	= /bin/echo
CC		= g++ -Wall -Werror -Wextra

all 	: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean	:
				@$(RM) $(OBJS)
				@$(ECHO) 'Directory cleaned'

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) 'Remove executable'

re		:		fclean all

.cpp.o	:
				@$(CC) $(CFLAGS) -o $@ -c $<

.PHONY	:		all clean re