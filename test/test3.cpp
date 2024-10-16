//계산기
#include <iostream>

using namespace std;

void calculator() {
	char choice;
	double num1, num2, result;

	cout << "\n";
	cout << "첫번째 숫자를 입력하세요: ";
	cin >> num1;
	cout << "두번째 숫자를 입력하세요: ";
	cin >> num2;

	while (true) {
		cout << "\n계산기 메뉴:\n";
		cout << "+\n";
		cout << "-\n";
		cout << "*\n";
		cout << "/\n";
		cout << "종료 -> `\n";
		cout << "계산할 기호를 입력하세요. ";
		cin >> choice;

		if (choice == '`') {
			cout << "계산기를 종료합니다." << endl;
			break;
		}

		switch (choice) {
		case '+':
			result = num1 + num2;
			cout << "\n결과: " << result << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << "\n결과: " << result << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << "\n결과: " << result << endl;
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
				cout << "\n결과: " << result << endl;
			}
			else {
				cout << "\n0으로 나눌 수 없습니다." << endl;
			}
			break;
		default:
			cout << "\n잘못된 선택입니다. 다시 시도하세요." << endl;
		}
	}
}