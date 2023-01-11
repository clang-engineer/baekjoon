#include <iostream>
#include <vector>

class Solution {
	public:
		void is_right_angled_triangle(int a, int b, int c) {
			if (a * a + b * b == c * c) {
				std::cout << "right" << std::endl;
			} else {
				std::cout << "wrong" << std::endl;
			}
		}
};

int main()
{
	Solution s;
	int a, b, c;
	while (true) {
		std::cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		if (a > b) {
			if (a > c) {
				s.is_right_angled_triangle(b, c, a);
			} else {
				s.is_right_angled_triangle(a, b, c);
			}
		} else {
			if (b > c) {
				s.is_right_angled_triangle(a, c, b);
			} else {
				s.is_right_angled_triangle(a, b, c);
			}
		}
	}
	return 0;
}

