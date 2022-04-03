/*
 * ConvertableLinkedList.h
 *
 *  Created on: Apr. 27, 2021
 *  Author: Main İdal Aslan
*/

#ifndef CONVERTABLELINKEDLIST_H_
#define CONVERTABLELINKEDLIST_H_

#include <iostream>
#include <cassert>
#include "LinkedList.h"

namespace std{

	template <typename M>
	class  ConvertableLinkedList{
	private:
		LinkedList<LinkedList<M>> list;
		LLNode<LinkedList<M>>* current = NULL;
		void convertToCircular();
		void convertToSingly();
	public:
		void insertToLast(const M&);
		void insertAtIndex(const M&, int);
		int findNext(const M&);
		void display();
	};

template <typename M>
void ConvertableLinkedList<M> :: convertToCircular(){
    LLNode<LinkedList<M>>* list_head = list.getHead();
    LLNode<LinkedList<M>>* list_tail = list.getTail();
    list_tail->next = list_head;
}

template <typename M>
void ConvertableLinkedList<M> :: convertToSingly(){
    LLNode<LinkedList<M>>* list_tail = list.getTail();
    list_tail->next = NULL;
}

template <typename M>
void ConvertableLinkedList<M> :: insertToLast(const M& value){
    LinkedList<M> new_list;
    new_list.insertLast(value);
    list.insertLast(new_list);
}

template <typename M>
void ConvertableLinkedList<M> :: insertAtIndex(const M& value, int list_index){
    int index_counter = 0;
    LLNode<LinkedList<M>>* list_cursor;

    //if the entered index number is less than 0 or equal to 0, it inserts the parameter value at the first node.
    if (list_index <= 0)
    {
        list_cursor = list.getHead();
        list_cursor->data.insertLast(value);
    }

    //if the entered index number is greater than or equal to the list index number, it inserts the parameter value at the last node.
    else if (list_index >= (list.length() - 1))
    {
        list_cursor = list.getTail();
        list_cursor->data.insertLast(value);
    }

    else
    {
        list_cursor = list.getHead();
        while (index_counter != list_index)
        {
            list_cursor = list_cursor->next;
            index_counter++;
        }
        list_cursor->data.insertLast(value);
    }
}

template <typename M>
int ConvertableLinkedList<M> :: findNext(const M& value){
	//to not initialize them every time the function is called, these values must be kept after the function ends.
	static int list_index = 0;
    static bool found = false;
	static M last_value;

    int counter=0, length = list.length();
    LLNode<LinkedList<M>>* list_cursor;
    this->convertToCircular();

    //It will start to search the value from the current node if it exists.
    //Otherwise it will start to search from the beginning of the list
    if (current != NULL)
        list_cursor = current;
    else
        list_cursor = list.getHead();

    //It will search the value in all lists.
    while (counter < length)
    {
        if (list_cursor->data.search(value) != NULL && (!found || last_value != value))  //Means the last value is found in a list and the current node already points the list address of the last found value so if we are looking for the same value in the same list, it will jump to the next list.
        {
			found = true;
			last_value = value;
            current = list_cursor;
            this->convertToSingly();
            return list_index;
        }

        found = false;
		list_cursor = list_cursor->next;
		list_index = (list_index + 1) % length;
        counter++;
    }

    //If the last value is found in just one list and this value is searched by the user again, then we need the following if statement.
    //Since, the algorithm above does not search for the same value in the same list.
    if (last_value == value)
		return list_index;

    this->convertToSingly();
    return -1;
}

template <typename M>
void ConvertableLinkedList<M> :: display(){
    LLNode<LinkedList<M>>* cursor = list.getHead();
    while(cursor != NULL)
    {
        cout << cursor->data << endl;
        cursor = cursor->next;
    }
}

}
#endif
