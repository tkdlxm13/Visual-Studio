#include <iostream>
#include <string>
using namespace std;

void getWordInput() {
	string word;
	int num;

	cout << "\n";
	cout << "�ܾ �Է��ϼ���. ";
	cin >> word;

	cout << "���°�� �迭 ���� ȣ���ұ��? ";
	cin >> num;

	cout << "ȣ��� ���� ������ �����ϴ�. ";
	cout << word[num - 1] << endl;
}
