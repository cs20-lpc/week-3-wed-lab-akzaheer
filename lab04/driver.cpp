// TO DO: Implement the driver main() function to test your code.

#include <iostream>
#include "LinkedList.hpp"
#include <string>
using namespace std;

int main(){

    LinkedList<int> list1;       // make list called list

    cout << "is list empty? (1 if true and 0 if false): " << list1.isEmpty() << endl;    // check if empty to show it
    cout << "length right now is: " << list1.getLength() << endl; // show lenght

    list1.append(67);
    list1.append(-67);               // append values; basically adding it to the list
    list1.append(670);

    cout << "list now is: " << list1 << endl;                    // show list and legnth now
    cout << "length now is: " << list1.getLength() << endl;

    cout << "Element at index 2: " << list1.getElement(2) << endl; // show the value at index 2

    list1.replace(2,99);
    cout << "after replacing value the list is: " << list1 << endl;      // replace index 2 with 99

    cout << "is list empty before clearing? (1 if true and 0 if false): " << list1.isEmpty() << endl;    // check if empty to show it
    list1.clear();                                               // clear it
    cout << "is list empty after clearing? (1 if true and 0 if false): " << list1.isEmpty() << endl;    // check if empty to show it


//*******************doing a new one with list of strings for testing */

    LinkedList<string> list2;       // make list called list

    cout << "is list empty? (1 if true and 0 if false): " << list2.isEmpty() << endl;    // check if empty to show it
    cout << "length right now is: " << list2.getLength() << endl; // show lenght

    list2.append("lebron");
    list2.append("jordan");               // append values; basically adding it to the list
    list2.append("shaq");

    cout << "list now is: " << list2 << endl;                    // show list and legnth now
    cout << "length now is: " << list2.getLength() << endl;

    cout << "Element at index 2: " << list2.getElement(2) << endl; // show the value at index 2

    list2.replace(2,"bronny");
    cout << "after replacing value the list is: " << list2 << endl;      // replace index 2 with bronnny

    cout << "is list empty before clearing? (1 if true and 0 if false): " << list2.isEmpty() << endl;    // check if empty to show it
    list2.clear();                                               // clear it
    cout << "is list empty after clearing? (1 if true and 0 if false): " << list2.isEmpty() << endl;    // check if empty to show it

    return 0;
}