
#include "mathapplyunitest.h"
#include "typelist.h"
//#include <iostream>
using namespace MathApply;
namespace MathApplyUnitTest{
 void TypeLister::VerifyEveryTypeList(std::ostream& os){
        VerifyTypeList_1(os);
        VerifyTypeList_2(os);
        VerifyTypeList_3(os);
        VerifyTypeList_4(os);
        VerifyTypeList_5(os);
        VerifyTypeList_6(os);
        VerifyTypeList_7(os);
        VerifyTypeList_8(os);
        VerifyTypeList_9(os);
        VerifyTypeList_10(os);
        VerifyTypeList_11(os);
        VerifyTypeList_12(os);
        VerifyTypeList_13(os);
        VerifyTypeList_14(os);
        VerifyTypeList_15(os);
        VerifyTypeList_16(os);
        VerifyTypeList_17(os);
        VerifyTypeList_18(os);
        VerifyTypeList_19(os);
        VerifyTypeList_20(os);

    };
     void TypeLister::VerifyTypeList_1(std::ostream& os ){
        os <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_1(double, double, sin)::Apply(0.5)<<std::endl;
        NoneType tester;
        MK_ONEDIM_CONTINUE_CAL_TYPELIST_1(NoneType&, NoneType, noneType)::Apply(tester);
    }
  void TypeLister::VerifyTypeList_2(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_2(double, double, sin,
                                                 double, double, cos)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_3(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_3(double, double, sin,
                                                 double, double, cos,
                                                 double, double, tan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_4(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_4(double, double, sin,
                                                 double, double, cos,
                                                 double, double, tan,
                                                 double, double, asin)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_5(std::ostream& os ){
            std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_5(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, asin,
                                      double, double, asin)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_6(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_6(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_7(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_7(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_8(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_8(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_9(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_9(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_10(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_10(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_11(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_11(double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_12(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_12(double, double, sin,
                                        double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_13(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_13(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }

  void TypeLister::VerifyTypeList_14(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_14(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_15(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_15(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_16(std::ostream& os ){
std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_16(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_17(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_17(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_18(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_18(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_19(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_19(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }
  void TypeLister::VerifyTypeList_20(std::ostream& os ){
        std::cout <<MK_ONEDIM_CONTINUE_CAL_TYPELIST_20(double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                   double, double, sin,
                                      double, double, cos,
                                      double, double, tan,
                                      double, double, acos,
                                      double, double, asin,
                                      double, double, abs,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan,
                                      double, double, atan)::Apply(0.5)<<std::endl;
    }


}

