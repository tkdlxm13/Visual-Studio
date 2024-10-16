//���̾Ƹ�� �����
#include <iostream>

using namespace std;

// �Լ� ���� ����
void printDiamond();
void getWordInput();
void calculator();
void guessNumber();

int main() {
	printDiamond();
	getWordInput();
	calculator();
	guessNumber();

	return 0;
}

void printDiamond() {
	int n;
	cout << "���Ͻô� ���� �Է��ϼ���: ";
	cin >> n;
	cout << "\n";

	if (n % 2 == 0 || n < 1) {
		cout << "Ȧ���� �Է��ϰų� 1�̻��� ���� �Է��ϼ���." << endl;
		cout << "\n";
		printDiamond();
		return;
	}

	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "��";
		}
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "��";
		}
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "��";
		}
		cout << endl;
	}

	for (int i = (n - 1) / 2 - 1; i >= 0; i--) {
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "��";
		}
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "��";
		}
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "��";
		}
		cout << endl;
	}
}
