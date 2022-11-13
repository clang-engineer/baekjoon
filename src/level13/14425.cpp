#include <iostream>
#include <vector>
#include <set>
#include <string>

int main()
{
	int N, M;
	std::cin >> N >> M;
	std::vector<std::string> v(N);
	for (int i = 0; i < N; i++)
		std::cin >> v[i];
	std::set<std::string> S;
	for (int i = 0; i < M; i++)
	{
		std::string tmp;
		std::cin >> tmp;
		S.insert(tmp);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (S.find(v[i]) != S.end())
			cnt++;
	}
	std::cout << cnt << std::endl;


    return 0;
}

