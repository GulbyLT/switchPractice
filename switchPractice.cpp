#include <iostream>

int calculate(int int1, int int2, char opera)
{
	
	using namespace std;

	switch (opera)
	{
	case '/':
		return int1 / int2;
		break;
	case '*':
		return int1 * int2;
		break;
	case '+':
		return int1 + int2;
		break;
	case '-':
		return int1 - int2;
		break;
	case '%':
		return int1 % int2;
		break;
	default:
		cout << "Invalid operator input \n";

	}




}


int main()
{
	using namespace std;
	int int1, int2;
	char opera;
	cout << "Please input intger: " << endl;
	cin >> int1;
	cout << "\nPlease input another integer: " << endl;
	cin >> int2;
start:
	cout << "Please input a mathematical operator (* /  + - %)" << endl;
	cin >> opera;

	std::cout << int1 << opera << int2 << "=" << calculate(int1, int2, opera);

}