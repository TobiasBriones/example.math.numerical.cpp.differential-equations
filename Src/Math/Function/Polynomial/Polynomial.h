/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once
#include <stdexcept>
#include <string>
#include <vector>
#include "Monomial.h"

using std::runtime_error;
using std::string;
using std::to_string;
using std::vector;

/// <summary>
/// Defines a polynomial. It consists of two-variable monomials.
/// </summary>
class Polynomial
{

private:
	vector<Monomial> monomials;

public:
	Polynomial();

	void addMonomial(int, int, double);
	double eval(double, double);
	string toString();

};
