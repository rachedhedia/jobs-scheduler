#pragma once

#include <string>
#include "IQueue.hpp"


class JobsScheduler
{
public:
	JobsScheduler(IQueue<std::string> & underlyingContainer);
	~JobsScheduler();
	void addJob(const std::string &);
	std::string getNextJob();

private:
	IQueue<std::string> & m_jobs;
};

