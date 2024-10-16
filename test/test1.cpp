//다이아몬드 별찍기
#include <iostream>

using namespace std;

// 함수 원형 선언
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
	cout << "원하시는 줄을 입력하세요: ";
	cin >> n;
	cout << "\n";

	if (n % 2 == 0 || n < 1) {
		cout << "홀수를 입력하거나 1이상의 수를 입력하세요." << endl;
		cout << "\n";
		printDiamond();
		return;
	}

	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "☆";
		}
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "★";
		}
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "☆";
		}
		cout << endl;
	}

	for (int i = (n - 1) / 2 - 1; i >= 0; i--) {
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "☆";
		}
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "★";
		}
		for (int j = 0; j < (n / 2) - i; j++) {
			cout << "☆";
		}
		cout << endl;
	}
}
