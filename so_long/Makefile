NAME = so_long

SRCS	=	events/handle_events.c\
			maps/check_map.c\
			maps/error_map.c\
			maps/init_map.c\
			get_next_line/get_next_line.c\
			get_next_line/get_next_line_utils.c\
			game.c\
			main.c\
			
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror

export CPPFLAGS=-I/opt/X11/include
INCS = -I ./includes -I ./libft/includes -I ./mlx_mac
LIBC = -L ./mlx_mac -lmlx -L ./libft -lft
MLX_FLAGS = -Ofast -framework OpenGL -framework AppKit
MLX_USED = mlx_mac
HEADER_MESSAGE = SO_LONG IS COMPILING${_END}

all:		${NAME}

.c.o:
			@${CC} ${FLAGS} ${INCS} -c $< -o $@

${NAME}:	${OBJS}
			@echo "[${HEADER_MESSAGE}]"
			@echo "[1 / 3] Compiling libft..."
			@${MAKE} -C libft >/dev/null
			@echo "[2 / 3] Compiling mlx..."
			@${MAKE} -C ${MLX_USED} >/dev/null 2>&1
			@echo "[3 / 3] Compiling so_long..."
			@${CC} ${FLAGS} ${INCS} ${LIBC} ${MLX_FLAGS} -o ${NAME} ${OBJS}
			@echo "so_long's ready to be used !"

clean:		
			@echo "Deleting libft library..."
			@${MAKE} -C libft clean >/dev/null
			@echo "Deleting mlx library..."
			@${MAKE} -C ${MLX_USED} clean >/dev/null
			@echo "Deleting so_long binary files..."
			@rm -f ${OBJS}

fclean:		clean
			@${MAKE} -C libft fclean >/dev/null
			@echo "Deleting so_long executable..."
			@rm -f ${NAME}
			@echo "so_long's has been cleaned !"

re:			fclean all

.PHONY:		all fclean clean all bonus
