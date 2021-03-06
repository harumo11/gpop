#include <unistd.h>
#include <iostream>
#include <vector>
#include <cmath>

#include <Gpop/Series.hpp>

int main(int argc, char const* argv[])
{
	
	Gpop::Series plot;

	std::vector<double> v;
	for (int i = 0; i < 30; i++) {
		v.push_back(std::cos(6*i*M_PI/180));
	}
	plot.plot(v, "w lp lw 2 lc rgb \"blue\" ");

	v.clear();
	for (int i = 0; i < 30; i++) {
		v.push_back(std::sin(6*i*M_PI/180));
	}
	plot.plot(v, "w p lt 7 lw 2 lc rgb \"red\" ");

	plot.set_title("The first plot");
	plot.set_x_label("x");
	plot.set_y_label("y");
	plot.show();

	std::cout << "Press Enter Key" << std::endl;
	std::cin.get();

	return 0;
}


