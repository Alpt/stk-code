//  $Id: ScreenManager.h,v 1.3 2004/08/24 00:07:04 grumbel Exp $
//
//  TuxKart - a fun racing game with go-kart
//  Copyright (C) 2004 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_SCREENMANAGER_H
#define HEADER_SCREENMANAGER_H

#include "Screen.h"

/** Management class for the whole gameflow, this is where the
    main-loop is */
class ScreenManager
{
public:
  static ScreenManager* current() { return current_; }
private:
  static ScreenManager* current_;
  Screen* current_screen;
  Screen* next_screen;
public:
  ScreenManager();
  void run();
  /** Set the current active screen, the screen will get delete'ed
      automatically once it is no longer needed */
  void set_screen(Screen* screen);
  void shutdown();
};

#endif

/* EOF */
