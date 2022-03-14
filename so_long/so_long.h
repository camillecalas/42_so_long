/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:26:39 by ccalas            #+#    #+#             */
/*   Updated: 2022/02/11 14:26:41 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/************** LIBRAIRIES **************/

# include <stdio.h>
# include <mlx.h>
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"

/************** ASSETS **************/

# define GROUND "assets/ground.xpm"
# define WALL "assets/wall.xpm"
# define WAY_OUT "assets/way_out.xpm"
# define COLLECTIBLE "assets/flower.xpm"
# define PLAYER "assets/player_front.xpm"
# define PLAYER_BACK "assets/player_back.xpm"
# define PLAYER_RIGHT "assets/player_going_right.xpm"
# define PLAYER_LEFT "assets/player_going_left.xpm"

/************** TOUCHES **************/

# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2

/************** WINDOWS **************/

# define IMG_X 50
# define IMG_Y 50

/************** STRUCTURES **************/

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		win_x;
	int		win_y;
	char	**map;
	int		map_x;
	int		map_y;
	void	*player;
	void	*collectible;
	void	*wall;
	void	*ground;
	void	*exit;
	int		img_width;
	int		img_height;
	int		p_x;
	int		p_y;
	int		count_c;
	int		count_p;
	int		count_e;
	int		nb_line;
	int		counter;
}	t_game;

/************** TYPE BOOLEEN **************/

typedef enum Bool
{
	false,
	true
}	t_Bool;

/************** FONCTIONS PROTOTYPES **************/

int		ft_close(t_game *game);
int		ft_key_press(int keycode, t_game *game);
void	ft_read_map(t_game *game, char *av);

/* GAME */

void	ft_move_up(t_game *game);
void	ft_move_down(t_game *game);
void	ft_move_right(t_game *game);
void	ft_move_left(t_game *game);
void	ft_init_structure_game(t_game *game, char *av);

/*CHECK_MAP*/
int		ft_check_ber(char *av);
int		ft_check_map_square(t_game *game, int nb_line);
t_game	*ft_fill_map(t_game *game, char *av, int nb_line);
int		ft_get_line_nb(char *av);
int		ft_check_map(t_game *game, char *av);

/*ERROR_MAP*/
int		ft_check_p_c_e(t_game *game, int nb_line);
int		ft_check_side_wall(t_game *game, int nb_line);
int		ft_check_wall(t_game *game, int nb_line);

/*INIT_MAP*/
void	ft_init_window_size(t_game *game, char *av);
void	ft_init_map(t_game *game);
void	ft_put_background(t_game *data);

void	ft_load_image(t_game *game);
void	ft_display_image(t_game *game);

#endif
