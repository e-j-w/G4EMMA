# G4EMMA

GEANT4 simulations for EMMA (**E**lectro**M**agnetic **M**ass **A**nalyser, https://emma.triumf.ca/)

## Building the program

Build prerequisites:

* GEANT4 (https://geant4.web.cern.ch/, code in this repo has been tested with version 10.5)
* ROOT (https://root.cern.ch/)

The environment variable `ROOTLIB` must point to the ROOT libraries for the build to work.  This can be achieved by adding the following lines to your `~/.bashrc` file and reloading the terminal: 

```
#ROOT configuration
export ROOTLIB=/path/to/root/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTLIB
```

Once the build prerequisites are satisfied, `G4EMMA` can be built from its source directory:

```
cd /path/to/G4EMMA
cmake -DGeant4_DIR=/path/to/geant4/installation/ /path/to/G4EMMA
make
```

This will build the `EMMAapp` executable.

## Running the program

Upon running the `EMMAapp` executable, a GEANT4 command line will appear.  Macro files can be run with:

```
/control/execute path/to/macro.mac
```

Results are placed in the `UserDir/Results` directory.

## Interpreting results

There are some scripts in the `UserDir/Results/rootanalysis` directory which can be used to interpret the simulation results.

To generate some plots:

```
cd /path/to/G4EMMA/UserDir/Results/rootanalysis
root -l GEMMArootanalysis_v1.C
```

## Some nominal values for EMMA: 

Energy acceptance: +25% -17%
m/q acceptance: +/- 3.5%
mass dispersion in focal plane: 10 mm/%
angular acceptance: +/- 3.6 deg by +/- 3.6 deg (15 msr)


## Functionality/Usage changes updates: 

**Nov. 5 Update:** - Energy spectrum reading is implemented. To utilise it, 
go to UserDir where the rest of the input files are located. The 
spectrum, energySpectrum.dat, is located there. Note: it is currently 
configured to ignore the energy input information (beam energy and 
energy spread) in beam.dat. The energy spectrum reading also only 
affects beam simulations, and not anything else like alphasource. 

**Nov. 8 Update:** - Now, you can switch between if you read energy from a 
user-defined spectrum (see above) or use the default gaussian energy that's 
already implemented in beam.dat. 
To change this option, simply change the last (9th) line in beam.dat to 
SPEC or GAUS. It is set to SPEC by default. 

**Nov. 15 Update:** - added a histogram as part of the output data file which
displays the energy spectrum that was emitted from the target. Useful
for verification purposes. 

**Nov. 19 Update:** - added a histogram in the output file that displays the 
location of beam emissions at the target plane (in terms of X and Y). 

**Nov. 21 Update:** - added a histogram in the output file that displays the 
x and y components of the particle direction unit vectors (Target Plane
Transverse Emission Components).   

