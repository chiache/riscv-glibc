/* O_*, F_*, FD_* bit values for Linux/x86.
   Copyright (C) 2001-2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _FCNTL_H
# error "Never use <bits/fcntl.h> directly; include <fcntl.h> instead."
#endif

/* Not necessary, we always have 64-bit offsets.  */
#define F_GETLK64	5	/* Get record locking info.  */
#define F_SETLK64	6	/* Set record locking info (non-blocking).  */
#define F_SETLKW64	7	/* Set record locking info (blocking).	*/

/* Include generic Linux declarations.  */
#include <bits/fcntl-linux.h>
