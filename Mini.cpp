
#include "Mini.hpp"

Mini::Mini(void) {
	void	*mlx;
	/*void	*win;
	void	*img;*/
	int		width;
	int		height;

	width = 800;
	height = 800;
	if (!(mlx = mlx_init()))
		std::cout << "Minilbx failed" << std::endl;

}

Mini::Mini(Mini const & rhs) { *this = rhs; }

Mini & Mini::operator=(Mini const &) {
	return (*this);
}

Mini::~Mini(void) { }
