////////////////////////////////////////////////////////////////////////////////
// $Id$
// Author: juergen.mellinger@neurotechcenter.org
//
// $BEGIN_BCI2000_LICENSE$
// 
// This file is part of BCI2000, a platform for real-time bio-signal research.
// [ Copyright (C) 2000-2018: BCI2000 team and many external contributors ]
// 
// BCI2000 is free software: you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option) any later
// version.
// 
// BCI2000 is distributed in the hope that it will be useful, but
//                         WITHOUT ANY WARRANTY
// - without even the implied warranty of MERCHANTABILITY or FITNESS FOR
// A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with
// this program.  If not, see <http://www.gnu.org/licenses/>.
// 
// $END_BCI2000_LICENSE$
////////////////////////////////////////////////////////////////////////////////
#ifndef ANALYSIS_DATA_OBJECTS_INTERVAL_H
#define ANALYSIS_DATA_OBJECTS_INTERVAL_H

#include "SampleDataObject.h"

namespace AnalysisDataObjects {

class Event;

class Interval : public SampleDataObject
{
public:
  static AnalysisDataObject* create(Context*, const ExpressionParser::NodeList&);
  Interval(Context*, const Event* pTrigger, const Event* pResponse);
protected:
  int onEvalFlags() const override { return none; }
  bool onPostEvalSamples() override;
  std::string onSummary() const override;
private:
  const Event* mpEv1, *mpEv2;
};

}

#endif // ANALYSIS_DATA_OBJECTS_INTERVAL_H
