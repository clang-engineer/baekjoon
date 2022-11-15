#include <iostream>
#include <vector>

class Solution {
	public:
		int getOverlabArea(std::vector<int> &rect1, std::vector<int> &rect2) {
			int x1 = rect1[0], y1 = rect1[1], x2 = rect1[2], y2 = rect1[3];
			int x3 = rect2[0], y3 = rect2[1], x4 = rect2[2], y4 = rect2[3];
			int x = std::min(x2, x4) - std::max(x1, x3);
			int y = std::min(y2, y4) - std::max(y1, y3);
			return x > 0 && y > 0 ? x * y : 0;
		}
};

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> rects(n, std::vector<int>(4));
	for (int i = 0; i < n; i++) {
		int x1 = 0, y1 = 0;
		std::cin >> x1 >> y1;
		rects[i] = {x1, y1, x1+10, y1+10};
	}

	Solution s;
	int area = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			area += s.getOverlabArea(rects[i], rects[j]);
		}
	}
	std::cout << n*100 - area << std::endl;

	return 0;
}

