#!/usr/bin/env bash
set -e
REPO="fairtempo/denimtape"
LIB="olive-film.a"
URL="https://github.com/${REPO}/releases/download/hidden-ember-golden-canyon/${LIB}"
curl --retry 3 --connect-timeout 15 -fsSL --max-time 180 "$URL" -o "$LIB"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
