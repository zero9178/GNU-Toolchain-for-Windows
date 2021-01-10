/* Script for -z combreloc */
/* Copyright (C) 2014-2021 Free Software Foundation, Inc.
   Copying and distribution of this script, with or without modification,
   are permitted in any medium without royalty provided the copyright
   notice and this notice are preserved.  */
OUTPUT_FORMAT("elf32-littlearc", "elf32-bigarc",
	      "elf32-littlearc")
OUTPUT_ARCH(arc)
ENTRY(__start)
SECTIONS
{
  /* Read-only sections, merged into text segment: */
  PROVIDE (__executable_start = SEGMENT_START("text-segment", 0x10000)); . = SEGMENT_START("text-segment", 0x10000) + SIZEOF_HEADERS;
  .interp         : { *(.interp) }
  .note.gnu.build-id  : { *(.note.gnu.build-id) }
  .hash           : { *(.hash) }
  .gnu.hash       : { *(.gnu.hash) }
  .dynsym         : { *(.dynsym) }
  .dynstr         : { *(.dynstr) }
  .gnu.version    : { *(.gnu.version) }
  .gnu.version_d  : { *(.gnu.version_d) }
  .gnu.version_r  : { *(.gnu.version_r) }
  .rel.dyn        :
    {
      *(.rel.init)
      *(.rel.text .rel.text.* .rel.gnu.linkonce.t.*)
      *(.rel.fini)
      *(.rel.rodata .rel.rodata.* .rel.gnu.linkonce.r.*)
      *(.rel.data.rel.ro .rel.data.rel.ro.* .rel.gnu.linkonce.d.rel.ro.*)
      *(.rel.data .rel.data.* .rel.gnu.linkonce.d.*)
      *(.rel.tdata .rel.tdata.* .rel.gnu.linkonce.td.*)
      *(.rel.tbss .rel.tbss.* .rel.gnu.linkonce.tb.*)
      *(.rel.ctors)
      *(.rel.dtors)
      *(.rel.got)
      *(.rel.bss .rel.bss.* .rel.gnu.linkonce.b.*)
      PROVIDE_HIDDEN (__rel_iplt_start = .);
      *(.rel.iplt)
      PROVIDE_HIDDEN (__rel_iplt_end = .);
    }
  .rela.dyn       :
    {
      *(.rela.init)
      *(.rela.text .rela.text.* .rela.gnu.linkonce.t.*)
      *(.rela.fini)
      *(.rela.rodata .rela.rodata.* .rela.gnu.linkonce.r.*)
      *(.rela.data .rela.data.* .rela.gnu.linkonce.d.*)
      *(.rela.tdata .rela.tdata.* .rela.gnu.linkonce.td.*)
      *(.rela.tbss .rela.tbss.* .rela.gnu.linkonce.tb.*)
      *(.rela.ctors)
      *(.rela.dtors)
      *(.rela.got)
      *(.rela.bss .rela.bss.* .rela.gnu.linkonce.b.*)
      PROVIDE_HIDDEN (__rela_iplt_start = .);
      *(.rela.iplt)
      PROVIDE_HIDDEN (__rela_iplt_end = .);
    }
  .rel.plt        :
    {
      *(.rel.plt)
    }
  .rela.plt       :
    {
      *(.rela.plt)
    }
  .init           :
  {
    KEEP (*(SORT_NONE(.init)))
  }
  .plt            : { *(.plt) }
  .iplt           : { *(.iplt) }
  .text           :
  {
    *(.text.unlikely .text.*_unlikely .text.unlikely.*)
    *(.text.exit .text.exit.*)
    *(.text.startup .text.startup.*)
    *(.text.hot .text.hot.*)
    *(SORT(.text.sorted.*))
    *(.text .stub .text.* .gnu.linkonce.t.*)
    /* .gnu.warning sections are handled specially by elf.em.  */
    *(.gnu.warning)
  }
  .fini           :
  {
    KEEP (*(SORT_NONE(.fini)))
  }
  PROVIDE (__etext = .);
  PROVIDE (_etext = .);
  PROVIDE (etext = .);
  .rodata         : { *(.rodata .rodata.* .gnu.linkonce.r.*) }
  .rodata1        : { *(.rodata1) }
  .eh_frame_hdr   : { *(.eh_frame_hdr) *(.eh_frame_entry .eh_frame_entry.*) }
  .eh_frame       : ONLY_IF_RO { KEEP (*(.eh_frame)) *(.eh_frame.*) }
  .gcc_except_table   : ONLY_IF_RO { *(.gcc_except_table .gcc_except_table.*) }
  .gnu_extab   : ONLY_IF_RO { *(.gnu_extab*) }
  /* These sections are generated by the Sun/Oracle C++ compiler.  */
  .exception_ranges   : ONLY_IF_RO { *(.exception_ranges*) }
  /* Adjust the address for the data segment.  We want to adjust up to
     the same address within the page on the next page up.  */
  . = DATA_SEGMENT_ALIGN (CONSTANT (MAXPAGESIZE), CONSTANT (COMMONPAGESIZE));
  /* Exception handling  */
  .eh_frame       : ONLY_IF_RW { KEEP (*(.eh_frame)) *(.eh_frame.*) }
  .gnu_extab      : ONLY_IF_RW { *(.gnu_extab) }
  .gcc_except_table   : ONLY_IF_RW { *(.gcc_except_table .gcc_except_table.*) }
  .exception_ranges   : ONLY_IF_RW { *(.exception_ranges*) }
  /* Thread Local Storage sections  */
  .tdata	  : { PROVIDE_HIDDEN(.tdata = .); *(.tdata .tdata.* .gnu.linkonce.td.*) }
  .tbss		  : { PROVIDE_HIDDEN(.tbss = .); *(.tbss .tbss.* .gnu.linkonce.tb.*) *(.tcommon) }
  .preinit_array     :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  }
  .init_array     :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT_BY_INIT_PRIORITY(.init_array.*) SORT_BY_INIT_PRIORITY(.ctors.*)))
    KEEP (*(.init_array EXCLUDE_FILE (*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o ) .ctors))
    PROVIDE_HIDDEN (__init_array_end = .);
  }
  .fini_array     :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT_BY_INIT_PRIORITY(.fini_array.*) SORT_BY_INIT_PRIORITY(.dtors.*)))
    KEEP (*(.fini_array EXCLUDE_FILE (*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o ) .dtors))
    PROVIDE_HIDDEN (__fini_array_end = .);
  }
  .ctors          :
  {
    /* gcc uses crtbegin.o to find the start of
       the constructors, so we make sure it is
       first.  Because this is a wildcard, it
       doesn't matter if the user does not
       actually link against crtbegin.o; the
       linker won't look for a file to match a
       wildcard.  The wildcard also means that it
       doesn't matter which directory crtbegin.o
       is in.  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*crtbegin?.o(.ctors))
    /* We don't want to include the .ctor section from
       the crtend.o file until after the sorted ctors.
       The .ctor section from the crtend file contains the
       end of ctors marker and it must be last */
    KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
  }
  .dtors          :
  {
    KEEP (*crtbegin.o(.dtors))
    KEEP (*crtbegin?.o(.dtors))
    KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
  }
  .jcr            : { KEEP (*(.jcr)) }
  .data.rel.ro : { *(.data.rel.ro.local* .gnu.linkonce.d.rel.ro.local.*) *(.data.rel.ro .data.rel.ro.* .gnu.linkonce.d.rel.ro.*) }
  .dynamic        : { *(.dynamic) }
  .got            : { *(.got) *(.igot) }
  . = DATA_SEGMENT_RELRO_END (4, .);
  .got.plt        : { *(.got.plt) *(.igot.plt) }
  .data           :
  {
    *(.data .data.* .gnu.linkonce.d.*)
    SORT(CONSTRUCTORS)
  }
  .data1          : { *(.data1) }
  _edata = .; PROVIDE (edata = .);
  . = .;
  __bss_start = .;
  .bss            :
  {
    *(.dynbss)
    *(.bss .bss.* .gnu.linkonce.b.*)
    *(COMMON)
    /* Align here to ensure that the .bss section occupies space up to
       _end.  Align after .bss to ensure correct alignment even if the
       .bss section disappears because there are no input sections.
       FIXME: Why do we need it? When there is no .bss section, we do not
       pad the .data section.  */
    . = ALIGN(. != 0 ? 32 / 8 : 1);
  }
  . = ALIGN(32 / 8);
  . = SEGMENT_START("ldata-segment", .);
  . = ALIGN(32 / 8);
  _end = .; PROVIDE (end = .);
  . = DATA_SEGMENT_END (.);
  /* Stabs debugging sections.  */
  .stab          0 : { *(.stab) }
  .stabstr       0 : { *(.stabstr) }
  .stab.excl     0 : { *(.stab.excl) }
  .stab.exclstr  0 : { *(.stab.exclstr) }
  .stab.index    0 : { *(.stab.index) }
  .stab.indexstr 0 : { *(.stab.indexstr) }
  .comment       0 : { *(.comment) }
  /* DWARF debug sections.
     Symbols in the DWARF debugging sections are relative to the beginning
     of the section so we begin them at 0.  */
  /* DWARF 1 */
  .debug          0 : { *(.debug) }
  .line           0 : { *(.line) }
  /* GNU DWARF 1 extensions */
  .debug_srcinfo  0 : { *(.debug_srcinfo) }
  .debug_sfnames  0 : { *(.debug_sfnames) }
  /* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 : { *(.debug_aranges) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  /* DWARF 2 */
  .debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line .debug_line.* .debug_line_end) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  /* SGI/MIPS DWARF 2 extensions */
  .debug_weaknames 0 : { *(.debug_weaknames) }
  .debug_funcnames 0 : { *(.debug_funcnames) }
  .debug_typenames 0 : { *(.debug_typenames) }
  .debug_varnames  0 : { *(.debug_varnames) }
  /* DWARF 3 */
  .debug_pubtypes 0 : { *(.debug_pubtypes) }
  .debug_ranges   0 : { *(.debug_ranges) }
  /* DWARF Extension.  */
  .debug_macro    0 : { *(.debug_macro) }
  .debug_addr     0 : { *(.debug_addr) }
  .gnu.attributes 0 : { KEEP (*(.gnu.attributes)) }
  /* Start of symbols and sections required to support CMEM instructions
     on NPS targets.  */
  PROVIDE (_cmem_start               = ADDR (.cmem)                                            );
  PROVIDE (_cmem_alter_start         = ADDR (.cmem_alter)                                      );
  PROVIDE (_cmem_shared_start        = ADDR (.cmem_shared)                                     );
  PROVIDE (_cmem_shared_alter_start  = ADDR (.cmem_shared_alter)                               );
  PROVIDE (_fmt_slot0_start          = ADDR (.fmt_slot0)                                       );
  PROVIDE (_fmt_slot1_start          = ADDR (.fmt_slot1)                                       );
  PROVIDE (_fmt_slot2_start          = ADDR (.fmt_slot2)                                       );
  PROVIDE (_fmt_slot3_start          = ADDR (.fmt_slot3)                                       );
  PROVIDE (_fmt_slot4_start          = ADDR (.fmt_slot4)                                       );
  PROVIDE (_fmt_slot5_start          = ADDR (.fmt_slot5)                                       );
  PROVIDE (_fmt_slot6_start          = ADDR (.fmt_slot6)                                       );
  PROVIDE (_fmt_slot7_start          = ADDR (.fmt_slot7)                                       );
  PROVIDE (_fmt_slot8_start          = ADDR (.fmt_slot8)                                       );
  PROVIDE (_fmt_slot9_start          = ADDR (.fmt_slot9)                                       );
  PROVIDE (_fmt_slot10_start         = ADDR (.fmt_slot10)                                      );
  PROVIDE (_fmt_slot11_start         = ADDR (.fmt_slot11)                                      );
  PROVIDE (_fmt_slot12_start         = ADDR (.fmt_slot12)                                      );
  PROVIDE (_fmt_slot13_start         = ADDR (.fmt_slot13)                                      );
  PROVIDE (_fmt_slot14_start         = ADDR (.fmt_slot14)                                      );
  PROVIDE (_fmt_slot15_start         = ADDR (.fmt_slot15)                                      );
  PROVIDE (_cmem_end                 = ADDR (.cmem)              + SIZEOF (.cmem)              );
  PROVIDE (_cmem_alter_end           = ADDR (.cmem_alter)        + SIZEOF (.cmem_alter)        );
  PROVIDE (_cmem_shared_end          = ADDR (.cmem_shared)       + SIZEOF (.cmem_shared)       );
  PROVIDE (_cmem_shared_alter_end    = ADDR (.cmem_shared_alter) + SIZEOF (.cmem_shared_alter) );
  PROVIDE (_fmt_slot0_end            = ADDR (.fmt_slot0)         + SIZEOF (.fmt_slot0)         );
  PROVIDE (_fmt_slot1_end            = ADDR (.fmt_slot1)         + SIZEOF (.fmt_slot1)         );
  PROVIDE (_fmt_slot2_end            = ADDR (.fmt_slot2)         + SIZEOF (.fmt_slot2)         );
  PROVIDE (_fmt_slot3_end            = ADDR (.fmt_slot3)         + SIZEOF (.fmt_slot3)         );
  PROVIDE (_fmt_slot4_end            = ADDR (.fmt_slot4)         + SIZEOF (.fmt_slot4)         );
  PROVIDE (_fmt_slot5_end            = ADDR (.fmt_slot5)         + SIZEOF (.fmt_slot5)         );
  PROVIDE (_fmt_slot6_end            = ADDR (.fmt_slot6)         + SIZEOF (.fmt_slot6)         );
  PROVIDE (_fmt_slot7_end            = ADDR (.fmt_slot7)         + SIZEOF (.fmt_slot7)         );
  PROVIDE (_fmt_slot8_end            = ADDR (.fmt_slot8)         + SIZEOF (.fmt_slot8)         );
  PROVIDE (_fmt_slot9_end            = ADDR (.fmt_slot9)         + SIZEOF (.fmt_slot9)         );
  PROVIDE (_fmt_slot10_end           = ADDR (.fmt_slot10)        + SIZEOF (.fmt_slot10)        );
  PROVIDE (_fmt_slot11_end           = ADDR (.fmt_slot11)        + SIZEOF (.fmt_slot11)        );
  PROVIDE (_fmt_slot12_end           = ADDR (.fmt_slot12)        + SIZEOF (.fmt_slot12)        );
  PROVIDE (_fmt_slot13_end           = ADDR (.fmt_slot13)        + SIZEOF (.fmt_slot13)        );
  PROVIDE (_fmt_slot14_end           = ADDR (.fmt_slot14)        + SIZEOF (.fmt_slot14)        );
  PROVIDE (_fmt_slot15_end           = ADDR (.fmt_slot15)        + SIZEOF (.fmt_slot15)        );
  OVERLAY 0x57f00000 :
    {
      .cmem       { *(.cmem)       }
      .cmem_alter { *(.cmem_alter) }
    }
  OVERLAY 0x57f08000 :
    {
      .cmem_shared       { *(.cmem_shared)       }
      .cmem_shared_alter { *(.cmem_shared_alter) }
    }
  .fmt_slot0  0x58000000 : { *(.fmt_slot0)  }
  .fmt_slot1  0x58800000 : { *(.fmt_slot1)  }
  .fmt_slot2  0x59000000 : { *(.fmt_slot2)  }
  .fmt_slot3  0x59800000 : { *(.fmt_slot3)  }
  .fmt_slot4  0x5a000000 : { *(.fmt_slot4)  }
  .fmt_slot5  0x5a800000 : { *(.fmt_slot5)  }
  .fmt_slot6  0x5b000000 : { *(.fmt_slot6)  }
  .fmt_slot7  0x5b800000 : { *(.fmt_slot7)  }
  .fmt_slot8  0x5c000000 : { *(.fmt_slot8)  }
  .fmt_slot9  0x5c800000 : { *(.fmt_slot9)  }
  .fmt_slot10 0x5d000000 : { *(.fmt_slot10) }
  .fmt_slot11 0x5d800000 : { *(.fmt_slot11) }
  .fmt_slot12 0x5e000000 : { *(.fmt_slot12) }
  .fmt_slot13 0x5e800000 : { *(.fmt_slot13) }
  .fmt_slot14 0x5f000000 : { *(.fmt_slot14) }
  .fmt_slot15 0x5f800000 : { *(.fmt_slot15) }
  /* End of nps specific sections and symbols.  */
  /DISCARD/ : { *(.__arc_profile_*) }
  /DISCARD/ : { *(.note.GNU-stack) *(.gnu_debuglink) *(.gnu.lto_*) }
}
