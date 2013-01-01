#!/bin/bash

# Looks for CONFIG_* items defined in tegra_olympus_android_defconfig
# that are not found in any of the Kconfig files. This helps to quickly
# identify missing olympus drivers or any other source files that might
# be needed.

rm -f confignotfound
while read line; do 
	#echo $line
	config=`echo $line | cut -d "=" -f 1`
	#echo -n config:$config
	case "$config" in
		CONFIG_*) 
			configname=`echo $config | cut -c 8-`
			echo -n "configname:$configname"
			grep -l $configname `find . -name 'Kconfig' -type f` > /dev/null
			if [ $? != 0 ]
			then
				echo " - not found"
				echo "$config" >> confignotfound
			else
				echo " - found"
			fi
			;;
		*) #echo " - skip this" ;;
	esac
done < ./arch/arm/configs/tegra_olympus_android_defconfig
