/*
 * avrdude - A Downloader/Uploader for AVR device programmers
 * Copyright (C) 2000, 2001, 2002, 2003  Brian S. Dean <bsd@bsdhome.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* $Id$ */

#ifndef __ppi_h__
#define __ppi_h__

#include "config.h"

/*
 * PPI registers
 */
enum {
  PPIDATA,
  PPICTRL,
  PPISTATUS
};


#if !defined(ppi_claim)
#  define ppi_claim(pgm)
#endif

#if !defined(ppi_release)
#  define ppi_release(pgm)
#endif

int ppi_get       (int fd, int reg, int bit);

int ppi_set       (int fd, int reg, int bit);

int ppi_clr       (int fd, int reg, int bit);

int ppi_getall    (int fd, int reg);

int ppi_setall    (int fd, int reg, int val);

int ppi_toggle    (int fd, int reg, int bit);

int ppi_open      (char * port);

void ppi_close    (int fd);

#endif


