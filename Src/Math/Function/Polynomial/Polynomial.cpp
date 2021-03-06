/*
 * Copyright (c) 2020 Tobias Briones. All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 *
 * This file is part of Example Project: Numerical Differential Equations.
 *
 * This source code is licensed under the MIT License found in the
 * LICENSE file in the root directory of this source tree or at
 * https://opensource.org/licenses/MIT.
 */

#include "Polynomial.h"

Polynomial::Polynomial()
{
}

void Polynomial::addMonomial(int degreeX, int degreeY, double coefficient)
{
    monomials.push_back(Monomial(degreeX, degreeY, coefficient));
}

double Polynomial::eval(double x, double y)
{
    vector<Monomial>::iterator it;
    double result = 0;

    for (it = monomials.begin(); it != monomials.end(); it++)
    {
        Monomial monomial = (*it);
        result += monomial.eval(x, y);
    }
    return result;
}

string Polynomial::toString()
{
    vector<Monomial>::iterator it;
    string str = "";
    bool positive = false;

    for (it = monomials.begin(); it != monomials.end(); it++)
    {
        str += (*it).toString(positive);

        if (str != "")
        {
            positive = true;
        }
    }
    if (str == "")
    {
        str = "0";
    }
    return str;
}
