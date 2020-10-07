#include <iostream>
#include <cstdlib>
using namespace std;
// define default capacity of the queue using MACRO (preprocessor directive)
#define SIZE 3 // SIZE has been given 3 for phase 1 testing
// Class for queue
class queue
{
	int *arr;   	// array to store queue elements
	int capacity;   // maximum capacity of the queue
	int front;  	// front points to front element in the queue (if any)
	int rear;   	// rear points to last element in the queue
	int count;  	// current size of the queue
public:
	queue(int size = SIZE);	 // constructor
	~queue();				   // destructor
	void dequeue(); // to remove the data from a queue from the first
	void enqueue(int x); // to update data from the user to the queue
	int peek(); // to check the front data of the queue
	int size(); // to check the size of the queue
	bool isEmpty(); // to check whether the queue is empty or not
	bool isFull(); // to check whether the queue is full or not
};
// Constructor to initialize queue
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}
// Destructor to free memory allocated to the queue
queue::~queue()
{
	delete[] arr;
}
// Utility function to remove front element from the queue
void queue::dequeue()
{
	// check for queue underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	cout << "Removing " << arr[front] << '\n';
	front = (front + 1) % capacity;
	count--;
}
// Utility function to add an item to the queue
void queue::enqueue(int item)
{
	// check for queue overflow
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	cout << "Inserting " << item << '\n';
	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
}
// Utility function to return front element in the queue
int queue::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	return arr[front];
}
// Utility function to return the size of the queue
int queue::size()
{
	return count;
}
// Utility function to check if the queue is empty or not
bool queue::isEmpty()
{
	return (size() == 0);
}
// Utility function to check if the queue is full or not
bool queue::isFull()
{
	return (size() == capacity);
}
