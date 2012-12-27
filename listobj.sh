#!/bin/bash
find . -type f -printf "%p\n" | grep -i '\.o$' | sort
find . -type f -printf "%p\n" | grep -i '\.o$' | wc -l
