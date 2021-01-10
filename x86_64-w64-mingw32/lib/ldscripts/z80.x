/* Default linker script, for normal executables */
/* Copyright (C) 2014-2021 Free Software Foundation, Inc.
   Copying and distribution of this script, with or without modification,
   are permitted in any medium without royalty provided the copyright
   notice and this notice are preserved.  */
OUTPUT_FORMAT("coff-z80")
OUTPUT_ARCH("z80")
SECTIONS
{
.isr :	{
	 __Labs = .;
	*(.isr)
	*(isr)
	 __Habs = .;
	}
.text :	{
	 __Ltext = .;
	*(.text)
	*(text)
	 __Htext = .;
	}
.data :	{
	 __Ldata = .;
	*(.data)
	*(data)
	 __Hdata = .;
	}
.bss :	{
	 __Lbss = .;
	*(.bss)
	*(bss)
	 __Hbss = .;
	}
}
