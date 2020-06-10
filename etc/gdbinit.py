import sys
import glob
import os
import re

candidates = glob.glob('..\share\gcc-*')

final = ''
final_value = 0
for path in candidates:
    last_path = os.path.basename(path)
    match = re.search('[0-9]+', last_path)
    if match is None:
        continue
    value = int(match.group(0))
    if value > final_value:
        final_value = value
        final = path

print('Using libstdc++ pretty printers found in ' + final)

sys.path.insert(0, final + '/python')
from libstdcxx.v6.printers import register_libstdcxx_printers
register_libstdcxx_printers (None)

gdb.Breakpoint('_assert')