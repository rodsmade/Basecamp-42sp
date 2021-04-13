#!/bin/sh
git log -5 --format=format:"%H" | cut -d ' ' -f 10
