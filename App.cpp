#include "Set.h"
#include "SetIterator.h"
#include "ExtendedTest.h"
#include "ShortTest.h"
#include <stack>
#include <iostream>
using namespace std;

void customTest() {
	Set s;
	s.add(8);
	s.add(5);
	s.add(15);
	s.add(7);
	cout << "array_size: " << s.getArraySize() << "\n";

	cout << "size: " << s.size() << "\n";
	cout << s.search(15) << "\n";
	s.remove(15);
	cout << s.search(15) << "\n";
	cout << "size: " << s.size() << "\n";

	s.add(16);
	s.add(25);
	cout << "size: " << s.size() << "\n";

	s.printArray();
	s.add(77);
	s.printArray();
	s.remove(77);
	s.printArray();
	s.remove(5);
	s.printArray();

	s.add(8);
	s.printArray();
	s.add(7);
	s.printArray();
}

int main() {

	testAll();
	testAllExtended();

	//customTest();
	cout << "That's all!" << endl;
	return 0;
}
