#include <iostream>
using namespace std;

int main(void)
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;
	int num2;
	int num3;

	int count = 0;
	cout << "숫자 입력 : ";
	cin >> num;

	int T = num;

	while (true)
	{

		count++;

		num2 = (num / 10) + (num % 10);	 // 새로 만든 수
		num3 = (num % 10) + (num2 % 10); // 두가지 수의 제일 오른쪽 수 조합
		num = num3;

		if (num == T)
		{
			break;
		}
	}

	cout << count;

	return 0;
}