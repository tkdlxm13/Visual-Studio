//���� ���� ã�� ����
#include <iostream>
#include <stdlib.h> //srand((unsigned)time(NULL));
#include <time.h>
#include <string>
#include <limits> // numeric_limits�� ����ϱ� ���� �߰�

using namespace std;

void guessNumber() {
	int userNum, ranNum;
	int count = 1;
	string again;
	srand((unsigned)time(NULL)); //rand() �Լ��� ����� ������ �Ź� �ٸ� ������ ����

	ranNum = rand() % 100 + 1;

	cout << "\n";
	cout << "1 ~ 100������ ���� ���� ���߱� (����: 0)" << endl;

	while (true){
		cout << "\n���ڸ� �Է��ϼ���." << endl;
		cout << "�Է��� ����: ";
		cin >> userNum;

		// �߸��� �Է� üũ
		if (cin.fail()) {
			cin.clear(); // ���� ���¸� ����
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // �߸��� �Է� ����
			cout << "\n���ڰ� �ƴմϴ�. ���ڸ� �Է��ϼ���." << endl;
			continue; // ������ ������ �κ��� �ǳʶ�
		}

		if (userNum == ranNum || userNum == 0)
		{
			break;
		}
		else if (userNum > ranNum && userNum <= 100)
		{
			cout << "\n�Է��� ������ �۽��ϴ�. (�Է��� ��: " << userNum << ")" << endl;
			count++;
		}
		else if (userNum > 100 || userNum < 0) {
			cout << "\n�Է��� ���� 0���� �۰ų� 100���� Ŭ �� �����ϴ�." << endl;
		}
		else {
			cout << "\n�Է��� ������ Ů�ϴ�. (�Է��� ��: " << userNum << ")" << endl;
			count++;
		}
	}

	if (userNum == 0) {
		cout << "\n���α׷��� �����մϴ�." << endl;
	}
	else {
		cout << "\n�����Դϴ�. \n�õ� Ƚ��: " << count << endl;
	}

	cout << "\n";

	while (true) {
		cout << "�ٽ� �����Ͻðڽ��ϱ�? (Y/N)" << endl;
		cin >> again;

		if (again == "y" || again == "Y") {
			guessNumber();
			return;
			
		}
		else if (again == "n" || again == "N") {
			cout << "\n���α׷��� �����մϴ�." << endl;
			return;
		}
		else {
			cout << "\n�߸��� �Է��Դϴ�. y�� n�� �Է��ϼ���." << endl;
		}
	}
}