#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int N, M;

	std::cin >> N >> M;

	std::vector<std::string> v(N);
	for (int i = 0; i < N; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	int count = 0;
	std::string s;
	for (int i = 0; i < M; i++) {
		std::cin >> s;

		if (std::binary_search(v.begin(), v.end(), s)) {
			count++;
		}
	}

	std::cout << count << std::endl;
}
