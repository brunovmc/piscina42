#!/bin/sh
git status --ignored -s | grep '!!' | cut -d' ' -f2
