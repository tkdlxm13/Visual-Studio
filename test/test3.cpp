//����
#include <iostream>

using namespace std;

void calculator() {
	char choice;
	double num1, num2, result;

	cout << "\n";
	cout << "ù��° ���ڸ� �Է��ϼ���: ";
	cin >> num1;
	cout << "�ι�° ���ڸ� �Է��ϼ���: ";
	cin >> num2;

	while (true) {
		cout << "\n���� �޴�:\n";
		cout << "+\n";
		cout << "-\n";
		cout << "*\n";
		cout << "/\n";
		cout << "���� -> `\n";
		cout << "����� ��ȣ�� �Է��ϼ���. ";
		cin >> choice;

		if (choice == '`') {
			cout << "���⸦ �����մϴ�." << endl;
			break;
		}

		switch (choice) {
		case '+':
			result = num1 + num2;
			cout << "\n���: " << result << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << "\n���: " << result << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << "\n���: " << result << endl;
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
				cout << "\n���: " << result << endl;
			}
			else {
				cout << "\n0���� ���� �� �����ϴ�." << endl;
			}
			break;
		default:
			cout << "\n�߸��� �����Դϴ�. �ٽ� �õ��ϼ���." << endl;
		}
	}
}