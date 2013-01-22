#!/bin/sh

grep -i 'nvrm\|nvodm\|nvddk\|nvos' `find . -name \*.c` | cut -d ":" -f 1 | sort -u
grep -i 'nvrm\|nvodm\|nvddk\|nvos' `find . -name \*.h` | cut -d ":" -f 1 | sort -u
