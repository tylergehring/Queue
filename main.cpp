

#include"queue.h"


int main() {

	Queue<int> q;
	q.push(1);
	q.push(2);
	q.print();
	int t = q.getFront();
	cout << "T= " << t << endl;
	cout << q.isEmpty() << endl;

}