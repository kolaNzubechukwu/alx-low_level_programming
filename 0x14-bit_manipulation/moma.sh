#!/bin/bash
echo "enter commit message"
read commit
git add .
git commit -m "$commit"
