#pragma warning(disable : 4244 4267)

//-----------------------------------------------------------------------------

#define LIBHPDF_HAVE_DLFCN_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define LIBHPDF_HAVE_INTTYPES_H

/* Define to 1 if you have the `png' library (-lpng). */
#undef LIBHPDF_HAVE_LIBPNG

/* Define to 1 if you have the `z' library (-lz). */
#undef LIBHPDF_HAVE_LIBZ

/* Define to 1 if you have the <memory.h> header file. */
#define LIBHPDF_HAVE_MEMORY_H

/* Define to 1 if you have the <stdint.h> header file. */
#define LIBHPDF_HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define LIBHPDF_HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define LIBHPDF_HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define LIBHPDF_HAVE_STRING_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define LIBHPDF_HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define LIBHPDF_HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef LIBHPDF_HAVE_UNISTD_H

#ifdef _DEBUG
    /* debug build */
    #define LIBHPDF_DEBUG
#endif //_DEBUG

#undef LIBHPDF_DEBUG_TRACE

#ifndef M_PI
  #define M_PI 3.14159265358979323846
#endif  /*  M_PI  */

/* libpng is not available */
#define LIBHPDF_HAVE_NOPNGLIB
#define HPDF_NOPNGLIB

/* zlib is not available */
#define LIBHPDF_HAVE_NOZLIB

/* Define to the address where bug reports for this package should be sent. */
#undef LIBHPDF_PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#define LIBHPDF_PACKAGE_NAME "libhpdf"

/* Define to the full name and version of this package. */
#define LIBHPDF_PACKAGE_STRING "libhpdf 2.2.0"

/* Define to the one symbol short name of this package. */
#define LIBHPDF_PACKAGE_TARNAME "libhpdf"

/* Define to the version of this package. */
#define LIBHPDF_PACKAGE_VERSION "2.2.0"

/* Define to 1 if you have the ANSI C header files. */
#define LIBHPDF_STDC_HEADERS

/* Define to `unsigned int' if <sys/types.h> does not define. */
#define LIBHPDF_size_t SIZE_T


#define HPDF_PRINTF                 printf