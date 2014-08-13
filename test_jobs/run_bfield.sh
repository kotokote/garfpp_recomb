#!/bin/bash

#../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 2TMA98Xe none 1000 1 10.0 > test_10atm_10t.txt
#../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 2TMA98Xe none 1000 1 1.0 > test_10atm_1t.txt
#../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 2TMA98Xe none 1000 1 0.0 > test_10atm_0t.txt
#../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 2TMA98Xe none 1000 1 100.0 > test_10atm_100t.txt

../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 Xe none 1000 1 0.0 > test_pureXe_10atm_0t.txt
../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 Xe none 1000 1 1.0 > test_pureXe_10atm_1t.txt
../hpxe_scripts/example 100 1 10 1.0 0 10 0 1 Xe none 1000 1 10.0 > test_pureXe_10atm_10t.txt
