#include <iostream>
#include <string>
using namespace std;

void getWordInput() {
	string word;
	int num;

	cout << "\n";
	cout << "단어를 입력하세요. ";
	cin >> word;

	cout << "몇번째의 배열 값을 호출할까요? ";
	cin >> num;

	cout << "호출된 값은 다음과 같습니다. ";
	cout << word[num - 1] << endl;
}
