#!/bin/sh
ldapsearch -LLL "uid=z*" cn | grep -i "cn:" | sort -r
