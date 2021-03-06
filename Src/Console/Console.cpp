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

#include "Console.h"

void printHeader()
{
    cout << "Example Project - Numerical Differential Equations v" << APP_VERSION << endl;
    cout << "Copyright (C) Tobias Briones. All rights reserved." << endl << endl;
}

void clear()
{
    // If it doesn't work, you have in total three options to clear the console

    system("cls");
    //cout << "\033[2J\033[1;1H";
    //cout << endl;

    printHeader();
}
