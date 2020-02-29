#include "Set.h"
#include "SetIterator.h"

Set::Set() {
	//TODO - Implementation
	array_size = 10;
	current_position = 0;
	array = new TElem[array_size];
}


bool Set::add(TElem elem) {
	array[current_position] = elem;
	current_position++;

	if (current_position == array_size) {
		// resize
	}

	return true;
}


bool Set::remove(TElem elem) {
	//TODO - Implementation
	return false;
}

bool Set::search(TElem elem) const {
	//TODO - Implementation
	return false;
}


int Set::size() const {
	//TODO - Implementation
	return current_position;
}


bool Set::isEmpty() const {
	if (current_position == 0)
		return true;
	return false;
}


Set::~Set() {
	//TODO - Implementation
}


SetIterator Set::iterator() const {
	return SetIterator(*this);
}
