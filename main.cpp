#include <iostream>
#include "Queue.h"
using namespace std;

void displayMenu() 
{
    cout << "------------------\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Peek\n";
    cout << "4. Size\n";
    cout << "5. Print queue\n";
    cout << "6. Clear queue\n";
    cout << "7. Exit\n";
    cout << "------------------\n";
    cout << "Select option: ";
}

int main()
{
    int capacity;
    cout << "\nEnter queue capacity: ";
    cin >> capacity;

    Queue q(capacity);

    int choice;
    int value;

    do
    {
        cout << "\n------------------\n";
        cout << "Queue Capacity: " << capacity << endl;
        displayMenu();
        cin >> choice;
        try
        {
            switch (choice)
            {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                cout << "The value [" << value << "] has been enqueued succesfully.\n";
                break;

            case 2:
                value = q.dequeue();
                cout << "The value [" << value << "] has been dequeued succesfully.\n";
                break;
            
            case 3:
                cout << "Front element: " << q.peek() << endl;
                break;

            case 4:
                cout << "Current size: " << q.size() << endl;
                break;
            
            case 5:
                q.print();
                break;
            
            case 6:
                q.clear();
                cout << "Queue cleared.\n";
                break;

            case 7:
                cout << "Exiting program. See you next time!\n";
                break;
            
            default:
                cout << "Invalid option.\n";
                break;
            }
        }

        catch(const std::exception& err)
        {
            cout << "Error: " << err.what() << '\n';
        }
        
    } while (choice != 7);
    

    return 0;
}