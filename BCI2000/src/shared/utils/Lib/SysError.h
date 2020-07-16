/////////////////////////////////////////////////////////////////////////////
// $Id: SysError.h 5061 2015-10-19 21:45:44Z mellinger $
// Author: juergen.mellinger@uni-tuebingen.de
// Description: A class for OS error codes and messages.
//
// $BEGIN_BCI2000_LICENSE$
//
// This file is part of BCI2000, a platform for real-time bio-signal research.
// [ Copyright (C) 2000-2012: BCI2000 team and many external contributors ]
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
/////////////////////////////////////////////////////////////////////////////
#ifndef TINY_SYSERROR_H
#define TINY_SYSERROR_H

#include <string>
#include "Uncopyable.h"

namespace Tiny
{

class SysError : private Uncopyable
{
 public:
  SysError(); // This constructor obtains the last error code.
  SysError( long inErrorCode )
  : mCode( inErrorCode )
  {}
  // Properties
  long        Code() const
              { return mCode; }
  const char* Message( void* = 0 ) const;

 private:
  long mCode;
  mutable std::string mMessage;
};

} // namespace

using Tiny::SysError;

#endif // TINY_SYSERROR_H