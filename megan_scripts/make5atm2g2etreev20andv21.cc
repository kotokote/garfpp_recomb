void make5atm2g2etreev20andv21() {
TFile *f = new TFile("07.09.14.100el.2g.2e.variedns.12ef.5atm.v20and21.root","RECREATE");
TTree *t = new TTree("t", "cloud number 1-6, tma or pure xe (1 = 2% tma, 0 = 100% xe), initial energy spectrum (1 = 0 to 7 eV along fcn 1/(E^2+7.6eV^2) or 1 = 0.5eV), which iteration of the simulation (event 1-10), the electron number (1-100), electric field (V/cm), angle (0 or 90 degrees wrt electric field), final x (cm), y-.2, z, t (ns), kinetic energy (eV), potential energy (eV), x0, y0-.2, z0, t0, e0 (starting total energy), potential0, xion, yion-.2, zion (coords of ion currently associated with that e-), recombination (0=no, 1=yes), geminate (0=no, 1=yes, -1 = n/a), intial minimum distance to ion (mdi) (cm), mdi at end, mdi max. all 5 atm, varied ns, 100el-ion pairs, null collisions on, finer tracking factor of 10.");

//create new variables for tree
double ef, angle, x, y, z, time, ke, potential, x0, y0, z0, t0, e0, potential0, xion, yion, zion, mdi0, mdi, mdimax;
int cloud, tma, spectrum, event, electron, recomb, geminate;

//use ReadFile to read data into tree from text file
t -> ReadFile("07.09.14.100el.2g.2e.variedns.12ef.5atm.v20and21/07.09.14.100el.2g.2e.variedns.12ef.5atm.v20and21.txt","cloud:tma/I:spectrum:event:electron:ef/D:angle:x:y:z:time:ke:potential:x0:y0:z0:t0:e0:potential0:xion:yion:zion:recomb/I:geminate:mdi0/D:mdi:mdimax");

f -> Write();
f -> Close();
}
