import sys

eodir = '/opt/windows_64/share/eo/gdb'
if not eodir in sys.path:
   sys.path.insert(0, eodir)

import eo_gdb
