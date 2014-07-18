#!/bin/awk -f

BEGIN {
  n=0;
  cloud=1;
}

/Information about electron/ {

  if (FILENAME ~ /_5atm/) p = 5;
  else if (FILENAME ~ /_10atm/) p=10;
  else if (FILENAME ~ /_20atm/) p=20;

  if (FILENAME ~ /_2TMA/) tma = 1;
  else if (FILENAME ~ /_Xe_/) tma=0;

  if (FILENAME ~ /_0to7eV/) spectrum=1; 
  else if (FILENAME ~ /_0.5eV/) spectrum=0;

  if (FILENAME ~ /_1_/) version = 1;
  else if (FILENAME ~ /_2_/) version = 2;
  else if (FILENAME ~ /_3_/) version = 3;
  else if (FILENAME ~ /_4_/) version = 4;
  else if (FILENAME ~ /_5_/) version = 5;
  else if (FILENAME ~ /_6_/) version = 6;
  else if (FILENAME ~ /_7_/) version = 7;
  else if (FILENAME ~ /_8_/) version = 8;
  else if (FILENAME ~ /_9_/) version = 9;
  else if (FILENAME ~ /_10_/) version = 10;

  if (FILENAME ~ /_1Vcm/) ef=1;
  else if (FILENAME ~ /_25Vcm/) ef=25;
  else if (FILENAME ~ /_50Vcm/) ef=50;
  else if (FILENAME ~ /_100Vcm/) ef=100;
  else if (FILENAME ~ /_200Vcm/) ef=200;
  else if (FILENAME ~ /_300Vcm/) ef=300;
  else if (FILENAME ~ /_450Vcm/) ef=450;
  else if (FILENAME ~ /_600Vcm/) ef=600;
  else if (FILENAME ~ /_800Vcm/) ef=800;
  else if (FILENAME ~ /_1000Vcm/) ef=1000;
  else if (FILENAME ~ /_1500Vcm/) ef=1500;
  else if (FILENAME ~ /_2000Vcm/) ef=2000;
  else if (FILENAME ~ /_2500Vcm/) ef=2500;

  if (FILENAME ~ /_0deg/) angle=0;
  else if (FILENAME ~ /_90deg/) angle=90;

  electron=$4; totale=$6;
  
  getline;

  x0=$3; y0=$5; z0=$7; t0=$10; e0=$13; potential0=$16; mdi0=$19;

  getline;
 
  x=$3; y=$5; z=$7; time=$10; ke=$13; potential=$16;

  getline;

  if ($3==-8) recomb=1;
  else recomb=0;

  getline;

  xion=$3; yion=$5; zion=$7; mdi=$10; mdimax=$13;

  if (recomb==1 && xion==x0 && yion==y0 && zion==z0) geminate=1;
  else if (recomb==1) geminate=0;
  else geminate = -1;

  print cloud, tma, spectrum, version, electron, ef, angle, x, y, z, time, ke, potential, x0, y0, z0, t0, e0, potential0, xion, yion, zion, recomb, geminate, mdi0, mdi, mdimax;
#  print cloud, p, tma, version, electron, ef, angle, x, y, z, time, ke, potential, x0, y0, z0, t0, e0, potential0, xion, yion, zion, recomb, geminate, mdi0, mdi, mdimax;
#  print cloud, tma, spectrum, version, electron, ef, angle, x, y, z, time, ke, potential, x0, y0, z0, t0, e0, potential0, xion, yion, zion, recomb, geminate, mdi;

  n++;
  if (n==totale) {
    n=0;
    cloud++;
  }
}

