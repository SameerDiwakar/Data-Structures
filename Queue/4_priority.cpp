#include <iostream>
using namespace std;

#define MAX 100

class PriorityQueue {
private:
    int arr[MAX]; 
    int size;    

public:
    PriorityQueue() { size = 0; }

    // Insert an element into the priority queue
    void push(int value) {
        if (size == MAX) {
            cout << "Queue overflow!\n";
            return;
        }

        // Insert the element at the end
        arr[size] = value;
        size++;

        // Sort the array to maintain priority order (Descending order for max-heap)
        for (int i = size - 1; i > 0; i--) {
            if (arr[i] > arr[i - 1]) {
                swap(arr[i], arr[i - 1]);
            } else {
                break;
            }
        }
    }

    // Remove the highest priority element
    void pop() {
        if (size == 0) {
            cout << "Queue underflow!\n";
            return;
        }
        size--; // Reduce size (highest priority element is at index 0)
    }

    // Get the highest priority element
    int top() {
        if (size == 0) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[0]; // Highest priority element (max)
    }

    // Check if queue is empty
    bool empty() {
        return size == 0;
    }

    // Display queue contents
    void display() {
        if (size == 0) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Priority Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    pq.display();
    
    cout << "Top element: " << pq.top() << endl;

    pq.pop();
    pq.display();

    return 0;
}
