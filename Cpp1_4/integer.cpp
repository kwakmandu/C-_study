#include <iostream>

using namespace std; //이거 쓰면 앞에 std:: 네임 스페이스 안 적어줘도 됨

//int main()
//{
//	int x(333), y=222, z=3334;
//	z = 3;
//
//	std::cout << x << std::endl;
//	std::cout << y << endl;
//	cout << z << endl;
//
//
//}


int main()
{
	int num1 = 1;
	int num2 = num1 * 1.5;
	int num3 = num1 / 2;
	int num4 = 5;


	std::cout << num1 << num2 << num3 << num4 << endl;

	std::cout << "num1 : " << num1 << endl;
	std::cout << "num2 : " << num2 << endl; // 소수점 아래 값 다 버림
	std::cout << "num3 : " << num3 << endl;
	std::cout << "num4 : " << num4 << endl;
}

// int 자료형 그냥 int 말고도 많이 있음


