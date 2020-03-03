#pragma once
//DO NOT INCLUDE SETITERATOR

//DO NOT CHANGE THIS PART
#define NULL_TELEM -11111
typedef int TElem;
class SetIterator;

class Set {
	//DO NOT CHANGE THIS PART
	friend class SetIterator;

    private:
		//TODO - Representation
		int array_size;
		int current_position;
		TElem *array;

		int getElementAtPositionX(int position_x) const {
			return array[position_x];
		}

    public:
        //implicit constructor
        Set();

        //adds an element to the set
        bool add(TElem e);			  /// FINISHED

        //removes an element from the set
        bool remove(TElem e);		 /// FINISHED

        //checks whether an element belongs to the set or not
        bool search(TElem elem) const; /// FINISHED

        //returns the number of elements;
        int size() const;		 /// FINISHED

        //check whether the set is empty or not;
        bool isEmpty() const;    /// FINISHED

        //return an iterator for the set
        SetIterator iterator() const;  /// FINISHED

        // destructor
        ~Set();					/// FINISHED

};
