#include <iostream>
#include "typelist.h"
#include "typeset.h"
#include "toolset.h"
#include "mathapplyunitest.h"

using namespace std;
using namespace MathApply;

int main()
{

//if use typelist class template to calculate , we have to write as below
    cout <<TypeList<OneDimCalculate<double, double, sinPolicy>,
            TypeList<OneDimCalculate<double, double, sinPolicy>,
                    TypeList<OneDimCalculate<double, double, sinPolicy>,
                            TypeList<OneDimCalculate<double, double, sinPolicy>,
                                TypeList<OneDimCalculate<double, double, sinPolicy>, EndType> > > > >::Apply(0.5);

    //but if we use the MK_... macro , we can get a short function
    MathApplyUnitTest::TypeLister::VerifyEveryTypeList();
    MathApply::StaticCheck<Restricter< double,  int>::YES, int >::Check();
    return 0;
}
