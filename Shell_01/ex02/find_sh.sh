#!/bin/sh
find . -name "*.sh" -exec basename {} \; | cut -d . -f1
