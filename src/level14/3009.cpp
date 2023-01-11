#include <iostream>

struct Point {
	int x, y;
	Point(int x, int y) : x(x), y(y) {}
};

class Solution {
	public:
		void get_guadrangle_ponit(Point a, Point b, Point c) {
			int x_result = 0;
			int y_result = 0;

			if (a.x == b.x) {
				x_result = c.x;
			} else if (a.x == c.x) {
				x_result = b.x;
			} else {
				x_result = a.x;
			}

			if (a.y == b.y) {
				y_result = c.y;
			} else if (a.y == c.y) {
				y_result = b.y;
			} else {
				y_result = a.y;
			}

			std::cout << x_result << " " << y_result << std::endl;

		}
};

int main()
{

	int x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	Point a(x1, y1);
	Point b(x2, y2);
	Point c(x3, y3);

	Solution s;
	s.get_guadrangle_ponit(a, b, c);

	return 0;
}

