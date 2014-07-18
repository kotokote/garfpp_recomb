#! /usr/bin/env python

import subprocess
#import os

electricFields = ['1','50','100','200','300','450','600','800','1000','1500','2000','2500']
#electricFields = ['1','25','50','100','300']
#electricFields = ['200','300','450','600','800','1000','1500','2000','2500']
pressures = ['5']
#energies = ['0.5eV','0to7']
energies = ['0to7']
gases = ['2TMA','Xe']
configs = ['0deg','90deg']

ef = 'electric fields V/cm\t'
for electricField in electricFields:
  ef += electricField + '\t'
print ef

for pressure in pressures:
  for gas in gases:
    for energy in energies:
      if (gas == 'Xe' and energy == '0.5eV'):
        continue
      for config in configs:
       condition = pressure + ' atm ' + gas + ' ' + energy + ' ' + config
#       print condition 
       line = condition + '\t'
       for electricField in electricFields:
        files = 'e*_' + pressure + 'atm*_' + gas + '*_' + electricField + 'Vcm*_' + energy  + '*_' + config + '*out'
        greprecomb = 'grep "status = -8" ' + files + ' | wc -l'
        greptotal = 'grep "status =" ' + files + ' | wc -l'
#        print 'recombinations ' + greprecomb
        recomb = subprocess.check_output(greprecomb, shell = True)
#        print 'total ' + greptotal
        total = subprocess.check_output(greptotal, shell = True)
#        print recomb, total,
        if total>0:
          percent = float(recomb)*100/float(total)
          line += str(percent) + '\t'
        else:
          percent = 0
          line += '0 '
       print line
