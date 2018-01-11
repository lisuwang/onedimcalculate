#ifndef TYPELIST_H_
#define TYPELIST_H_
#include "typeset.h"
#include "toolset.h"
namespace MathApply{
class EndType;
template<typename T, typename TList = EndType>
class TypeList{
public:


	TypeList(void)
	{
	}

	~TypeList(void)
	{
	}

	typedef typename TList::ResultT ParamT;
	typedef typename T::ResultT ResultT;
	 static ResultT Apply(ParamT t){
		return  T::Apply( TList::Apply(t));
	}
};

	class EndType{
	};
	template<typename T>
	class TypeList<T, EndType>{
		public:
			typedef typename T::ResultT ResultT;
			typedef typename T::ParamT ParamT;
			static ResultT Apply(ParamT t){
				return  T::Apply(t);
			}
	};


#define POLICY(X) X##Policy
#define MK_ONEDIM_CONTINUE_CAL_0(RESULTT, PARAMT, X) OneDimCalculate<RESULTT, PARAMT, POLICY(X)>, EndType
#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_1(RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT1>::YES,SelectTypeParam<RESULTT1>::RefT,SelectTypeParam<RESULTT1>::ArgT>::ResultT,\
                                                                                            IfElseThen<IsClass<PARAMT1>::YES,SelectTypeParam<PARAMT1>::RefT,SelectTypeParam<PARAMT1>::ArgT>::ResultT,\
                                                                                             POLICY(X1)>, \
                                                                                             EndType>

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_2(RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT2>::YES, SelectTypeParam<RESULTT2>::RefT,SelectTypeParam<RESULTT2>::ArgT>::ResultT,\
                                                                                                IfElseThen<IsClass<PARAMT2>::YES, SelectTypeParam<PARAMT2>::RefT,SelectTypeParam<PARAMT2>::ArgT>::ResultT,\
                                                                                                 POLICY(X2)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_1(RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_3(RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT3>::YES, SelectTypeParam<RESULTT3>::RefT,SelectTypeParam<RESULTT3>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT3>::YES, SelectTypeParam<PARAMT3>::RefT,SelectTypeParam<PARAMT3>::ArgT>::ResultT,\
                                                                                                    POLICY(X3)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_2(RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_4(RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT4>::YES, SelectTypeParam<RESULTT4>::RefT,SelectTypeParam<RESULTT4>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT4>::YES, SelectTypeParam<PARAMT4>::RefT,SelectTypeParam<PARAMT4>::ArgT>::ResultT,\
                                                                                                    POLICY(X4)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_3(RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_5(RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT5>::YES, SelectTypeParam<RESULTT5>::RefT,SelectTypeParam<RESULTT5>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT5>::YES, SelectTypeParam<PARAMT5>::RefT,SelectTypeParam<PARAMT5>::ArgT>::ResultT,\
                                                                                                    POLICY(X5)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_4(RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_6(RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT6>::YES, SelectTypeParam<RESULTT6>::RefT,SelectTypeParam<RESULTT6>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT6>::YES, SelectTypeParam<PARAMT6>::RefT,SelectTypeParam<PARAMT6>::ArgT>::ResultT,\
                                                                                                    POLICY(X6)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_5(RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_7(RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT7>::YES, SelectTypeParam<RESULTT7>::RefT,SelectTypeParam<RESULTT7>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT7>::YES, SelectTypeParam<PARAMT7>::RefT,SelectTypeParam<PARAMT7>::ArgT>::ResultT,\
                                                                                                    POLICY(X7)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_6(RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_8(RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT8>::YES, SelectTypeParam<RESULTT8>::RefT,SelectTypeParam<RESULTT8>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT8>::YES, SelectTypeParam<PARAMT8>::RefT,SelectTypeParam<PARAMT8>::ArgT>::ResultT,\
                                                                                                    POLICY(X8)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_7(RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_9(RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT9>::YES, SelectTypeParam<RESULTT9>::RefT,SelectTypeParam<RESULTT9>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT9>::YES, SelectTypeParam<PARAMT9>::RefT,SelectTypeParam<PARAMT9>::ArgT>::ResultT,\
                                                                                                    POLICY(X9)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_8(RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_10(RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT10>::YES, SelectTypeParam<RESULTT10>::RefT,SelectTypeParam<RESULTT10>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT10>::YES, SelectTypeParam<PARAMT10>::RefT,SelectTypeParam<PARAMT10>::ArgT>::ResultT,\
                                                                                                    POLICY(X10)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_9(RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_11(RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT11>::YES, SelectTypeParam<RESULTT11>::RefT,SelectTypeParam<RESULTT11>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT11>::YES, SelectTypeParam<PARAMT11>::RefT,SelectTypeParam<PARAMT11>::ArgT>::ResultT,\
                                                                                                    POLICY(X11)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_10(RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_12(RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT12>::YES, SelectTypeParam<RESULTT12>::RefT,SelectTypeParam<RESULTT12>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT12>::YES, SelectTypeParam<PARAMT12>::RefT,SelectTypeParam<PARAMT12>::ArgT>::ResultT,\
                                                                                                    POLICY(X12)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_11(RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_13(RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT13>::YES, SelectTypeParam<RESULTT13>::RefT,SelectTypeParam<RESULTT13>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT13>::YES, SelectTypeParam<PARAMT13>::RefT,SelectTypeParam<PARAMT13>::ArgT>::ResultT,\
                                                                                                    POLICY(X13)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_12(RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_14(RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT14>::YES, SelectTypeParam<RESULTT14>::RefT,SelectTypeParam<RESULTT14>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT14>::YES, SelectTypeParam<PARAMT14>::RefT,SelectTypeParam<PARAMT14>::ArgT>::ResultT,\
                                                                                                    POLICY(X14)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_13(RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_15(RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT15>::YES, SelectTypeParam<RESULTT15>::RefT,SelectTypeParam<RESULTT15>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT15>::YES, SelectTypeParam<PARAMT15>::RefT,SelectTypeParam<PARAMT15>::ArgT>::ResultT,\
                                                                                                    POLICY(X15)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_14(RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >



#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_16(RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT16>::YES, SelectTypeParam<RESULTT16>::RefT,SelectTypeParam<RESULTT16>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT16>::YES, SelectTypeParam<PARAMT16>::RefT,SelectTypeParam<PARAMT16>::ArgT>::ResultT,\
                                                                                                    POLICY(X16)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_15(RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_17(RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT17>::YES, SelectTypeParam<RESULTT17>::RefT,SelectTypeParam<RESULTT17>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT17>::YES, SelectTypeParam<PARAMT17>::RefT,SelectTypeParam<PARAMT17>::ArgT>::ResultT,\
                                                                                                    POLICY(X17)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_16(RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_18(RESULTT18, PARAMT18, X18, RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT18>::YES, SelectTypeParam<RESULTT18>::RefT,SelectTypeParam<RESULTT18>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT18>::YES, SelectTypeParam<PARAMT18>::RefT,SelectTypeParam<PARAMT18>::ArgT>::ResultT,\
                                                                                                    POLICY(X18)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_17(RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >

#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_19(RESULTT19, PARAMT19, X19, RESULTT18, PARAMT18, X18, RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT19>::YES, SelectTypeParam<RESULTT19>::RefT,SelectTypeParam<RESULTT19>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT19>::YES, SelectTypeParam<PARAMT19>::RefT,SelectTypeParam<PARAMT19>::ArgT>::ResultT,\
                                                                                                    POLICY(X19)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_18(RESULTT18, PARAMT18, X18, RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >


#define MK_ONEDIM_CONTINUE_CAL_TYPELIST_20(RESULTT20, PARAMT20, X20, RESULTT19, PARAMT19, X19, RESULTT18, PARAMT18, X18, RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7,RESULTT6, PARAMT6, X6,RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) TypeList<OneDimCalculate<IfElseThen<IsClass<RESULTT20>::YES, SelectTypeParam<RESULTT20>::RefT,SelectTypeParam<RESULTT20>::ArgT>::ResultT,\
                                                                                                    IfElseThen<IsClass<PARAMT20>::YES, SelectTypeParam<PARAMT20>::RefT,SelectTypeParam<PARAMT20>::ArgT>::ResultT,\
                                                                                                    POLICY(X20)>,\
                                                                                            MK_ONEDIM_CONTINUE_CAL_TYPELIST_19(RESULTT19, PARAMT19, X19, RESULTT18, PARAMT18, X18, RESULTT17, PARAMT17, X17, RESULTT16, PARAMT16, X16, RESULTT15, PARAMT15, X15, RESULTT14, PARAMT14, X14, RESULTT13, PARAMT13, X13, RESULTT12, PARAMT12, X12, RESULTT11, PARAMT11, X11, RESULTT10, PARAMT10, X10, RESULTT9, PARAMT9, X9, RESULTT8, PARAMT8, X8, RESULTT7, PARAMT7, X7, RESULTT6, PARAMT6, X6, RESULTT5, PARAMT5, X5,RESULTT4, PARAMT4, X4,RESULTT3, PARAMT3, X3, RESULTT2, PARAMT2, X2, RESULTT1, PARAMT1, X1) >
} //end namespace
#endif // TYPELIST_H_
