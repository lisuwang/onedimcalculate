#ifndef TOOLSET_H_
#define TOOLSET_H_

//how  to check two types is same
namespace MathApply{
template <typename T, typename U>
class StaticCheckSameType{
public:
	static bool Check(T t){
		return checker_1(t);
	}
private:
	static bool checker_1(U u)
	{
		return true;
	}
};


template <typename T>
class IsClass{
public:

	typedef char One;
	typedef struct { char a[2];} Two;
	template<typename C>
    static One test(int C::*); 
    template<typename C>
    static Two test(...); /
	enum {YES = (sizeof(test<T>(0)) == 1) };
	enum {NO = !YES};
};

template <bool , typename RetT1, typename RetT2>
class IfElseThen{
public:
    typedef RetT2 ResultT;
};
template<typename RetT1, typename RetT2>
class IfElseThen<true, RetT1, RetT2>{
public:
    typedef RetT1 ResultT;
};

template<typename T>
class SelectTypeParam{
public:
    typedef T ArgT;
    typedef T RealOrginT;
    typedef const T ConstT;
    typedef T& RefT;
    typedef const T& ConstRefT;
};

template<typename T>
class SelectTypeParam<T&>{
public:
    typedef T& ArgT;
    typedef typename SelectTypeParam<T>::RealOrginT RealOrginT;
    typedef const T& ConstRefT;
    typedef T& RefT;
    typedef const T& ConstT;
};

template<typename T>
class SelectTypeParam<const T>{
public:
    typedef const T ArgT;
    typedef T RealOrginT;
    typedef const T ConstT;
    typedef const T& RefT;
    typedef const T& ConstRefT;
};

template<>
class SelectTypeParam<void>{
public:
    typedef void ArgT;
    typedef void RealOrginT;
    typedef void RefT;
    typedef const void ConstT;
    typedef void ConstRefT;
};

template <typename MoreAccurateT, typename NoAccurateT>
class Restricter{
};

template<typename T>
class Restricter<T, T>{
public:
    enum {YES = 1};
};

template<typename T>
class Restricter<const T, T>{
public:
    enum {YES = 1};
};

template <typename T>
class Restricter<const T& , T>{
public:
    enum {YES = 1};
};

template<typename T>
class Restricter<T&, T>{
public:
    enum {YES = 1};
};

template <typename T>
class Restricter<T*&, T*>{
public:
    enum {YES = 1};
};

template <typename T>
class Restricter<const T*, T*>{
public:
    enum {YES = 1};
};

//char , short, int, long long , float ,double, 
//in english , below types is inner type in C++ language, and these are some specialize class , welcome to append more specialize class
#define MK_RESTRICTER(ACCURATET, NOACCURATET) template <>\
class Restricter<ACCURATET, NOACCURATET>{\
public:\
enum {YES = 1};\
};

MK_RESTRICTER(double, float)
MK_RESTRICTER(double, int)
MK_RESTRICTER(double, unsigned int)
MK_RESTRICTER(double, long long)
MK_RESTRICTER(double, short int)
MK_RESTRICTER(double, char)

MK_RESTRICTER(float, int)
MK_RESTRICTER(float, unsigned int)
MK_RESTRICTER(float, long long)
MK_RESTRICTER(float, short int)
MK_RESTRICTER(float, char)

MK_RESTRICTER(int, short int )
MK_RESTRICTER(int, char)




template<bool, typename VerifiedT>
class StaticCheck{
};

template <typename VerifiedT>
class StaticCheck<true, VerifiedT>{
public:
    static void Check(){
    return;
    }
};
} //end namespace
#endif // TOOLSET_H_
