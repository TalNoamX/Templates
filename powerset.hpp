#pragma once
namespace itertools
{

	template <class T>
	class powerset
	{

		template <class E>
		class iterator // inside class iterator.
		{
		public:
			E _current;

			iterator(E it) : _current(it) {}

			//T &operator*()
			//{
			//	return _current;
			//}

			//// ++i;
			//iterator &operator++()
			//{
			//	_current++;
			//	return *this;
			//}

			//bool operator!=(const iterator &it) const
			//{
			//	return _current != it._current;
			//}

		};
	public:

		T _start;

		powerset(T start) : _start(start) {}

		auto begin()
		{
			return this->_start.begin();
		}

		auto end()
		{
			return this->_start.begin();
		}
	};
};