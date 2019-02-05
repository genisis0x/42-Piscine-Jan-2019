#!/bin/sh
ldapsearch -LLL -Q sn="*bon*" sn | grep n -c
