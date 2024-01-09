//------------------------------------------------------------------------
//  Headers / Global Vars
//------------------------------------------------------------------------
//
//  Copyright (C) 2021-2022 The OBSIDIAN Team
//  Copyright (c) 2009-2017  Andrew J Apted
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
//------------------------------------------------------------------------

#ifndef __QSAVETEX_MAIN_H__
#define __QSAVETEX_MAIN_H__

/* ---- headers ---- */

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <string>
#include <vector>

#include "u_assert.h"
#include "u_endian.h"
#include "u_file.h"
#include "u_macro.h"
#include "u_type.h"
#include "u_util.h"

void LogPrintf(const char *str, ...);

void FatalError(const char *str, ...);

#endif  // __QSAVETEX_MAIN_H__

//--- editor settings ---
// vi:ts=2:sw=2:expandtab
