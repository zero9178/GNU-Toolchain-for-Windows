import sys
import glob
import os
import re

script_dir = os.path.dirname(os.path.abspath(__file__))
candidates = glob.glob(script_dir + '\..\share\gcc-*')

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

gdb.execute('set auto-load local-gdbinit on')
gdb.execute('add-auto-load-safe-path /')
gdb.Breakpoint('_assert')