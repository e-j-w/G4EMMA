#ifndef SpectrometerConstruction_h
#define SpectrometerConstruction_h
#include "globals.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4RotationMatrix.hh"
#include "G4ThreeVector.hh"


// global variable
extern G4String MotherDir; // EMMAapp.cc
extern G4String UserDir; // EMMAapp.cc


class G4LogicalVolume;
class G4Material;
class G4VisAttributes;
class BGField1;
class BGField2;
class BGField3;
class BGField4;
class BGField5;
class BGField6;
class BGField7;
class EMMAGlobalField;
class SpectrometerConstruction
{
public:
  SpectrometerConstruction();
  SpectrometerConstruction(G4Material*, G4Material*, G4LogicalVolume*, 
  			G4double Pipe1length);
  virtual ~SpectrometerConstruction();
  //void FieldDebugger();
  void PrintFieldStrength();
  void ScaleFieldStrength( G4double msf, G4double esf ); // arguments are: msf='magnetic scale factor' and esf='electric scale factor'
  void ReadUserInput();
  void buildSlits( G4LogicalVolume* SpecWorldLogical,
		   G4String nameSolid, G4String nameLogical, G4String namePhys, 
		   G4double slitsThick, G4double angle, G4ThreeVector pos,
		   G4bool insert_hSlits, G4double hAper);
  void buildSlitSingle( G4LogicalVolume* SpecWorldLogical,
		   G4String nameSolid, G4String nameLogical, G4String namePhys, 
		   G4double slitsThick, G4ThreeVector pos,
		   G4bool insert_rSlits, G4double rAper,G4bool insert_lSlits, G4double lAper);

  G4LogicalVolume* GetQ2Log() { return Q2Logical; }
  G4LogicalVolume* GetPipe7Log() {return Pipe7Logical; }
  G4LogicalVolume* GetPipe8Log() {return Pipe8Logical; }
  G4LogicalVolume* GetQ3Log() {return Q3Logical; }

private:
  BGField1* Field1;
  BGField2* Field2;
  BGField3* Field3;
  BGField4* Field4;
  BGField5* Field5;
  BGField6* Field6;
  BGField7* Field7;
  EMMAGlobalField* GlobalField;
  G4VisAttributes* BeamLineVisAtt;
  G4VisAttributes* WallVisAtt;
  G4VisAttributes* PoleVisAtt;
  G4VisAttributes* BendingVisAtt;
  G4VisAttributes* SlitsVisAtt;

private:
  G4LogicalVolume* Q2Logical;
  G4LogicalVolume* Pipe7Logical;
  G4LogicalVolume* Pipe8Logical;
  G4LogicalVolume* Q3Logical;
  G4double slitshth;
  // Slits 1
  G4bool insert_hSlits1;
  G4double hAperture1;
  // Slits 2
  G4bool insert_hSlits2;
  G4double hAperture2;
  // Slits 3
  G4bool insert_rSlits3;
  G4double rAperture3;
  // Slits 4
  G4bool insert_lSlits4;
  G4double lAperture4;
  G4bool  fCheckOverlaps; // option to activate checking of volumes overlaps

  
};
#endif
