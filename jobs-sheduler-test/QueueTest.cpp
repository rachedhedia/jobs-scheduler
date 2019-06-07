#include <gtest/gtest.h>
#include <C:/code/projects/jobs-scheduler/jobs-scheduler/Queue.hpp>
#include <C:/code/projects/jobs-scheduler/jobs-scheduler/List.hpp>


namespace {

class QueueTest : public ::testing::Test
{
public :

protected :

};

TEST_F(QueueTest, size)
{
	Queue<int> queue;
	ASSERT_EQ(queue.size(), 0);
}

TEST_F(QueueTest, enqueue)
{
	Queue<int> queue;
	int entry = 15;	
	queue.enqueue(entry);
	ASSERT_EQ(queue.size(), 1);
	ASSERT_EQ(queue.dequeue(), entry);
// TODO : fill in test body
}

TEST_F(QueueTest, dequeue)
{
	Queue<int> queue;
	int firstEntry = 15;
	int secondEntry = 25;
	queue.enqueue(firstEntry);
	queue.enqueue(secondEntry);
	ASSERT_EQ(queue.dequeue(), firstEntry);
	ASSERT_EQ(queue.dequeue(), secondEntry);
	ASSERT_EQ(queue.size(), 0);
}

}

