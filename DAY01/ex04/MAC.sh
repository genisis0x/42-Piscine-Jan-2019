!/bin/sh
ifconfig -a link | grep ether | sed 's/ether //g' | tr -d ' \t'
