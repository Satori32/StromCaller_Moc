#include <stdio.h>
#include <stdint.h>

struct StromCaller {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	//type H = NULL;
	typedef void* H;
	//type Handle = H;
	const void* Address = NULL;
	const Type* Pointer = NULL;
	H Handle;
	bool B;//ano sys.
};

template<class T,T X,class H,H Y,void* A>
StromCaller ConstructStromCaller<T, A>() {
	StromCaller S = { T,H,A,X,Y };

	return S;
}