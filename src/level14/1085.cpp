#include <iostream>
#include <vector>

class Solution {
	public:
		void min_distance_to_boundary(int x, int y, int w, int h) {
			int min = x < y ? x : y;
			min = min < w - x ? min : w - x;
			min = min < h - y ? min : h - y;
			std::cout << min << std::endl;
		}

};

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;
	Solution s;
	s.min_distance_to_boundary(x, y, w, h);

	return 0;
}

