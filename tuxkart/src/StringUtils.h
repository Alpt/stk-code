//  $Id: StringUtils.h,v 1.2 2004/08/24 00:07:04 grumbel Exp $
//
//  TuxKart - a fun racing game with go-kart
//  Copyright (C) 2004 Steve Baker <sjbaker1@airmail.net>,
//                     Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_STRING_UTILS_H
#define HEADER_STRING_UTILS_H

#include <string>

namespace StringUtils {

bool has_suffix(const std::string& lhs, const std::string rhs);

/** Return the filename part of a path */
std::string basename(const std::string& filename);

std::string without_extension(const std::string& filename);
std::string extension(const std::string& filename);

} // namespace StringUtils

#endif

/* EOF */
