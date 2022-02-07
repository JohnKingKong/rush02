# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvigneau <jvigneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 11:00:19 by jvigneau          #+#    #+#              #
#    Updated: 2022/02/05 12:51:34 by jvigneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
define JR

	BIG LEAK!!!! A PICTURE OF ME WORKING

                       .="=.
                      _/.-.-.\_     _
                     ( ( o o ) )    ))
                      |/  "  \|    //
      .-------.        \'---'/    / /
     _|~~ ~~  |_       /`"""`\\  ((
   =(_|_______|_)=    / /_,_\ \\  \\
     |:::::::::|      \_\\_'__/ \  ))
     |:::::::[]|       /`  /`~\  |//
     |o=======.|      /   /    \  /
     `"""""""""`  ,--`,--'\/\    /
                   '-- "--'  '--'
endef
export JR

define TEA

		TEABAG THAT MOTHERF***ER

           .------.____
         .-'       \ ___)
      .-'         \\\\
   .-'        ___  \\)
.-'          /  (\  |)
         __  \  ( | |
        /  \  \__'| |
       /    \____).-'
     .'       /   |
    /     .  /    |
  .'     / \/     |
 /      /   \     |
       /    /    _|_
       \   /    /\ /\\
        \ /    /__v__\\
         '    |       |
              |     .#|
              |#.  .##|
              |#######|
              |#######|

endef
export TEA

define  NL


endef

SRCS	= 	main.c ./srcs/utils.c 
			
OBJS	=	${SRCS:.c=.o}

BONOBJS	=	${BONUS:.c=.o}

CC		=	@gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -o rush_02

LIBS	=	./lib/libft/libft.a
	
NAME	=	rush_02

FTMAKE	=	cd ./lib/libft && make -s 
    
RUN		=	 ./rush_02

CLS		= 	clear

$(NAME)	:		
			$(FTMAKE) 
			$(CC) $(SRCS) $(LIBS) $(CFLAGS)

all		:	$(NAME) 
    			
clean	:	
			${RM} ${OBJS}
			$(FTMAKE) $@
            $(info ______________________________)
            $(info $(NL)Cleaning successful!$(NL))
            $(info ______________________________)

fclean	:	clean
			$(RM) $(NAME)
			$(FTMAKE) $@
			
re		:	fclean all
            
			$(RUN)
            
bonus	:
			$(FTMAKE)

jr		: 
	clear
	@echo "$$JR"

tea	:
	clear
	@echo "$$TEA"

.PHONY	:	all clean fclean re bonus jr


.SILENT :   clean fclean

