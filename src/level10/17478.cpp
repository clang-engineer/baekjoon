#include <iostream>
#include <vector>

void print_question(int num, std::vector<std::string>& vec, int total);
void print_answer(int num, std::vector<std::string>& vec, int total);

int main()
{
	int num;

	std::cin >> num;

	std::cout <<  "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << std::endl;

	std::string str1 =  "\"재귀함수가 뭔가요?\"";
	std::string str2 = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
	std::string str3 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
	std::string str4 = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";

	std::string ans = "라고 답변하였지.";

	std::vector<std::string> question = {str1, str2, str3, str4};
	std::vector<std::string> answer = {ans};

	print_question(num, question, num);
	print_answer(num, answer, num);

	std::cout << ans << std::endl;

	return 0;
}

void print_question(int num, std::vector<std::string>& vec, int total)
{
	if (num < 0)
	{
		return;
	}

	print_question(num - 1, vec, total);
	
	if (num == total)
	{
		for (int i = 0; i < num; i++)
		{
			std::cout << "____";
		}

		std::cout << "\"재귀함수가 뭔가요?\"" << std::endl;

		for (int i = 0; i < num; i++)
		{
			std::cout << "____";
		}
		std::cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << std::endl;

		return;
	}
	
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		for (int i = 0; i < num; i++)
		{
			std::cout << "____";
		}
		std::cout << *iter << std::endl;
	}
}

void print_answer(int num, std::vector<std::string>& vec, int total)
{
	if (num == 0)
	{
		return;
	}
	print_answer(num - 1, vec, total);
	for (auto v : vec)
	{
		for (int i = total - num; i >= 0; i--)
		{
			std::cout << "____";
		}
		std::cout << v << std::endl;
	}
}
