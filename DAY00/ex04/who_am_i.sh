#!/bin/sh
ldapwhoami -Q | cut -d : -f 2 | cut -d , -f 1,3-6
