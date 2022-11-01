#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
	public:
		void solution(std::vector<int> &v) {
			std::vector<int> answer;

			int n = v.size();
			for (int i = 0; i < n; i++) {
				int cnt = 0;
				std::vector<int> founded = {};
				for (int j = 0; j < n; j++) {
					if (std::find(founded.begin(), founded.end(), v[j]) == founded.end()) {
						if (v[i] > v[j]) {
							founded.push_back(v[j]);
							cnt++;
						}
					}
				}
				answer.push_back(cnt);
			}

			for (int i = 0; i < n; i++) {
				std::cout << answer[i] << " ";
			}
			std::cout << "\n";

		}
};

int main()
{
	int N;

	std::cin >> N;

	std::vector<int> v;

	for (int i = 0; i < N; i++) {
		int temp;
		std::cin >> temp;
		v.push_back(temp);
	}

	Solution s;
	s.solution(v);

	return 0;
}

