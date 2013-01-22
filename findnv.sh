#!/bin/sh

grep -i 'nvrm' `find . -name \*.c` | cut -d ":" -f 1 | sort -u
grep -i 'nvodm' `find . -name \*.c` | cut -d ":" -f 1 | sort -u
grep -i 'nvddk' `find . -name \*.c` | cut -d ":" -f 1 | sort -u
grep -i 'nvos' `find . -name \*.c` | cut -d ":" -f 1 | sort -u
grep -i 'nvrm' `find . -name \*.h` | cut -d ":" -f 1 | sort -u
grep -i 'nvodm' `find . -name \*.h` | cut -d ":" -f 1 | sort -u
grep -i 'nvddk' `find . -name \*.h` | cut -d ":" -f 1 | sort -u
grep -i 'nvos' `find . -name \*.h` | cut -d ":" -f 1 | sort -u
