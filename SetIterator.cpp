#include "SetIterator.h"
#include "Set.h"


SetIterator::SetIterator(const Set& m) : set(m)
{
	//TODO - Implementation
	position = 0;
}


void SetIterator::first() {
	//TODO - Implementation
	position = 0;
}


void SetIterator::next() {
	//TODO - Implementation
	position++;
}


TElem SetIterator::getCurrent() {
	//TODO - Implementation
	return set.getElementAtPositionX(position);
}

bool SetIterator::valid() const {
	//TODO - Implementation
	if (position == set.size())
		return false;
	return true;
}
