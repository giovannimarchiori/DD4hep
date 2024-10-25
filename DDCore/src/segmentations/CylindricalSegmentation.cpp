//==========================================================================
//  AIDA Detector description implementation 
//--------------------------------------------------------------------------
// Copyright (C) Organisation europeenne pour la Recherche nucleaire (CERN)
// All rights reserved.
//
// For the licensing terms see $DD4hepINSTALL/LICENSE.
// For the list of contributors see $DD4hepINSTALL/doc/CREDITS.
//
//==========================================================================
/*
 * CylindricalSegmentation.cpp
 *
 *  Created on: Oct 31, 2013
 *      Author: Christian Grefe, CERN
 */

#include <DDSegmentation/CylindricalSegmentation.h>

namespace dd4hep {
  namespace DDSegmentation {

    /// default constructor using an encoding string
    CylindricalSegmentation::CylindricalSegmentation(const std::string& cellEncoding) :
      Segmentation(cellEncoding) {
    }

    /// Default constructor used by derived classes passing an existing decoder
    CylindricalSegmentation::CylindricalSegmentation(const BitFieldCoder* decode) :
      Segmentation(decode) {
    }

    /// destructor
    CylindricalSegmentation::~CylindricalSegmentation() {

    }

  } /* namespace DDSegmentation */
} /* namespace dd4hep */
