#!/bin/sh
git status --ignored --short | grep '!!' | cut  --delimiter=' ' --fields=2
