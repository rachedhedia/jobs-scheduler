#pragma once

template <class T>
class IQueue
{
public:
	virtual ~IQueue() {}

	virtual size_t size() const = 0;
	virtual void enqueue(const T & entry) = 0;
	virtual T dequeue() = 0;
;};

