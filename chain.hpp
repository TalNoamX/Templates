#pragma once
namespace itertools
{
	template <class T, class W>
	class chain
	{

		template <class U, class V>
		class iterator
		{
		public:
			U itrU;
			V itrV;
	
			iterator(U it1, V it2) : itrU(it1), itrV(it2) {}
		};

	public:
	
		T _firstKind;
		W _secondKind;

		chain(T t, W w) : _firstKind(t), _secondKind(w) {}

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