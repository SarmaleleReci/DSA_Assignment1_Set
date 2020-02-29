#include "Set.h"
#include "SetIterator.h"
#include "ExtendedTest.h"
#include "ShortTest.h"
#include <stack>
#include <iostream>
using namespace std;

void customTest() {
	Set s;
	cout << s.isEmpty() << "\n";
	s.add(8);
	cout << s.isEmpty() << "\n";
	s.add(5);
	cout << s.isEmpty() << "\n";
}

int main() {

	//testAll();
	//testAllExtended();

	customTest();
	cout << "That's all!" << endl;
	return 0;
	//system("pause");
}
