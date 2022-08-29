#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		int H, W, N;
		std::cin >> H >> W >> N;

		int width = 1;
		for (int j = 1; j <= W; j++)
		{
			if (j * H < N)
			{
				width += 1;
			}
			else 
			{
				break;
			}
		}

		int height =  N - (width - 1) * H;

		if (height == 0)
		{
			height = H;
		}

		if (width / 10 == 0)
		{
			std::cout << height << "0" << width << std::endl;
		}
		else
		{
			std::cout << height << width << std::endl;
		}
	}

	return 0;
}

