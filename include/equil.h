/*
 * ECOS - Embedded Conic Solver.
 * Copyright (C) 2012-14 Alexander Domahidi [domahidi@control.ee.ethz.ch],
 * Automatic Control Laboratory, ETH Zurich.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Equilibration module (c) Eric Chu, March 2014 */

/**
 * used predominantly in preproc.c
 */

#include "ecos.h"

#if defined EQUIL_ITERS && (defined RUIZ_EQUIL || defined ALTERNATING_EQUIL )

#ifndef __EQUIL_H__
#define __EQUIL_H__

#include "glblopts.h"
#include "ecos.h"

/**
 * set_equilibration: This routine takes the workspace and sets 
 * the equilibration vectors.
 */
void set_equilibration(pwork *w);

/**
 * unset_equilibration: This routine takes the workspace and
 * undoes the equilibration.
 */
void unset_equilibration(pwork *w);


#endif
#endif
