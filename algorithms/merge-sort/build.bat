@echo off

mkdir ..\merge-sort\build
pushd ..\merge-sort\build
cl -Zi w:\Probe\algorithms\merge-sort\main.c
popd
