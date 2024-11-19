#pragma once


#include <string>
#include <vector>
#include <memory>
#include <iterator>
#include "IIterator.hpp"


template <typename T>
class CollectionAbs {
public:
	virtual ~CollectionAbs() = default;
	virtual std::unique_ptr<IIterator<T>> creeIterateur() const = 0;
};

template <typename T>
class Collection : public CollectionAbs<T> {
private:
	std::vector<T> data;

	class VectorIterator : public IIterator<T> {
	private:
		std::vector<T> collection;
		size_t index;
	
	public:
		explicit VectorIterator(const std::vector<T>& coll) : collection(coll), index(0) {};

		void next() override {
			index++;
		}

		bool hasNext() override {
			return index < collection.size();
		}

		T current() const override {
			if (index < 0 || index >= collection.size()) {
				throw std::out_of_range("Iterator hors portée");
			}
			return collection[index];
		}
	};

public:

};

