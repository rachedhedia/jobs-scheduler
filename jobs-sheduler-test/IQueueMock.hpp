#ifndef IQUEUEMOCK_HPP
#define IQUEUEMOCK_HPP

#include <gmock/gmock.h>
#include <C:/code/projects/jobs-scheduler/jobs-scheduler/IQueue.hpp>

template<class T>
class IQueueMock : public IQueue<T>
{
public:
	MOCK_CONST_METHOD0_T(size, size_t());
	MOCK_METHOD1_T(enqueue, void(const T &));
	MOCK_METHOD0_T(dequeue, T());
};


#endif
