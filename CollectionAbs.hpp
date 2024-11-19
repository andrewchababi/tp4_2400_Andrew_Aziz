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
	virtual std::unique_ptr<IIterator<T>> creerIterateur() const = 0;
};

template <typename T>
class Collection : public CollectionAbs<T> {
private:
	std::vector<T> data;

	class VectorIterator : public IIterator<T> {
	private:
		const std::vector<T>& collection;
		size_t index;
	
	public:
		explicit VectorIterator(const std::vector<T>& coll) : collection(coll), index(0) {};

		void next() override {
			index++;
		}

		bool hasNext() const override {
			return index < collection.size();
		}

		T current() const override {
			if ( index >= collection.size()) {
				throw std::out_of_range("Iterator hors portée");
			}
			return collection[index];
		}
	};

public:

	Collection() = default;

	Collection(const std::vector<T>& init_data) : data(init_data) {}


	void ajouter(const T& element) {
		data.push_back(element);
	}

	void retirer(const T& element) {
		auto it = std::remove(data.begin(), data.end(), element);
		if (it != data.end()) {
			data.erase(it, data.end());
		}
	}

	std::unique_ptr<IIterator<T>> creerIterateur() const override {
		return std::make_unique<VectorIterator>(data);
	}

};

