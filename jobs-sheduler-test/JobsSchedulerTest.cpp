#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <C:/code/projects/jobs-scheduler/jobs-scheduler/JobsScheduler.hpp>
#include <C:/code/projects/jobs-scheduler/jobs-scheduler/IQueue.hpp>
#include "IQueueMock.hpp"


namespace {

class JobsSchedulerTest : public ::testing::Test
{
public :

protected :

};

TEST_F(JobsSchedulerTest, addJob)
{
	IQueueMock<std::string> queueMock;
	JobsScheduler jobScheduler(queueMock);
	EXPECT_CALL(queueMock, enqueue(::testing::_)).Times(1);
	
	jobScheduler.addJob("first job");
}

TEST_F(JobsSchedulerTest, getNextJob)
{
	IQueueMock<std::string> queueMock;
	JobsScheduler jobScheduler(queueMock);
	EXPECT_CALL(queueMock, dequeue()).
		Times(1).
		WillOnce(::testing::Return("first job"));

	jobScheduler.getNextJob();
}

}

