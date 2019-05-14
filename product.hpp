#pragma once
namespace itertools
{
	template <class T, class W>
	class product
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
			iterator(U u, V v) : itrU(u), itrV(v), flag(true) {}
		};
	public:

		product(T t, W w) : _firstKind(t), _secondKind(w) {}

		auto begin()
		{
			return _firstKind.begin();
		}

		auto end()
		{
			return _firstKind.end();
		}

	};

};