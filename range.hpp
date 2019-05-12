
namespace itertools
{

	template <class T>
	class range 
	{
	private:
		T _start; // generic start, end
		T _end;

		
		class iterator // inside class iterator.
		{
		public:
			T _current;

			iterator(T it) : _current(it) {}

			T &operator*()
			{
				return _current;
			}

			// ++i;
			iterator &operator++()
			{
				_current++;
				return *this;
			}

			bool operator!=(const iterator &it) const
			{
				return _current != it._current;
			}

		};
	public:
		range(T start, T end) : _start(start), _end(end) {}

		iterator  begin()
		{
			return iterator{ this->_start };
		}

		iterator  end()
		{
			return iterator{ this->_end };
		}
	};
};