#include"D:\project\数据结构模版\Vector\Vector\template-of-Vector\Vector.hpp"

template <typename T> class Stack : public Vector<T> {
public:
	void push(T const& e) {
		this->insert(this->_size, e);
	}
	T pop() {
		return this->remove(this->_size - 1);
	}
	T& top() {
		return (*this)[this->_size - 1];
	}
};
