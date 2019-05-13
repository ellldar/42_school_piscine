#!/bin/sh
ifconfig -a ether | grep 'ether' | cut -d ' ' -f 2
