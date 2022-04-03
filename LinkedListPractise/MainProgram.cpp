#include <iostream>
#include "ConvertableLinkedList.h"

using namespace std;

int main(void)
{
	int choice, selection, index, value;
	ConvertableLinkedList<int> m;

	cout << "Case 1 - Insert value to last\nCase 2 - Insert value at\nCase 3 - Find the value\nCase 4 - Display\nCase 5 - Quit";

	do{
		cout << "\n\nSelect a case: ";
        cin >> choice;
        switch (choice){
            case 1:
                cout << "Enter the value: "; cin >> value;
                m.insertToLast(value);
                break;
            case 2:
                cout << "Enter the value: "; cin >> value;
                cout << "Enter the index: "; cin >> index;
                m.insertAtIndex(value, index);
                break;
            case 3:
                cout << "Enter the value you want to search: "; cin >> value;
                index = m.findNext(value);
                if (index != -1)
                    cout << "Your value found in index " << index;
                else
                    cout << "Your value is not in the list";
                break;
            case 4:
                cout << "List printed:\n";
                m.display();
                break;
            case 5:
                cout << "Goodbye\n";
                choice = 5;
                break;
            default:
                cout << "Please, enter a proper case number";
                break;
			}
	}while(choice != 5);

	return 0;
}
