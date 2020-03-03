#include "Set.h"
#include "SetIterator.h"
#include <iostream>

Set::Set() {
	//TODO - Implementation
	array_size = 1;
	current_position = 0;
	array = new TElem[array_size];
}

bool Set::add(TElem elem) {
	for (int i = 0; i < current_position; i++) {
		if (array[i] == elem)
			return false;
	}

	array[current_position] = elem;
	current_position++;

	if (current_position == array_size) {
		int new_array_size = array_size * 2;
		TElem *new_array = new TElem[new_array_size];

		for (int i = 0; i < array_size; i++)
			new_array[i] = array[i];

		array_size = new_array_size;
		delete[] array;
		array = new_array;
	}

	return true;
}


bool Set::remove(TElem elem) {

	if (!search(elem))
		return false;

	for (int i = 0; i < current_position; i++) {
		if (array[i] == elem) {
			while (i < current_position) {
				array[i] = array[i+1];
				i++;
			}

			break;
		}
	}

	current_position--;

	return true;
}

bool Set::search(TElem elem) const {

	for (int i = 0; i < current_position; i++) {
		if (array[i] == elem) {
			return true;
		}
	}

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
	delete[] array;
}


SetIterator Set::iterator() const {
	return SetIterator(*this);
}
