//
//
//template <typename X, typename Y>
//std::ostream &operator<<(std::ostream os, std::pair<X, Y> p) { os << p.first << "," << p.second; 
//return  = os;
//
//
//namespace itertools
//{
//	template <class T, class W>
//	class zip
//	{
//	private:
//		T _firstKind;
//		W _secondKind;
//
//		template <typename U, typename V>
//		class iterator
//		{
//		public:
//			U itrU;
//			V itrV;
//			bool flag;
//			iterator(U u, V v) : itrU(u), itrV(v), flag(true) {}
//		};
//	public:
//
//		zip(T t, W w) : _firstKind(t), _secondKind(w) {}
//
//		auto begin()
//		{
//			return _firstKind.begin();
//		}
//
//		auto end()
//		{
//			return _secondKind.end();
//		}
//
//	};
//
//};