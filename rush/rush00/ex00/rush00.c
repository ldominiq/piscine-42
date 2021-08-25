void	ft_putchar(char c);

void	rush_print_char(int x, int y, int x_column, int y_line)
{
	if (y_line == 0 && x_column == 0)
		ft_putchar('o');
	else if (y_line == 0 && x_column > 0 && x_column < x - 1)
		ft_putchar('-');
	else if (y_line == 0 && x_column == x - 1)
		ft_putchar('o');
	else if (y_line > 0 && y_line < y - 1 && x_column == 0)
		ft_putchar('|');
	else if (y_line > 0 && y_line < y - 1 && x_column > 0 && x_column < x - 1)
		ft_putchar(' ');
	else if (y_line > 0 && y_line < y - 1 && x_column == x - 1)
		ft_putchar('|');
	else if (y_line == y - 1 && x_column == 0)
		ft_putchar('o');
	else if (y_line == y - 1 && x_column > 0 && x_column < x - 1)
		ft_putchar('-');
	else if (y_line == y - 1 && x_column == x - 1)
		ft_putchar('o');
}

void	rush(int x, int y)
{
	int	y_line;
	int	x_column;

	y_line = 0;
	if (!(x < 0 || y < 0))
	{
		while (y_line <= y - 1)
		{
			x_column = 0;
			while (x_column <= x - 1)
			{
				rush_print_char(x, y, x_column, y_line);
				x_column++;
			}
			ft_putchar('\n');
			y_line++;
		}
	}
}
