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
 * CylindricalSegmentation.h
 *
 *  Created on: Oct 31, 2013
 *      Author: Christian Grefe, CERN
 */

#ifndef DDSEGMENTATION_CYLINDRICALSEGMENTATION_H
#define DDSEGMENTATION_CYLINDRICALSEGMENTATION_H

#include <DDSegmentation/Segmentation.h>

namespace dd4hep {
  namespace DDSegmentation {

    /// Segmentation base class describing a cylindrical grid segmentation
    class CylindricalSegmentation: public Segmentation {
    public:
      /// Destructor
      virtual ~CylindricalSegmentation();

    protected:
      /// Default constructor using an arbitrary type
      CylindricalSegmentation(const std::string& cellEncoding);
      /// Default constructor used by derived classes passing an existing decoder
      CylindricalSegmentation(const BitFieldCoder* decoder);
    };


  } /* namespace DDSegmentation */
} /* namespace dd4hep */
#endif // DDSEGMENTATION_CYLINDRICALSEGMENTATION_H
