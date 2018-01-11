#ifndef TYPESET_H_
#define TYPESET_H_


#include <cmath>
namespace MathApply{
template <typename ResultTT, typename ParamTT,
            template<typename, typename >
                class ApplyPolicy>
class OneDimCalculate{
    public:
    typedef ResultTT ResultT;
    typedef ParamTT ParamT;
    static ResultT Apply(ParamT t){
        return ApplyPolicy<ResultT, ParamT>::Apply(t);
        }
};


#define CalculatePolicy(X) template<typename ResultT, typename ParamT> \
                                 class X##Policy{ \
                                 public: \
                                    static ResultT Apply(ParamT t){ \
                                        return std::X(t); \
                                    } \
                                 };



//in english, policy class can use the Macro
CalculatePolicy(sin)
CalculatePolicy(cos)
CalculatePolicy(tan)
CalculatePolicy(asin)
CalculatePolicy(atan)
CalculatePolicy(tolower)
CalculatePolicy(toupper)
CalculatePolicy(acos)
CalculatePolicy(abs)



//if anyone want to declare custom policy, you may write as below

//template<typename ResultT, typename ParamT>
//                                 class custPolicy{
//                                 public:
//                                    static ResultT Apply(ParamT t){
//                                        return t;
//                                    }
//
//};

template<typename ResultT, typename ParamT>
class noneTypePolicy{
    public:
          static ResultT Apply(ParamT t){
                 return t;
        }

};


}//end namespace
#endif // TYPESET_H_
