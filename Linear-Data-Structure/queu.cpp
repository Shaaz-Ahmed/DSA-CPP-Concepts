// Queue:
// Queue is a linear data structure it store the list of items linearly
// queue insertion is done by one end and deletion is done by other end only
// we use FIFO in Queue (First in first out) the element which get first it will serve first

// in queue we will keep two pointer front and back (like city bus)
// the element will insert from the back and deletion should be from front

// queue is having 4 operation
// 1. enqueue() : It is used to insert the element
// 2. dequeue() : It is used to delete the element from front
// 3. peek() : it tells us that which is the first value
// 4. empty() : used to tell that the queue is empty or not


// first the initilization of queue if -1 front and back for both pointer
// front will remain at same position but the back will get increased because queue insert element from back
// initially the front and back will be on -1 it means no element it is empty
//  1     2   3    4   5
// front              back

// 1    2   3   4   5
// front            back to dequeue we have to make front ++

// if front > back then queue is empty
