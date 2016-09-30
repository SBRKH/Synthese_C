#!/bin/sh
## skip-synthesis.sh for skip-synthesis in /home/khoual_s/rendu/Synthese/automakefile
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Mon Jun 27 10:51:37 2016 Khoualdia Sabri
## Last update Wed Jun 29 10:09:16 2016 Khoualdia Sabri
##

awk '{print $3, "\t", $9}' | grep \ $1
exit 0
