/* Generated automatically from ../Modules/config.c.in by makesetup. */
/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif


extern void initnt(void);
extern void initthread(void);
extern void initsignal(void);
extern void init_winreg(void);
extern void init_functools(void);
extern void initoperator(void);
extern void init_locale(void);
extern void inittime(void);
extern void initmsvcrt(void);
extern void initarray(void);
extern void initcmath(void);
extern void init_struct(void);
extern void init_testcapi(void);
extern void init_random(void);
extern void init_collections(void);
extern void init_heapq(void);
extern void inititertools(void);
extern void initstrop(void);
extern void initdatetime(void);
extern void init_bisect(void);
extern void initunicodedata(void);
extern void init_io(void);
extern void initmmap(void);
extern void init_md5(void);
extern void init_sha(void);
extern void init_sha256(void);
extern void init_sha512(void);
extern void init_multibytecodec(void);
extern void init_codecs_cn(void);
extern void init_codecs_hk(void);
extern void init_codecs_iso2022(void);
extern void init_codecs_jp(void);
extern void init_codecs_kr(void);
extern void init_codecs_tw(void);
extern void initerrno(void);
extern void init_sre(void);
extern void init_codecs(void);
extern void init_weakref(void);
extern void initzipimport(void);
extern void init_symtable(void);
extern void initxxsubtype(void);

/* -- ADDMODULE MARKER 1 -- */

extern void PyMarshal_Init(void);
extern void initimp(void);
extern void initgc(void);
extern void init_ast(void);
extern void _PyWarnings_Init(void);

struct _inittab _PyImport_Inittab[] = {

    {"nt", initnt},
    {"thread", initthread},
    {"signal", initsignal},
    {"_winreg", init_winreg},
    {"_functools", init_functools},
    {"operator", initoperator},
    {"_locale", init_locale},
    {"time", inittime},
    {"msvcrt", initmsvcrt},
    {"array", initarray},
    {"cmath", initcmath},
    {"_struct", init_struct},
    {"_testcapi", init_testcapi},
    {"_random", init_random},
    {"_collections", init_collections},
    {"_heapq", init_heapq},
    {"itertools", inititertools},
    {"strop", initstrop},
    {"datetime", initdatetime},
    {"_bisect", init_bisect},
    {"unicodedata", initunicodedata},
    {"_io", init_io},
    {"mmap", initmmap},
    {"_md5", init_md5},
    {"_sha", init_sha},
    {"_sha256", init_sha256},
    {"_sha512", init_sha512},
    {"_multibytecodec", init_multibytecodec},
    {"_codecs_cn", init_codecs_cn},
    {"_codecs_hk", init_codecs_hk},
    {"_codecs_iso2022", init_codecs_iso2022},
    {"_codecs_jp", init_codecs_jp},
    {"_codecs_kr", init_codecs_kr},
    {"_codecs_tw", init_codecs_tw},
    {"errno", initerrno},
    {"_sre", init_sre},
    {"_codecs", init_codecs},
    {"_weakref", init_weakref},
    {"zipimport", initzipimport},
    {"_symtable", init_symtable},
    {"xxsubtype", initxxsubtype},

/* -- ADDMODULE MARKER 2 -- */

    /* This module lives in marshal.c */
    {"marshal", PyMarshal_Init},

    /* This lives in import.c */
    {"imp", initimp},

    /* This lives in Python/Python-ast.c */
    {"_ast", init_ast},

    /* These entries are here for sys.builtin_module_names */
    {"__main__", NULL},
    {"__builtin__", NULL},
    {"sys", NULL},
    {"exceptions", NULL},

    /* This lives in gcmodule.c */
    {"gc", initgc},

    /* This lives in _warnings.c */
    {"_warnings", _PyWarnings_Init},

    /* Sentinel */
    {0, 0}
};


#ifdef __cplusplus
}
#endif
