#pragma once

template <typename T>
class  IIterator {
public:
	virtual ~IIterator() = default;
	virtual void next() = 0;
	virtual bool hasNext() const = 0;
	virtual T current() const = 0;
};