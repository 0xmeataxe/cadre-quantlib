
/* 
Copyright (C) 2000 Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
See the file LICENSE.TXT for information on usage and distribution
Contact ferdinando@ametrano.net if LICENSE.TXT was not distributed with this file
*/

#include "bsmeuropeanoption.h"
#include "finitedifferencemodel.h"
#include "cranknicolson.h"

QL_BEGIN_NAMESPACE(QuantLib)

QL_BEGIN_NAMESPACE(Pricers)

QL_USING(PDE,FiniteDifferenceModel)
QL_USING(PDE,CrankNicolson)
QL_USING(Operators,TridiagonalOperator)

double BSMEuropeanOption::value() const {
	if (!hasBeenCalculated) {
		FiniteDifferenceModel<CrankNicolson<TridiagonalOperator> > model(theOperator);
		model.rollback(thePrices,theResidualTime,0.0,theTimeSteps);
		theValue = valueAtCenter(thePrices);
	}
	return theValue;
}


QL_END_NAMESPACE(Pricers)

QL_END_NAMESPACE(QuantLib)
