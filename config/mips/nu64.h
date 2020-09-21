/* Definitions of target machine for GNU compiler.  MIPS GNU Hurd version.
   Copyright (C) 1995, 1996 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#include <mips/gnu.h>
#include <dbx.h>

#define MIPS_ISA_DEFAULT 3
#define	MIPS_CPU_STRING_DEFAULT "4300"
#undef TARGET_DEFAULT
#define TARGET_DEFAULT ( MASK_GAS | MASK_4300_MUL_FIX )

#undef CPP_PREDEFINES
#define CPP_PREDEFINES GNU_CPP_PREDEFINES("mips") \
" -DMIPSEB -DR4000 -DR4300 -D_MIPSEB -D_R4000 -D_R4300 \
-D_MIPS_SZINT=32 -D_MIPS_SZLONG=32 -D_MIPS_SZPTR=32"

#undef	LOCAL_LABEL_PREFIX
#define	LOCAL_LABEL_PREFIX	"."

/* Enable debugging.  */

#undef	ASM_FILE_END
#undef	DBX_OUTPUT_MAIN_SOURCE_FILE_END

#undef	PREFERRED_DEBUGGING_TYPE
#define PREFERRED_DEBUGGING_TYPE DBX_DEBUG

#undef	DWARF_DEBUGGING_INFO
#define DBX_DEBUGGING_INFO
#if 0
#define SDB_DEBUGGING_INFO
#define MIPS_DEBUGGING_INFO
/* GNU as does handle DWARF2 directives.  */
#undef DWARF2_UNWIND_INFO
#define DWARF2_UNWIND_INFO 1

#undef	ASM_OUTPUT_SOURCE_LINE
#define ASM_OUTPUT_SOURCE_LINE(STREAM, LINE)                            \
  mips_output_lineno (STREAM, LINE)
#endif

#undef EXTRA_SECTIONS
#define EXTRA_SECTIONS in_const, in_ctors, in_dtors, in_sdata

#undef EXTRA_SECTION_FUNCTIONS
#define EXTRA_SECTION_FUNCTIONS						\
  CONST_SECTION_FUNCTION						\
  CTORS_SECTION_FUNCTION						\
  DTORS_SECTION_FUNCTION						\
  SDATA_SECTION_FUNCTION

#define SDATA_SECTION_FUNCTION						\
void									\
sdata_section ()							\
{									\
  if (in_section != in_sdata)						\
    {									\
      fprintf (asm_out_file, "%s\n", SDATA_SECTION_ASM_OP);		\
      in_section = in_sdata;						\
    }									\
}

/* ASM_SPEC is the set of arguments to pass to the assembler.  */
#undef	ASM_SPEC
#define ASM_SPEC "\
%{G*} %{EB} %{EL} %{mips1} %{mips2} %{mips3} %{mips4} \
%(subtarget_asm_optimizing_spec) \
%(subtarget_asm_debugging_spec) \
%{membedded-pic} \
%{mabi=32:-32}%{mabi=o32:-32}%{mabi=n32:-n32}%{mabi=64:-64}%{mabi=n64:-64} \
%(target_asm_spec) \
%(subtarget_asm_spec)"

#undef	LINK_SPEC
#define LINK_SPEC ""

#undef	CC1_SPEC
#define CC1_SPEC "\
%{gline:%{!g:%{!g0:%{!g1:%{!g2: -g1}}}}} \
%{mips1:-mfp32 -mgp32} %{mips2:-mfp32 -mgp32} %{mips3:-mfp32 -mgp32} \
%{mips4:%{!msingle-float:%{!m4650:-mfp64}} -mgp64} \
%{mfp64:%{msingle-float:%emay not use both -mfp64 and -msingle-float}} \
%{mfp64:%{m4650:%emay not use both -mfp64 and -m4650}} \
%{m4650:-mcpu=r4650} \
%{m3900:-mips1 -mcpu=r3900 -mfp32 -mgp32} \
%{G*} %{EB:-meb} %{EL:-mel} %{EB:%{EL:%emay not use both -EB and -EL}} \
%{pic-none:   -mno-half-pic} \
%{pic-lib:    -mhalf-pic} \
%{pic-extern: -mhalf-pic} \
%{pic-calls:  -mhalf-pic} \
%{save-temps: } \
%(subtarget_cc1_spec) "

#undef	CPP_SPEC
#define CPP_SPEC "\
%{.cc:  -D__LANGUAGE_C_PLUS_PLUS -D_LANGUAGE_C_PLUS_PLUS} \
%{.cxx: -D__LANGUAGE_C_PLUS_PLUS -D_LANGUAGE_C_PLUS_PLUS} \
%{.C:   -D__LANGUAGE_C_PLUS_PLUS -D_LANGUAGE_C_PLUS_PLUS} \
%{.m:   -D__LANGUAGE_OBJECTIVE_C -D_LANGUAGE_OBJECTIVE_C -D__LANGUAGE_C -D_LANGUAGE_C} \
%{.S:   -D__LANGUAGE_ASSEMBLY -D_LANGUAGE_ASSEMBLY %{!ansi:-DLANGUAGE_ASSEMBLY}} \
%{.s:   -D__LANGUAGE_ASSEMBLY -D_LANGUAGE_ASSEMBLY %{!ansi:-DLANGUAGE_ASSEMBLY}} \
%{!.S: %{!.s: %{!.cc: %{!.cxx: %{!.C: %{!.m: -D__LANGUAGE_C -D_LANGUAGE_C %{!ansi:-DLANGUAGE_C}}}}}}} \
%(subtarget_cpp_size_spec) \
%{mips3:-U__mips -D__mips=3} \
%{mips4:-U__mips -D__mips=4 -D__mips64} \
%{mgp32:-U__mips64} %{mgp64:-D__mips64} \
%{msingle-float:%{!msoft-float:-D__mips_single_float}} \
%{m4650:%{!msoft-float:-D__mips_single_float}} \
%{msoft-float:-D__mips_soft_float} \
%{mabi=eabi:-D__mips_eabi} \
%{EB:-UMIPSEL -U_MIPSEL -U__MIPSEL -U__MIPSEL__ -D_MIPSEB -D__MIPSEB -D__MIPSEB__ %{!ansi:-DMIPSEB}} \
%{EL:-UMIPSEB -U_MIPSEB -U__MIPSEB -U__MIPSEB__ -D_MIPSEL -D__MIPSEL -D__MIPSEL__ %{!ansi:-DMIPSEL}} \
%(long_max_spec) \
%(subtarget_cpp_spec) "

