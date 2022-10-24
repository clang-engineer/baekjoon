#include <iostream>
#include <vector>

int get_mean(std::vector<int> vec) {
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum / vec.size();
}

int get_median(std::vector<int> vec) {
	int temp;
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[i] > vec[j]) {
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}
	return vec[vec.size() / 2];
}


int main()
{
	std::vector<int> v;

	for (int i = 0; i < 5; i++) {
		int n;
		std::cin >> n;
		v.push_back(n);
	}

	std::cout << get_mean(v) << std::endl;
	std::cout << get_median(v) << std::endl;


    return 0;
}

