#pragma once

#include "List.hpp"
#include "IQueue.hpp"
#include <vector>

template<class T>
class Queue : public List<T>, public IQueue<T>
{
public:	
	
	~Queue() {}	
	
	size_t size() const
	{
		return m_container.size();
	}

	void enqueue(const T & entry) override
	{
		m_container.push_back(entry);
	}

	T dequeue() override
	{		
		T firstElement = m_container.front();

		if (m_container.size() == 1)
			m_container.clear();
		else
		{
			std::vector<T> subcontainer(m_container.begin() + 1, m_container.end());
			m_container.swap(subcontainer);
		}			

		return firstElement;
	}

private:
	std::vector<T> m_container;
};

