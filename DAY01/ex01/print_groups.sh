#!/bin/sh
groups $FT_USER | tr '[:space:]' ',' | tr -d '\n'
