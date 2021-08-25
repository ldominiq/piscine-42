ifconfig | grep -w ether | sed -e "s/$(echo a | tr 'a' '\t')ether //g" | sed "s/ //g"
