
/*
 * Copyright (C) 2000-2001 QuantLib Group
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.org/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, please email quantlib-users@lists.sourceforge.net
 * The license is also available at http://quantlib.org/LICENSE.TXT
 *
 * The members of the QuantLib Group are listed in the Authors.txt file, also
 * available at http://quantlib.org/group.html
*/

/*! \file grid.hpp
    \brief Grid constructor for finite differences pricers

    \fullpath
    ql/InterestRateModelling/%grid.hpp
*/

// $Id$


#ifndef quantlib_interest_rate_modelling_grid_h
#define quantlib_interest_rate_modelling_grid_h

#include "ql/InterestRateModelling/onefactormodel.hpp"

namespace QuantLib {

    namespace InterestRateModelling {

        class Grid : public Array {
          public:
            Grid(Size gridPoints,
                 double initialCenter,
                 double strikeCenter,
                 Time residualTime,
                 Time timeDelay,
                 const OneFactorModel& model);
            double dx() { return dx_;}
            Size index() const {return index_;}
            Size safeGridPoints(Size gridPoints, Time residualTime) const;
          private:
            void initialize(Size gridPoints,
                            double initialCenter,
                            double strikeCenter,
                            Time residualTime,
                            Time timeDelay,
                            const OneFactorModel& model);
            double dx_;
            Size index_;

        };
    }

}

#endif
