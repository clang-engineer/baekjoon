#include <iostream>
#include <vector>
#include <queue>

struct compare {
	bool operator()(const std::pair<int, std::string> &a, const std::pair<int, std::string> &b) {
		if (a.first == b.first) {
			return true;
		}
		return a.first > b.first;
	}
};

int main()
{
	int total_count;
	std::cin >> total_count;

	std::priority_queue<std::pair<int, std::string>, std::vector<std::pair<int,std::string>>, compare> pq;

	while (total_count > 0) {
		int age;
		std::string name;
		std::cin >> age >> name;

		pq.push(std::make_pair(age, name));

		total_count--;
	}


	while (!pq.empty()) {
		std::cout << pq.top().first << " " << pq.top().second << std::endl;
		pq.pop();
	}

	return 0;
}

