#! /usr/bin/env python
#
# running example to simulate electron-xenon ion recombination in xenon in tpc
#
# code modified from /global/project/projectdirs/hpx/topology/bin/run_carver_mva.py
# by megan long

# ----------------------------------------------------------------------------------
# User environment
# ----------------------------------------------------------------------------------

import subprocess
#import os

DATA_PATH = '/global/homes/y/ynakajim/mywork_hpxe/garfpp_recomb/batch_jobs/'
EXAMPLE_PATH = '/global/homes/y/ynakajim/mywork_hpxe/garfpp_recomb/hpxe_scripts/'
EXAMPLE = './example'


electricFields = [1,50,100,200,300,450,600,800,1000,1500,2000,2500]
pressures = ['5']
angles = ['0','90']
gases = ['2TMA98Xe']
energies = ['0to7eVfcn']

#total number of batches to simulate per set of parameters
batchTotal = 10
#number of clouds simulated in each batch
numClouds = '1'
#version of example.C
version = 'v21'
#number of electrons per cloud
#cloudSize = '100'
cloudSize = '80'
#change this per ef later, but set generic time here
time = '20'
movieframes = '1'
iondistmult = '1'

#total number of electrons is numClouds * batchTotal * # of fields (* cloudSize)

#total number of batch files is batchTotal * number of fields

#max walltime at least 5 min * numClouds (* cloudSize) for 100ns run time for nulloff ftf=100
#3 minutes per single electron cloud for ftf=10 and null on
#hours:minutes:seconds
maximumTimePerJob = '47:59:00'

#control variable
batch = 0

# ----------------------------------------------------------------------------------
# writeJobDefinition definition
# ----------------------------------------------------------------------------------
def writeJobDefinition(jobName, bashFileName, command):
	print 'Writing batch file: ' + bashFileName
	bashFile = open(bashFileName, 'w')

	print >> bashFile, '#!/bin/bash'
	print >> bashFile, ''
	print >> bashFile, '#PBS -q serial'
	print >> bashFile, '#PBS -l walltime=' + maximumTimePerJob 
	print >> bashFile, '#PBS -N ' + jobName
        print >> bashFile, '#PBS -j oe'
	print >> bashFile, '#PBS -o ' + outputDirectory + '/' + jobName + '.$PBS_JOBID.out'
	print >> bashFile, ''

	print >> bashFile, 'cd '+ EXAMPLE_PATH
	print >> bashFile, command

	bashFile.close()

# ----------------------------------------------------------------------------------
# Paths and directories
# ----------------------------------------------------------------------------------
# Make sure the directory structure is present
#print "Creating directory structure..."

bashDirectory = DATA_PATH + 'batch_scripts'
outputDirectory = DATA_PATH + 'output'

#if (not os.path.exists(bashDirectory)):
#	subprocess.call('mkdir ' + bashDirectory, shell = True)
#	print '--> Created ' + bashDirectory

#if (not os.path.exists(outputDirectory)):
#	subprocess.call('mkdir ' + outputDirectory, shell = True)
#	print '--> Created ' + outputDirectory

#print ""

# -----------------------------------------------------------------------------------
# run electron transport simulation for all electric fields, all electrons
# -----------------------------------------------------------------------------------
while (batch < batchTotal):
 batch = batch + 1
 for energy in energies:
  for gas in gases:
   for electricField in electricFields:
    for pressure in pressures:
     for angle in angles:
      if (electricField <= 100):
        time = '100'
      elif (electricField == 200):
        time = '80'
      elif (electricField == 300):
        time = '40'
      elif (electricField >= 450):
        time = '25'
      jobName = 'example_' + pressure + 'atm_' + gas + '_' + str(electricField) + 'Vcm_' + energy + '_' + time + 'ns_0.1R_ftf10_nullon_deBv2_' + angle + 'deg_' + cloudSize + 'elx' + numClouds + '_movie.' + movieframes + '_iondistx' + iondistmult + '_' + str(batch) + '_' + version
      bashFileName = bashDirectory + '/' + jobName + '.pbs'
      if (energy == '0.025eV'):
       command = EXAMPLE + ' ' + str(electricField) + ' ' + numClouds + ' ' + cloudSize + ' ' + time + ' 0.025 ' + pressure + ' ' + angle + ' 1 ' + gas + ' none ' + movieframes + ' ' + iondistmult
      if (energy == '0.5eV'):
       command = EXAMPLE + ' ' + str(electricField) + ' ' + numClouds + ' ' + cloudSize + ' ' + time + ' 0.5 ' + pressure + ' ' + angle + ' 1 ' + gas + ' none ' + movieframes + ' ' + iondistmult
      if (energy == '0to7eVfcn'):
       command = EXAMPLE + ' ' + str(electricField) + ' ' + numClouds + ' ' + cloudSize + ' ' + time + ' 0 ' + pressure + ' ' + angle + ' 1 ' + gas + ' none ' + movieframes + ' ' + iondistmult
      writeJobDefinition(jobName, bashFileName, command)
				
      # Enqueue the run by executing the bash script.
      print 'Executing: qsub ' + bashFileName
      subprocess.call('qsub ' + bashFileName, shell = True)

print ''
print 'Done.'
