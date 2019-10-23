/*******************************************************************************
 * Copyright (c) 2000, 2019 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#ifndef TR_PARAMETERSYMBOL_INCL
#define TR_PARAMETERSYMBOL_INCL

#include <stddef.h>
#include <stdint.h>
#include "il/DataTypes.hpp"
#include "il/OMRParameterSymbol.hpp"

namespace TR
{

class OMR_EXTENSIBLE ParameterSymbol : public OMR::ParameterSymbolConnector
   {

protected:

   ParameterSymbol(TR::DataType d, int32_t slot) :
      OMR::ParameterSymbolConnector(d, slot) { }

   ParameterSymbol(TR::DataType d, int32_t slot, size_t size) :
      OMR::ParameterSymbolConnector(d, slot, size) { }

private:

   // When adding another class to the heirarchy, add it as a friend here
   friend class OMR::ParameterSymbol;

   };

}

#endif