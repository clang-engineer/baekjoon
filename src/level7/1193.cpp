#include <iostream>

class Solution{
	public:
		void printKthFraction(int k){
			int n = 1;
			while(k > n){
				k -= n;
				n++;
			}

			if(n % 2 == 0){
				std::cout << k << "/" << n - k + 1 << std::endl;
			}else{
				std::cout << n - k + 1 << "/" << k << std::endl;
			}
		}
};

int main() {
	int t;
	std::cin >> t;
	Solution s;
	s.printKthFraction(t);

	return 0;
}
