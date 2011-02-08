/***************************************************************************
                          manager.h  -  description
                             -------------------
    begin                : Thu Sep 20 2001
    copyright            : (C) 2001 by Michael Speck
    email                : kulkanie@gmx.net
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef __MANAGER_H
#define __MANAGER_H

#include "ltris.h"
#include "list.h"
#include "value.h"
#include "item.h"
#include "menu.h"
#include "hint.h"

/*
====================================================================
Actions generated by menu
====================================================================
*/
enum {
    ACTION_NONE = 0,
    ACTION_QUIT,
    ACTION_PLAY,
	ACTION_QUICK_HELP,
    ACTION_MAKE_STAT
};

/*
====================================================================
Load/delete background and create and link all menus
====================================================================
*/
void manager_create();
void manager_delete();
/*
====================================================================
Run menu until request sent
====================================================================
*/
int manager_run();
/*
====================================================================
Fade in/out background of menu
====================================================================
*/
void manager_fade( int type );
/*
====================================================================
Update screen without menu itself as this is shown next frame.
====================================================================
*/
void manager_show();

/*
====================================================================
Update set list when creating a new file for editor.
====================================================================
*/
void manager_update_set_list();

#endif