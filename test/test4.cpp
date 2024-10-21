//랜덤 숫자 찾기 게임
#include <iostream>
#include <stdlib.h> //srand((unsigned)time(NULL));
#include <time.h>
#include <string>
#include <limits> // numeric_limits를 사용하기 위해 추가

using namespace std;

void guessNumber() {
	int userNum, ranNum;
	int count = 1;
	string again;
	srand((unsigned)time(NULL)); //rand() 함수가 실행될 때마다 매번 다른 난수를 생성

	ranNum = rand() % 100 + 1;

	cout << "\n";
	cout << "1 ~ 100까지의 랜덤 숫자 맞추기 (종료: 0)" << endl;

	while (true){
		cout << "\n숫자를 입력하세요." << endl;
		cout << "입력한 숫자: ";
		cin >> userNum;

		// 잘못된 입력 체크
		if (cin.fail()) {
			cin.clear(); // 오류 상태를 지움
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 잘못된 입력 무시
			cout << "\n숫자가 아닙니다. 숫자를 입력하세요." << endl;
			continue; // 루프의 나머지 부분을 건너뜀
		}

		if (userNum == ranNum || userNum == 0)
		{
			break;
		}
		else if (userNum > ranNum && userNum <= 100)
		{
			cout << "\n입력한 값보다 작습니다. (입력한 값: " << userNum << ")" << endl;
			count++;
		}
		else if (userNum > 100 || userNum < 0) {
			cout << "\n입력한 값이 0보다 작거나 100보다 클 수 없습니다." << endl;
		}
		else {
			cout << "\n입력한 값보다 큽니다. (입력한 값: " << userNum << ")" << endl;
			count++;
		}
	}

	if (userNum == 0) {
		cout << "\n프로그램을 종료합니다." << endl;
	}
	else {
		cout << "\n정답입니다. \n시도 횟수: " << count << endl;
	}

	cout << "\n";

	while (true) {
		cout << "다시 도전하시겠습니까? (Y/N)" << endl;
		cin >> again;

		if (again == "y" || again == "Y") {
			guessNumber();
			return;
			
		}
		else if (again == "n" || again == "N") {
			cout << "\n프로그램을 종료합니다." << endl;
			return;
		}
		else {
			cout << "\n잘못된 입력입니다. y나 n을 입력하세요." << endl;
		}
	}
}