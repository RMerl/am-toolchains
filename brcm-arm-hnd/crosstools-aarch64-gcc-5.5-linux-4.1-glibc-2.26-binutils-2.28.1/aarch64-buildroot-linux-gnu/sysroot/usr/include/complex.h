/* Copyright (C) 1997-2017 Free Software Foundation, Inc.
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

/*
 *	ISO C99:  7.3 Complex arithmetic	<complex.h>
 */

#ifndef _COMPLEX_H
#define _COMPLEX_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#include <bits/libc-header-start.h>

/* Get general and ISO C99 specific information.  */
#include <bits/mathdef.h>

/* Gather machine-dependent _FloatN type support.  */
#include <bits/floatn.h>

__BEGIN_DECLS

/* We might need to add support for more compilers here.  But since ISO
   C99 is out hopefully all maintained compilers will soon provide the data
   types `float complex' and `double complex'.  */
#if __GNUC_PREREQ (2, 7) && !__GNUC_PREREQ (2, 97)
# define _Complex __complex__
#endif

#define complex		_Complex

/* Narrowest imaginary unit.  This depends on the floating-point
   evaluation method.
   XXX This probably has to go into a gcc related file.  */
#define _Complex_I	(__extension__ 1.0iF)

/* Another more descriptive name is `I'.
   XXX Once we have the imaginary support switch this to _Imaginary_I.  */
#undef I
#define I _Complex_I

#if defined __USE_ISOC11 && __GNUC_PREREQ (4, 7)
/* Macros to expand into expression of specified complex type.  */
# define CMPLX(x, y) __builtin_complex ((double) (x), (double) (y))
# define CMPLXF(x, y) __builtin_complex ((float) (x), (float) (y))
# define CMPLXL(x, y) __builtin_complex ((long double) (x), (long double) (y))
#endif

#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define CMPLXF128(x, y) __builtin_complex ((_Float128) (x), (_Float128) (y))
#endif

/* The file <bits/cmathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */

#define __MATHCALL(function, args)	\
  __MATHDECL (_Mdouble_complex_,function, args)
#define __MATHDECL(type, function, args) \
  __MATHDECL_1(type, function, args); \
  __MATHDECL_1(type, __CONCAT(__,function), args)
#define __MATHDECL_1(type, function, args) \
  extern type __MATH_PRECNAME(function) args __THROW

#define _Mdouble_ 		double
#define __MATH_PRECNAME(name)	name
#include <bits/cmathcalls.h>
#undef	_Mdouble_
#undef	__MATH_PRECNAME

/* Now the float versions.  */
#ifndef _Mfloat_
# define _Mfloat_		float
#endif
#define _Mdouble_ 		_Mfloat_
#define __MATH_PRECNAME(name)	name##f
#include <bits/cmathcalls.h>
#undef	_Mdouble_
#undef	__MATH_PRECNAME

#if (__HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !defined _LIBC)) \
     && __GLIBC_USE (IEC_60559_TYPES_EXT)
# ifndef _Mfloat128_
#  define _Mfloat128_		_Float128
# endif
/* GCC < 7 requires extra convincing to expose a complex float128 type.  */
# ifdef __CFLOAT128
#  undef _Mdouble_complex_
#  define _Mdouble_complex_	__CFLOAT128
# endif
# define _Mdouble_		_Mfloat128_
# define __MATH_PRECNAME(name)	name##f128
# include <bits/cmathcalls.h>
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef _Mdouble_complex_
#endif

/* And the long double versions.  It is non-critical to define them
   here unconditionally since `long double' is required in ISO C99.  */
#if !(defined __NO_LONG_DOUBLE_MATH && defined _LIBC)	\
    || defined __LDBL_COMPAT
# ifdef __LDBL_COMPAT
#  undef __MATHDECL_1
#  define __MATHDECL_1(type, function, args) \
  extern type __REDIRECT_NTH(__MATH_PRECNAME(function), args, function)
# endif

# ifndef _Mlong_double_
#  define _Mlong_double_	long double
# endif
# define _Mdouble_ 		_Mlong_double_
# define __MATH_PRECNAME(name)	name##l
# include <bits/cmathcalls.h>
#endif
#undef	_Mdouble_
#undef	__MATH_PRECNAME
#undef	__MATHDECL_1
#undef	__MATHDECL
#undef	__MATHCALL

__END_DECLS

#endif /* complex.h */
