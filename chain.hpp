
namespace itertools
{
	template <class T, class W>
	class chain
	{
	private:
		T _firstKind;
		W _secondKind;
		
		template <typename U, typename V>
		class iterator
		{
		public:
			U itrU;
			V itrV;
			bool flag;
			iterator(U it1, V it2) : itrU(it1), itrV(it2), flag(true) {}
		};
	public:

		chain(T t, W w) : _firstKind(t), _secondKind(w) {}

		auto begin()
		{
			return _firstKind.begin();
		}

		auto end()
		{ 
			return _secondKind.end();
		}

	};

};