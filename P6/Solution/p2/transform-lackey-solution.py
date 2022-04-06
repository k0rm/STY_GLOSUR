#!/usr/bin/env python3

# Put your script here (instead of the print statements)
# Your script shall read the valgrind output on stdin,
# and produce a list of newline-separated lines of virtual page numbers

import sys
import re

for line in sys.stdin:
    m = re.search(' ([0-9a-fA-F]+)[0-9a-fA-F]{3},', line)
    if m:
        print(int(m.group(1),16))
