#include "stdafx.h"
#include "JobsScheduler.hpp"

JobsScheduler::JobsScheduler(IQueue<std::string> & underlyingContainer):
	m_jobs(underlyingContainer)
{
}


JobsScheduler::~JobsScheduler()
{
}

void JobsScheduler::addJob(const std::string & job)
{
	m_jobs.enqueue(job);
}

std::string JobsScheduler::getNextJob()
{
	return m_jobs.dequeue();
}
