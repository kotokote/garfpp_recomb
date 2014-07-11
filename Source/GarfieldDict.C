// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIUsersdInakajimadIWorkdIHPXeTPCdIgarfpp_recombdISourcedIGarfieldDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMC.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic_josh.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnalyticField.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys121.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys123.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentBase.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentCST.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentConstant.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentElmer.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentFieldMap.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentNeBem2d.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad2d.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad3d.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentUser.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/DriftLineRKF.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/FundamentalConstants.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GarfieldConstants.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryBase.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryRoot.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometrySimple.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MagboltzInterface.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Medium.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumConductor.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumGas.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumMagboltz.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumPlastic.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumSilicon.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Numerics.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/OpticalData.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Plotting.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngine.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngineRoot.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Random.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngine.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngineRoot.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Sensor.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Solid.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidBox.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidTube.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Track.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackBichsel.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackElectron.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackHeed.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackPAI.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackSimple.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewCell.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewDrift.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewFEMesh.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewField.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewGeometry.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewMedium.hh"
#include "/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewSignal.hh"

// Header files passed via #pragma extra_include

namespace Garfield {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static void Garfield_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("Garfield", 0 /*version*/, "Medium.hh", 9,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &Garfield_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static void Garfield_Dictionary() {
         GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void GarfieldcLcLAvalancheMicroscopic_Dictionary();
   static void GarfieldcLcLAvalancheMicroscopic_TClassManip(TClass*);
   static void *new_GarfieldcLcLAvalancheMicroscopic(void *p = 0);
   static void *newArray_GarfieldcLcLAvalancheMicroscopic(Long_t size, void *p);
   static void delete_GarfieldcLcLAvalancheMicroscopic(void *p);
   static void deleteArray_GarfieldcLcLAvalancheMicroscopic(void *p);
   static void destruct_GarfieldcLcLAvalancheMicroscopic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::AvalancheMicroscopic*)
   {
      ::Garfield::AvalancheMicroscopic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::AvalancheMicroscopic),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::AvalancheMicroscopic", "AvalancheMicroscopic.hh", 16,
                  typeid(::Garfield::AvalancheMicroscopic), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLAvalancheMicroscopic_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::AvalancheMicroscopic) );
      instance.SetNew(&new_GarfieldcLcLAvalancheMicroscopic);
      instance.SetNewArray(&newArray_GarfieldcLcLAvalancheMicroscopic);
      instance.SetDelete(&delete_GarfieldcLcLAvalancheMicroscopic);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLAvalancheMicroscopic);
      instance.SetDestructor(&destruct_GarfieldcLcLAvalancheMicroscopic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::AvalancheMicroscopic*)
   {
      return GenerateInitInstanceLocal((::Garfield::AvalancheMicroscopic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::AvalancheMicroscopic*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLAvalancheMicroscopic_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::AvalancheMicroscopic*)0x0)->GetClass();
      GarfieldcLcLAvalancheMicroscopic_TClassManip(theClass);
   }

   static void GarfieldcLcLAvalancheMicroscopic_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLAvalancheMC_Dictionary();
   static void GarfieldcLcLAvalancheMC_TClassManip(TClass*);
   static void *new_GarfieldcLcLAvalancheMC(void *p = 0);
   static void *newArray_GarfieldcLcLAvalancheMC(Long_t size, void *p);
   static void delete_GarfieldcLcLAvalancheMC(void *p);
   static void deleteArray_GarfieldcLcLAvalancheMC(void *p);
   static void destruct_GarfieldcLcLAvalancheMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::AvalancheMC*)
   {
      ::Garfield::AvalancheMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::AvalancheMC),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::AvalancheMC", "AvalancheMC.hh", 12,
                  typeid(::Garfield::AvalancheMC), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLAvalancheMC_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::AvalancheMC) );
      instance.SetNew(&new_GarfieldcLcLAvalancheMC);
      instance.SetNewArray(&newArray_GarfieldcLcLAvalancheMC);
      instance.SetDelete(&delete_GarfieldcLcLAvalancheMC);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLAvalancheMC);
      instance.SetDestructor(&destruct_GarfieldcLcLAvalancheMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::AvalancheMC*)
   {
      return GenerateInitInstanceLocal((::Garfield::AvalancheMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::AvalancheMC*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLAvalancheMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::AvalancheMC*)0x0)->GetClass();
      GarfieldcLcLAvalancheMC_TClassManip(theClass);
   }

   static void GarfieldcLcLAvalancheMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLMedium_Dictionary();
   static void GarfieldcLcLMedium_TClassManip(TClass*);
   static void *new_GarfieldcLcLMedium(void *p = 0);
   static void *newArray_GarfieldcLcLMedium(Long_t size, void *p);
   static void delete_GarfieldcLcLMedium(void *p);
   static void deleteArray_GarfieldcLcLMedium(void *p);
   static void destruct_GarfieldcLcLMedium(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::Medium*)
   {
      ::Garfield::Medium *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::Medium),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::Medium", "Medium.hh", 11,
                  typeid(::Garfield::Medium), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLMedium_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::Medium) );
      instance.SetNew(&new_GarfieldcLcLMedium);
      instance.SetNewArray(&newArray_GarfieldcLcLMedium);
      instance.SetDelete(&delete_GarfieldcLcLMedium);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLMedium);
      instance.SetDestructor(&destruct_GarfieldcLcLMedium);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::Medium*)
   {
      return GenerateInitInstanceLocal((::Garfield::Medium*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::Medium*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLMedium_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::Medium*)0x0)->GetClass();
      GarfieldcLcLMedium_TClassManip(theClass);
   }

   static void GarfieldcLcLMedium_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLMediumGas_Dictionary();
   static void GarfieldcLcLMediumGas_TClassManip(TClass*);
   static void *new_GarfieldcLcLMediumGas(void *p = 0);
   static void *newArray_GarfieldcLcLMediumGas(Long_t size, void *p);
   static void delete_GarfieldcLcLMediumGas(void *p);
   static void deleteArray_GarfieldcLcLMediumGas(void *p);
   static void destruct_GarfieldcLcLMediumGas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::MediumGas*)
   {
      ::Garfield::MediumGas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::MediumGas),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::MediumGas", "MediumGas.hh", 11,
                  typeid(::Garfield::MediumGas), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLMediumGas_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::MediumGas) );
      instance.SetNew(&new_GarfieldcLcLMediumGas);
      instance.SetNewArray(&newArray_GarfieldcLcLMediumGas);
      instance.SetDelete(&delete_GarfieldcLcLMediumGas);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLMediumGas);
      instance.SetDestructor(&destruct_GarfieldcLcLMediumGas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::MediumGas*)
   {
      return GenerateInitInstanceLocal((::Garfield::MediumGas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::MediumGas*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLMediumGas_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::MediumGas*)0x0)->GetClass();
      GarfieldcLcLMediumGas_TClassManip(theClass);
   }

   static void GarfieldcLcLMediumGas_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLMediumMagboltz_Dictionary();
   static void GarfieldcLcLMediumMagboltz_TClassManip(TClass*);
   static void *new_GarfieldcLcLMediumMagboltz(void *p = 0);
   static void *newArray_GarfieldcLcLMediumMagboltz(Long_t size, void *p);
   static void delete_GarfieldcLcLMediumMagboltz(void *p);
   static void deleteArray_GarfieldcLcLMediumMagboltz(void *p);
   static void destruct_GarfieldcLcLMediumMagboltz(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::MediumMagboltz*)
   {
      ::Garfield::MediumMagboltz *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::MediumMagboltz),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::MediumMagboltz", "MediumMagboltz.hh", 12,
                  typeid(::Garfield::MediumMagboltz), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLMediumMagboltz_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::MediumMagboltz) );
      instance.SetNew(&new_GarfieldcLcLMediumMagboltz);
      instance.SetNewArray(&newArray_GarfieldcLcLMediumMagboltz);
      instance.SetDelete(&delete_GarfieldcLcLMediumMagboltz);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLMediumMagboltz);
      instance.SetDestructor(&destruct_GarfieldcLcLMediumMagboltz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::MediumMagboltz*)
   {
      return GenerateInitInstanceLocal((::Garfield::MediumMagboltz*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::MediumMagboltz*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLMediumMagboltz_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::MediumMagboltz*)0x0)->GetClass();
      GarfieldcLcLMediumMagboltz_TClassManip(theClass);
   }

   static void GarfieldcLcLMediumMagboltz_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLMediumSilicon_Dictionary();
   static void GarfieldcLcLMediumSilicon_TClassManip(TClass*);
   static void *new_GarfieldcLcLMediumSilicon(void *p = 0);
   static void *newArray_GarfieldcLcLMediumSilicon(Long_t size, void *p);
   static void delete_GarfieldcLcLMediumSilicon(void *p);
   static void deleteArray_GarfieldcLcLMediumSilicon(void *p);
   static void destruct_GarfieldcLcLMediumSilicon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::MediumSilicon*)
   {
      ::Garfield::MediumSilicon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::MediumSilicon),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::MediumSilicon", "MediumSilicon.hh", 13,
                  typeid(::Garfield::MediumSilicon), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLMediumSilicon_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::MediumSilicon) );
      instance.SetNew(&new_GarfieldcLcLMediumSilicon);
      instance.SetNewArray(&newArray_GarfieldcLcLMediumSilicon);
      instance.SetDelete(&delete_GarfieldcLcLMediumSilicon);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLMediumSilicon);
      instance.SetDestructor(&destruct_GarfieldcLcLMediumSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::MediumSilicon*)
   {
      return GenerateInitInstanceLocal((::Garfield::MediumSilicon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::MediumSilicon*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLMediumSilicon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::MediumSilicon*)0x0)->GetClass();
      GarfieldcLcLMediumSilicon_TClassManip(theClass);
   }

   static void GarfieldcLcLMediumSilicon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLOpticalData_Dictionary();
   static void GarfieldcLcLOpticalData_TClassManip(TClass*);
   static void *new_GarfieldcLcLOpticalData(void *p = 0);
   static void *newArray_GarfieldcLcLOpticalData(Long_t size, void *p);
   static void delete_GarfieldcLcLOpticalData(void *p);
   static void deleteArray_GarfieldcLcLOpticalData(void *p);
   static void destruct_GarfieldcLcLOpticalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::OpticalData*)
   {
      ::Garfield::OpticalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::OpticalData),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::OpticalData", "OpticalData.hh", 9,
                  typeid(::Garfield::OpticalData), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLOpticalData_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::OpticalData) );
      instance.SetNew(&new_GarfieldcLcLOpticalData);
      instance.SetNewArray(&newArray_GarfieldcLcLOpticalData);
      instance.SetDelete(&delete_GarfieldcLcLOpticalData);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLOpticalData);
      instance.SetDestructor(&destruct_GarfieldcLcLOpticalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::OpticalData*)
   {
      return GenerateInitInstanceLocal((::Garfield::OpticalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::OpticalData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLOpticalData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::OpticalData*)0x0)->GetClass();
      GarfieldcLcLOpticalData_TClassManip(theClass);
   }

   static void GarfieldcLcLOpticalData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLSolid_Dictionary();
   static void GarfieldcLcLSolid_TClassManip(TClass*);
   static void delete_GarfieldcLcLSolid(void *p);
   static void deleteArray_GarfieldcLcLSolid(void *p);
   static void destruct_GarfieldcLcLSolid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::Solid*)
   {
      ::Garfield::Solid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::Solid),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::Solid", "Solid.hh", 8,
                  typeid(::Garfield::Solid), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLSolid_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::Solid) );
      instance.SetDelete(&delete_GarfieldcLcLSolid);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLSolid);
      instance.SetDestructor(&destruct_GarfieldcLcLSolid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::Solid*)
   {
      return GenerateInitInstanceLocal((::Garfield::Solid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::Solid*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLSolid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::Solid*)0x0)->GetClass();
      GarfieldcLcLSolid_TClassManip(theClass);
   }

   static void GarfieldcLcLSolid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLSolidBox_Dictionary();
   static void GarfieldcLcLSolidBox_TClassManip(TClass*);
   static void delete_GarfieldcLcLSolidBox(void *p);
   static void deleteArray_GarfieldcLcLSolidBox(void *p);
   static void destruct_GarfieldcLcLSolidBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::SolidBox*)
   {
      ::Garfield::SolidBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::SolidBox),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::SolidBox", "SolidBox.hh", 10,
                  typeid(::Garfield::SolidBox), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLSolidBox_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::SolidBox) );
      instance.SetDelete(&delete_GarfieldcLcLSolidBox);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLSolidBox);
      instance.SetDestructor(&destruct_GarfieldcLcLSolidBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::SolidBox*)
   {
      return GenerateInitInstanceLocal((::Garfield::SolidBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::SolidBox*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLSolidBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::SolidBox*)0x0)->GetClass();
      GarfieldcLcLSolidBox_TClassManip(theClass);
   }

   static void GarfieldcLcLSolidBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLSolidTube_Dictionary();
   static void GarfieldcLcLSolidTube_TClassManip(TClass*);
   static void delete_GarfieldcLcLSolidTube(void *p);
   static void deleteArray_GarfieldcLcLSolidTube(void *p);
   static void destruct_GarfieldcLcLSolidTube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::SolidTube*)
   {
      ::Garfield::SolidTube *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::SolidTube),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::SolidTube", "SolidTube.hh", 10,
                  typeid(::Garfield::SolidTube), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLSolidTube_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::SolidTube) );
      instance.SetDelete(&delete_GarfieldcLcLSolidTube);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLSolidTube);
      instance.SetDestructor(&destruct_GarfieldcLcLSolidTube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::SolidTube*)
   {
      return GenerateInitInstanceLocal((::Garfield::SolidTube*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::SolidTube*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLSolidTube_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::SolidTube*)0x0)->GetClass();
      GarfieldcLcLSolidTube_TClassManip(theClass);
   }

   static void GarfieldcLcLSolidTube_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLGeometryBase_Dictionary();
   static void GarfieldcLcLGeometryBase_TClassManip(TClass*);
   static void delete_GarfieldcLcLGeometryBase(void *p);
   static void deleteArray_GarfieldcLcLGeometryBase(void *p);
   static void destruct_GarfieldcLcLGeometryBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::GeometryBase*)
   {
      ::Garfield::GeometryBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::GeometryBase),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::GeometryBase", "GeometryBase.hh", 12,
                  typeid(::Garfield::GeometryBase), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLGeometryBase_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::GeometryBase) );
      instance.SetDelete(&delete_GarfieldcLcLGeometryBase);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLGeometryBase);
      instance.SetDestructor(&destruct_GarfieldcLcLGeometryBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::GeometryBase*)
   {
      return GenerateInitInstanceLocal((::Garfield::GeometryBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::GeometryBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLGeometryBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::GeometryBase*)0x0)->GetClass();
      GarfieldcLcLGeometryBase_TClassManip(theClass);
   }

   static void GarfieldcLcLGeometryBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLGeometrySimple_Dictionary();
   static void GarfieldcLcLGeometrySimple_TClassManip(TClass*);
   static void *new_GarfieldcLcLGeometrySimple(void *p = 0);
   static void *newArray_GarfieldcLcLGeometrySimple(Long_t size, void *p);
   static void delete_GarfieldcLcLGeometrySimple(void *p);
   static void deleteArray_GarfieldcLcLGeometrySimple(void *p);
   static void destruct_GarfieldcLcLGeometrySimple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::GeometrySimple*)
   {
      ::Garfield::GeometrySimple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::GeometrySimple),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::GeometrySimple", "GeometrySimple.hh", 13,
                  typeid(::Garfield::GeometrySimple), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLGeometrySimple_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::GeometrySimple) );
      instance.SetNew(&new_GarfieldcLcLGeometrySimple);
      instance.SetNewArray(&newArray_GarfieldcLcLGeometrySimple);
      instance.SetDelete(&delete_GarfieldcLcLGeometrySimple);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLGeometrySimple);
      instance.SetDestructor(&destruct_GarfieldcLcLGeometrySimple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::GeometrySimple*)
   {
      return GenerateInitInstanceLocal((::Garfield::GeometrySimple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::GeometrySimple*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLGeometrySimple_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::GeometrySimple*)0x0)->GetClass();
      GarfieldcLcLGeometrySimple_TClassManip(theClass);
   }

   static void GarfieldcLcLGeometrySimple_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLGeometryRoot_Dictionary();
   static void GarfieldcLcLGeometryRoot_TClassManip(TClass*);
   static void *new_GarfieldcLcLGeometryRoot(void *p = 0);
   static void *newArray_GarfieldcLcLGeometryRoot(Long_t size, void *p);
   static void delete_GarfieldcLcLGeometryRoot(void *p);
   static void deleteArray_GarfieldcLcLGeometryRoot(void *p);
   static void destruct_GarfieldcLcLGeometryRoot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::GeometryRoot*)
   {
      ::Garfield::GeometryRoot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::GeometryRoot),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::GeometryRoot", "GeometryRoot.hh", 15,
                  typeid(::Garfield::GeometryRoot), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLGeometryRoot_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::GeometryRoot) );
      instance.SetNew(&new_GarfieldcLcLGeometryRoot);
      instance.SetNewArray(&newArray_GarfieldcLcLGeometryRoot);
      instance.SetDelete(&delete_GarfieldcLcLGeometryRoot);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLGeometryRoot);
      instance.SetDestructor(&destruct_GarfieldcLcLGeometryRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::GeometryRoot*)
   {
      return GenerateInitInstanceLocal((::Garfield::GeometryRoot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::GeometryRoot*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLGeometryRoot_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::GeometryRoot*)0x0)->GetClass();
      GarfieldcLcLGeometryRoot_TClassManip(theClass);
   }

   static void GarfieldcLcLGeometryRoot_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentBase_Dictionary();
   static void GarfieldcLcLComponentBase_TClassManip(TClass*);
   static void delete_GarfieldcLcLComponentBase(void *p);
   static void deleteArray_GarfieldcLcLComponentBase(void *p);
   static void destruct_GarfieldcLcLComponentBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentBase*)
   {
      ::Garfield::ComponentBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentBase),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentBase", "ComponentBase.hh", 13,
                  typeid(::Garfield::ComponentBase), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentBase_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentBase) );
      instance.SetDelete(&delete_GarfieldcLcLComponentBase);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentBase);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentBase*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentBase*)0x0)->GetClass();
      GarfieldcLcLComponentBase_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentAnalyticField_Dictionary();
   static void GarfieldcLcLComponentAnalyticField_TClassManip(TClass*);
   static void *new_GarfieldcLcLComponentAnalyticField(void *p = 0);
   static void *newArray_GarfieldcLcLComponentAnalyticField(Long_t size, void *p);
   static void delete_GarfieldcLcLComponentAnalyticField(void *p);
   static void deleteArray_GarfieldcLcLComponentAnalyticField(void *p);
   static void destruct_GarfieldcLcLComponentAnalyticField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentAnalyticField*)
   {
      ::Garfield::ComponentAnalyticField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentAnalyticField),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentAnalyticField", "ComponentAnalyticField.hh", 15,
                  typeid(::Garfield::ComponentAnalyticField), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentAnalyticField_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentAnalyticField) );
      instance.SetNew(&new_GarfieldcLcLComponentAnalyticField);
      instance.SetNewArray(&newArray_GarfieldcLcLComponentAnalyticField);
      instance.SetDelete(&delete_GarfieldcLcLComponentAnalyticField);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentAnalyticField);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentAnalyticField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentAnalyticField*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentAnalyticField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentAnalyticField*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentAnalyticField_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentAnalyticField*)0x0)->GetClass();
      GarfieldcLcLComponentAnalyticField_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentAnalyticField_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentFieldMap_Dictionary();
   static void GarfieldcLcLComponentFieldMap_TClassManip(TClass*);
   static void delete_GarfieldcLcLComponentFieldMap(void *p);
   static void deleteArray_GarfieldcLcLComponentFieldMap(void *p);
   static void destruct_GarfieldcLcLComponentFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentFieldMap*)
   {
      ::Garfield::ComponentFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentFieldMap),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentFieldMap", "ComponentFieldMap.hh", 9,
                  typeid(::Garfield::ComponentFieldMap), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentFieldMap_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentFieldMap) );
      instance.SetDelete(&delete_GarfieldcLcLComponentFieldMap);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentFieldMap);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentFieldMap*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentFieldMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentFieldMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentFieldMap*)0x0)->GetClass();
      GarfieldcLcLComponentFieldMap_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentFieldMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentAnsys123_Dictionary();
   static void GarfieldcLcLComponentAnsys123_TClassManip(TClass*);
   static void *new_GarfieldcLcLComponentAnsys123(void *p = 0);
   static void *newArray_GarfieldcLcLComponentAnsys123(Long_t size, void *p);
   static void delete_GarfieldcLcLComponentAnsys123(void *p);
   static void deleteArray_GarfieldcLcLComponentAnsys123(void *p);
   static void destruct_GarfieldcLcLComponentAnsys123(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentAnsys123*)
   {
      ::Garfield::ComponentAnsys123 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentAnsys123),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentAnsys123", "ComponentAnsys123.hh", 8,
                  typeid(::Garfield::ComponentAnsys123), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentAnsys123_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentAnsys123) );
      instance.SetNew(&new_GarfieldcLcLComponentAnsys123);
      instance.SetNewArray(&newArray_GarfieldcLcLComponentAnsys123);
      instance.SetDelete(&delete_GarfieldcLcLComponentAnsys123);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentAnsys123);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentAnsys123);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentAnsys123*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentAnsys123*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentAnsys123*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentAnsys123_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentAnsys123*)0x0)->GetClass();
      GarfieldcLcLComponentAnsys123_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentAnsys123_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentAnsys121_Dictionary();
   static void GarfieldcLcLComponentAnsys121_TClassManip(TClass*);
   static void *new_GarfieldcLcLComponentAnsys121(void *p = 0);
   static void *newArray_GarfieldcLcLComponentAnsys121(Long_t size, void *p);
   static void delete_GarfieldcLcLComponentAnsys121(void *p);
   static void deleteArray_GarfieldcLcLComponentAnsys121(void *p);
   static void destruct_GarfieldcLcLComponentAnsys121(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentAnsys121*)
   {
      ::Garfield::ComponentAnsys121 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentAnsys121),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentAnsys121", "ComponentAnsys121.hh", 8,
                  typeid(::Garfield::ComponentAnsys121), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentAnsys121_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentAnsys121) );
      instance.SetNew(&new_GarfieldcLcLComponentAnsys121);
      instance.SetNewArray(&newArray_GarfieldcLcLComponentAnsys121);
      instance.SetDelete(&delete_GarfieldcLcLComponentAnsys121);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentAnsys121);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentAnsys121);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentAnsys121*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentAnsys121*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentAnsys121*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentAnsys121_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentAnsys121*)0x0)->GetClass();
      GarfieldcLcLComponentAnsys121_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentAnsys121_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentConstant_Dictionary();
   static void GarfieldcLcLComponentConstant_TClassManip(TClass*);
   static void *new_GarfieldcLcLComponentConstant(void *p = 0);
   static void *newArray_GarfieldcLcLComponentConstant(Long_t size, void *p);
   static void delete_GarfieldcLcLComponentConstant(void *p);
   static void deleteArray_GarfieldcLcLComponentConstant(void *p);
   static void destruct_GarfieldcLcLComponentConstant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentConstant*)
   {
      ::Garfield::ComponentConstant *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentConstant),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentConstant", "ComponentConstant.hh", 10,
                  typeid(::Garfield::ComponentConstant), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentConstant_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentConstant) );
      instance.SetNew(&new_GarfieldcLcLComponentConstant);
      instance.SetNewArray(&newArray_GarfieldcLcLComponentConstant);
      instance.SetDelete(&delete_GarfieldcLcLComponentConstant);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentConstant);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentConstant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentConstant*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentConstant*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentConstant*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentConstant_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentConstant*)0x0)->GetClass();
      GarfieldcLcLComponentConstant_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentConstant_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLComponentUser_Dictionary();
   static void GarfieldcLcLComponentUser_TClassManip(TClass*);
   static void *new_GarfieldcLcLComponentUser(void *p = 0);
   static void *newArray_GarfieldcLcLComponentUser(Long_t size, void *p);
   static void delete_GarfieldcLcLComponentUser(void *p);
   static void deleteArray_GarfieldcLcLComponentUser(void *p);
   static void destruct_GarfieldcLcLComponentUser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ComponentUser*)
   {
      ::Garfield::ComponentUser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ComponentUser),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ComponentUser", "ComponentUser.hh", 10,
                  typeid(::Garfield::ComponentUser), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLComponentUser_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ComponentUser) );
      instance.SetNew(&new_GarfieldcLcLComponentUser);
      instance.SetNewArray(&newArray_GarfieldcLcLComponentUser);
      instance.SetDelete(&delete_GarfieldcLcLComponentUser);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLComponentUser);
      instance.SetDestructor(&destruct_GarfieldcLcLComponentUser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ComponentUser*)
   {
      return GenerateInitInstanceLocal((::Garfield::ComponentUser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ComponentUser*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLComponentUser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ComponentUser*)0x0)->GetClass();
      GarfieldcLcLComponentUser_TClassManip(theClass);
   }

   static void GarfieldcLcLComponentUser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLSensor_Dictionary();
   static void GarfieldcLcLSensor_TClassManip(TClass*);
   static void *new_GarfieldcLcLSensor(void *p = 0);
   static void *newArray_GarfieldcLcLSensor(Long_t size, void *p);
   static void delete_GarfieldcLcLSensor(void *p);
   static void deleteArray_GarfieldcLcLSensor(void *p);
   static void destruct_GarfieldcLcLSensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::Sensor*)
   {
      ::Garfield::Sensor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::Sensor),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::Sensor", "Sensor.hh", 12,
                  typeid(::Garfield::Sensor), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLSensor_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::Sensor) );
      instance.SetNew(&new_GarfieldcLcLSensor);
      instance.SetNewArray(&newArray_GarfieldcLcLSensor);
      instance.SetDelete(&delete_GarfieldcLcLSensor);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLSensor);
      instance.SetDestructor(&destruct_GarfieldcLcLSensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::Sensor*)
   {
      return GenerateInitInstanceLocal((::Garfield::Sensor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::Sensor*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLSensor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::Sensor*)0x0)->GetClass();
      GarfieldcLcLSensor_TClassManip(theClass);
   }

   static void GarfieldcLcLSensor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLViewMedium_Dictionary();
   static void GarfieldcLcLViewMedium_TClassManip(TClass*);
   static void *new_GarfieldcLcLViewMedium(void *p = 0);
   static void *newArray_GarfieldcLcLViewMedium(Long_t size, void *p);
   static void delete_GarfieldcLcLViewMedium(void *p);
   static void deleteArray_GarfieldcLcLViewMedium(void *p);
   static void destruct_GarfieldcLcLViewMedium(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewMedium*)
   {
      ::Garfield::ViewMedium *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ViewMedium),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewMedium", "ViewMedium.hh", 16,
                  typeid(::Garfield::ViewMedium), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLViewMedium_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ViewMedium) );
      instance.SetNew(&new_GarfieldcLcLViewMedium);
      instance.SetNewArray(&newArray_GarfieldcLcLViewMedium);
      instance.SetDelete(&delete_GarfieldcLcLViewMedium);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewMedium);
      instance.SetDestructor(&destruct_GarfieldcLcLViewMedium);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewMedium*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewMedium*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewMedium*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLViewMedium_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewMedium*)0x0)->GetClass();
      GarfieldcLcLViewMedium_TClassManip(theClass);
   }

   static void GarfieldcLcLViewMedium_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLViewField_Dictionary();
   static void GarfieldcLcLViewField_TClassManip(TClass*);
   static void *new_GarfieldcLcLViewField(void *p = 0);
   static void *newArray_GarfieldcLcLViewField(Long_t size, void *p);
   static void delete_GarfieldcLcLViewField(void *p);
   static void deleteArray_GarfieldcLcLViewField(void *p);
   static void destruct_GarfieldcLcLViewField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewField*)
   {
      ::Garfield::ViewField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ViewField),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewField", "ViewField.hh", 14,
                  typeid(::Garfield::ViewField), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLViewField_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ViewField) );
      instance.SetNew(&new_GarfieldcLcLViewField);
      instance.SetNewArray(&newArray_GarfieldcLcLViewField);
      instance.SetDelete(&delete_GarfieldcLcLViewField);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewField);
      instance.SetDestructor(&destruct_GarfieldcLcLViewField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewField*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewField*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLViewField_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewField*)0x0)->GetClass();
      GarfieldcLcLViewField_TClassManip(theClass);
   }

   static void GarfieldcLcLViewField_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLViewDrift_Dictionary();
   static void GarfieldcLcLViewDrift_TClassManip(TClass*);
   static void *new_GarfieldcLcLViewDrift(void *p = 0);
   static void *newArray_GarfieldcLcLViewDrift(Long_t size, void *p);
   static void delete_GarfieldcLcLViewDrift(void *p);
   static void deleteArray_GarfieldcLcLViewDrift(void *p);
   static void destruct_GarfieldcLcLViewDrift(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewDrift*)
   {
      ::Garfield::ViewDrift *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ViewDrift),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewDrift", "ViewDrift.hh", 14,
                  typeid(::Garfield::ViewDrift), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLViewDrift_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ViewDrift) );
      instance.SetNew(&new_GarfieldcLcLViewDrift);
      instance.SetNewArray(&newArray_GarfieldcLcLViewDrift);
      instance.SetDelete(&delete_GarfieldcLcLViewDrift);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewDrift);
      instance.SetDestructor(&destruct_GarfieldcLcLViewDrift);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewDrift*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewDrift*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewDrift*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLViewDrift_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewDrift*)0x0)->GetClass();
      GarfieldcLcLViewDrift_TClassManip(theClass);
   }

   static void GarfieldcLcLViewDrift_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLViewSignal_Dictionary();
   static void GarfieldcLcLViewSignal_TClassManip(TClass*);
   static void *new_GarfieldcLcLViewSignal(void *p = 0);
   static void *newArray_GarfieldcLcLViewSignal(Long_t size, void *p);
   static void delete_GarfieldcLcLViewSignal(void *p);
   static void deleteArray_GarfieldcLcLViewSignal(void *p);
   static void destruct_GarfieldcLcLViewSignal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewSignal*)
   {
      ::Garfield::ViewSignal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::ViewSignal),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewSignal", "ViewSignal.hh", 15,
                  typeid(::Garfield::ViewSignal), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLViewSignal_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::ViewSignal) );
      instance.SetNew(&new_GarfieldcLcLViewSignal);
      instance.SetNewArray(&newArray_GarfieldcLcLViewSignal);
      instance.SetDelete(&delete_GarfieldcLcLViewSignal);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewSignal);
      instance.SetDestructor(&destruct_GarfieldcLcLViewSignal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewSignal*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewSignal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewSignal*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLViewSignal_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewSignal*)0x0)->GetClass();
      GarfieldcLcLViewSignal_TClassManip(theClass);
   }

   static void GarfieldcLcLViewSignal_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_GarfieldcLcLViewCell(void *p = 0);
   static void *newArray_GarfieldcLcLViewCell(Long_t size, void *p);
   static void delete_GarfieldcLcLViewCell(void *p);
   static void deleteArray_GarfieldcLcLViewCell(void *p);
   static void destruct_GarfieldcLcLViewCell(void *p);
   static void streamer_GarfieldcLcLViewCell(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewCell*)
   {
      ::Garfield::ViewCell *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Garfield::ViewCell >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewCell", ::Garfield::ViewCell::Class_Version(), "ViewCell.hh", 77,
                  typeid(::Garfield::ViewCell), DefineBehavior(ptr, ptr),
                  &::Garfield::ViewCell::Dictionary, isa_proxy, 16,
                  sizeof(::Garfield::ViewCell) );
      instance.SetNew(&new_GarfieldcLcLViewCell);
      instance.SetNewArray(&newArray_GarfieldcLcLViewCell);
      instance.SetDelete(&delete_GarfieldcLcLViewCell);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewCell);
      instance.SetDestructor(&destruct_GarfieldcLcLViewCell);
      instance.SetStreamerFunc(&streamer_GarfieldcLcLViewCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewCell*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewCell*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewCell*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GarfieldcLcLViewGeometry(void *p = 0);
   static void *newArray_GarfieldcLcLViewGeometry(Long_t size, void *p);
   static void delete_GarfieldcLcLViewGeometry(void *p);
   static void deleteArray_GarfieldcLcLViewGeometry(void *p);
   static void destruct_GarfieldcLcLViewGeometry(void *p);
   static void streamer_GarfieldcLcLViewGeometry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::ViewGeometry*)
   {
      ::Garfield::ViewGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Garfield::ViewGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::ViewGeometry", ::Garfield::ViewGeometry::Class_Version(), "ViewGeometry.hh", 33,
                  typeid(::Garfield::ViewGeometry), DefineBehavior(ptr, ptr),
                  &::Garfield::ViewGeometry::Dictionary, isa_proxy, 16,
                  sizeof(::Garfield::ViewGeometry) );
      instance.SetNew(&new_GarfieldcLcLViewGeometry);
      instance.SetNewArray(&newArray_GarfieldcLcLViewGeometry);
      instance.SetDelete(&delete_GarfieldcLcLViewGeometry);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLViewGeometry);
      instance.SetDestructor(&destruct_GarfieldcLcLViewGeometry);
      instance.SetStreamerFunc(&streamer_GarfieldcLcLViewGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::ViewGeometry*)
   {
      return GenerateInitInstanceLocal((::Garfield::ViewGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::ViewGeometry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLTrack_Dictionary();
   static void GarfieldcLcLTrack_TClassManip(TClass*);
   static void delete_GarfieldcLcLTrack(void *p);
   static void deleteArray_GarfieldcLcLTrack(void *p);
   static void destruct_GarfieldcLcLTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::Track*)
   {
      ::Garfield::Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::Track),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::Track", "Track.hh", 14,
                  typeid(::Garfield::Track), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLTrack_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::Track) );
      instance.SetDelete(&delete_GarfieldcLcLTrack);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLTrack);
      instance.SetDestructor(&destruct_GarfieldcLcLTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::Track*)
   {
      return GenerateInitInstanceLocal((::Garfield::Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::Track*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::Track*)0x0)->GetClass();
      GarfieldcLcLTrack_TClassManip(theClass);
   }

   static void GarfieldcLcLTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLTrackHeed_Dictionary();
   static void GarfieldcLcLTrackHeed_TClassManip(TClass*);
   static void *new_GarfieldcLcLTrackHeed(void *p = 0);
   static void *newArray_GarfieldcLcLTrackHeed(Long_t size, void *p);
   static void delete_GarfieldcLcLTrackHeed(void *p);
   static void deleteArray_GarfieldcLcLTrackHeed(void *p);
   static void destruct_GarfieldcLcLTrackHeed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::TrackHeed*)
   {
      ::Garfield::TrackHeed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::TrackHeed),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::TrackHeed", "TrackHeed.hh", 28,
                  typeid(::Garfield::TrackHeed), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLTrackHeed_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::TrackHeed) );
      instance.SetNew(&new_GarfieldcLcLTrackHeed);
      instance.SetNewArray(&newArray_GarfieldcLcLTrackHeed);
      instance.SetDelete(&delete_GarfieldcLcLTrackHeed);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLTrackHeed);
      instance.SetDestructor(&destruct_GarfieldcLcLTrackHeed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::TrackHeed*)
   {
      return GenerateInitInstanceLocal((::Garfield::TrackHeed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::TrackHeed*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLTrackHeed_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::TrackHeed*)0x0)->GetClass();
      GarfieldcLcLTrackHeed_TClassManip(theClass);
   }

   static void GarfieldcLcLTrackHeed_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLTrackElectron_Dictionary();
   static void GarfieldcLcLTrackElectron_TClassManip(TClass*);
   static void *new_GarfieldcLcLTrackElectron(void *p = 0);
   static void *newArray_GarfieldcLcLTrackElectron(Long_t size, void *p);
   static void delete_GarfieldcLcLTrackElectron(void *p);
   static void deleteArray_GarfieldcLcLTrackElectron(void *p);
   static void destruct_GarfieldcLcLTrackElectron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::TrackElectron*)
   {
      ::Garfield::TrackElectron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::TrackElectron),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::TrackElectron", "TrackElectron.hh", 13,
                  typeid(::Garfield::TrackElectron), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLTrackElectron_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::TrackElectron) );
      instance.SetNew(&new_GarfieldcLcLTrackElectron);
      instance.SetNewArray(&newArray_GarfieldcLcLTrackElectron);
      instance.SetDelete(&delete_GarfieldcLcLTrackElectron);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLTrackElectron);
      instance.SetDestructor(&destruct_GarfieldcLcLTrackElectron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::TrackElectron*)
   {
      return GenerateInitInstanceLocal((::Garfield::TrackElectron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::TrackElectron*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLTrackElectron_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::TrackElectron*)0x0)->GetClass();
      GarfieldcLcLTrackElectron_TClassManip(theClass);
   }

   static void GarfieldcLcLTrackElectron_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLTrackBichsel_Dictionary();
   static void GarfieldcLcLTrackBichsel_TClassManip(TClass*);
   static void *new_GarfieldcLcLTrackBichsel(void *p = 0);
   static void *newArray_GarfieldcLcLTrackBichsel(Long_t size, void *p);
   static void delete_GarfieldcLcLTrackBichsel(void *p);
   static void deleteArray_GarfieldcLcLTrackBichsel(void *p);
   static void destruct_GarfieldcLcLTrackBichsel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::TrackBichsel*)
   {
      ::Garfield::TrackBichsel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::TrackBichsel),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::TrackBichsel", "TrackBichsel.hh", 13,
                  typeid(::Garfield::TrackBichsel), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLTrackBichsel_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::TrackBichsel) );
      instance.SetNew(&new_GarfieldcLcLTrackBichsel);
      instance.SetNewArray(&newArray_GarfieldcLcLTrackBichsel);
      instance.SetDelete(&delete_GarfieldcLcLTrackBichsel);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLTrackBichsel);
      instance.SetDestructor(&destruct_GarfieldcLcLTrackBichsel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::TrackBichsel*)
   {
      return GenerateInitInstanceLocal((::Garfield::TrackBichsel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::TrackBichsel*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLTrackBichsel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::TrackBichsel*)0x0)->GetClass();
      GarfieldcLcLTrackBichsel_TClassManip(theClass);
   }

   static void GarfieldcLcLTrackBichsel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void GarfieldcLcLTrackPAI_Dictionary();
   static void GarfieldcLcLTrackPAI_TClassManip(TClass*);
   static void *new_GarfieldcLcLTrackPAI(void *p = 0);
   static void *newArray_GarfieldcLcLTrackPAI(Long_t size, void *p);
   static void delete_GarfieldcLcLTrackPAI(void *p);
   static void deleteArray_GarfieldcLcLTrackPAI(void *p);
   static void destruct_GarfieldcLcLTrackPAI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Garfield::TrackPAI*)
   {
      ::Garfield::TrackPAI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Garfield::TrackPAI),0);
      static ::ROOT::TGenericClassInfo 
         instance("Garfield::TrackPAI", "TrackPAI.hh", 13,
                  typeid(::Garfield::TrackPAI), DefineBehavior(ptr, ptr),
                  &GarfieldcLcLTrackPAI_Dictionary, isa_proxy, 0,
                  sizeof(::Garfield::TrackPAI) );
      instance.SetNew(&new_GarfieldcLcLTrackPAI);
      instance.SetNewArray(&newArray_GarfieldcLcLTrackPAI);
      instance.SetDelete(&delete_GarfieldcLcLTrackPAI);
      instance.SetDeleteArray(&deleteArray_GarfieldcLcLTrackPAI);
      instance.SetDestructor(&destruct_GarfieldcLcLTrackPAI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Garfield::TrackPAI*)
   {
      return GenerateInitInstanceLocal((::Garfield::TrackPAI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Garfield::TrackPAI*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void GarfieldcLcLTrackPAI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Garfield::TrackPAI*)0x0)->GetClass();
      GarfieldcLcLTrackPAI_TClassManip(theClass);
   }

   static void GarfieldcLcLTrackPAI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace Garfield {
//______________________________________________________________________________
TClass *ViewCell::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *ViewCell::Class_Name()
{
   return "Garfield::ViewCell";
}

//______________________________________________________________________________
const char *ViewCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewCell*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ViewCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewCell*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void ViewCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewCell*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *ViewCell::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewCell*)0x0)->GetClass();
   return fgIsA;
}

} // namespace Garfield
namespace Garfield {
//______________________________________________________________________________
TClass *ViewGeometry::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *ViewGeometry::Class_Name()
{
   return "Garfield::ViewGeometry";
}

//______________________________________________________________________________
const char *ViewGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ViewGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void ViewGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewGeometry*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *ViewGeometry::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Garfield::ViewGeometry*)0x0)->GetClass();
   return fgIsA;
}

} // namespace Garfield
namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLAvalancheMicroscopic(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::AvalancheMicroscopic : new ::Garfield::AvalancheMicroscopic;
   }
   static void *newArray_GarfieldcLcLAvalancheMicroscopic(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::AvalancheMicroscopic[nElements] : new ::Garfield::AvalancheMicroscopic[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLAvalancheMicroscopic(void *p) {
      delete ((::Garfield::AvalancheMicroscopic*)p);
   }
   static void deleteArray_GarfieldcLcLAvalancheMicroscopic(void *p) {
      delete [] ((::Garfield::AvalancheMicroscopic*)p);
   }
   static void destruct_GarfieldcLcLAvalancheMicroscopic(void *p) {
      typedef ::Garfield::AvalancheMicroscopic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::AvalancheMicroscopic

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLAvalancheMC(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::AvalancheMC : new ::Garfield::AvalancheMC;
   }
   static void *newArray_GarfieldcLcLAvalancheMC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::AvalancheMC[nElements] : new ::Garfield::AvalancheMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLAvalancheMC(void *p) {
      delete ((::Garfield::AvalancheMC*)p);
   }
   static void deleteArray_GarfieldcLcLAvalancheMC(void *p) {
      delete [] ((::Garfield::AvalancheMC*)p);
   }
   static void destruct_GarfieldcLcLAvalancheMC(void *p) {
      typedef ::Garfield::AvalancheMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::AvalancheMC

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLMedium(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::Medium : new ::Garfield::Medium;
   }
   static void *newArray_GarfieldcLcLMedium(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::Medium[nElements] : new ::Garfield::Medium[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLMedium(void *p) {
      delete ((::Garfield::Medium*)p);
   }
   static void deleteArray_GarfieldcLcLMedium(void *p) {
      delete [] ((::Garfield::Medium*)p);
   }
   static void destruct_GarfieldcLcLMedium(void *p) {
      typedef ::Garfield::Medium current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::Medium

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLMediumGas(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumGas : new ::Garfield::MediumGas;
   }
   static void *newArray_GarfieldcLcLMediumGas(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumGas[nElements] : new ::Garfield::MediumGas[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLMediumGas(void *p) {
      delete ((::Garfield::MediumGas*)p);
   }
   static void deleteArray_GarfieldcLcLMediumGas(void *p) {
      delete [] ((::Garfield::MediumGas*)p);
   }
   static void destruct_GarfieldcLcLMediumGas(void *p) {
      typedef ::Garfield::MediumGas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::MediumGas

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLMediumMagboltz(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumMagboltz : new ::Garfield::MediumMagboltz;
   }
   static void *newArray_GarfieldcLcLMediumMagboltz(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumMagboltz[nElements] : new ::Garfield::MediumMagboltz[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLMediumMagboltz(void *p) {
      delete ((::Garfield::MediumMagboltz*)p);
   }
   static void deleteArray_GarfieldcLcLMediumMagboltz(void *p) {
      delete [] ((::Garfield::MediumMagboltz*)p);
   }
   static void destruct_GarfieldcLcLMediumMagboltz(void *p) {
      typedef ::Garfield::MediumMagboltz current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::MediumMagboltz

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLMediumSilicon(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumSilicon : new ::Garfield::MediumSilicon;
   }
   static void *newArray_GarfieldcLcLMediumSilicon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::MediumSilicon[nElements] : new ::Garfield::MediumSilicon[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLMediumSilicon(void *p) {
      delete ((::Garfield::MediumSilicon*)p);
   }
   static void deleteArray_GarfieldcLcLMediumSilicon(void *p) {
      delete [] ((::Garfield::MediumSilicon*)p);
   }
   static void destruct_GarfieldcLcLMediumSilicon(void *p) {
      typedef ::Garfield::MediumSilicon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::MediumSilicon

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLOpticalData(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::OpticalData : new ::Garfield::OpticalData;
   }
   static void *newArray_GarfieldcLcLOpticalData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::OpticalData[nElements] : new ::Garfield::OpticalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLOpticalData(void *p) {
      delete ((::Garfield::OpticalData*)p);
   }
   static void deleteArray_GarfieldcLcLOpticalData(void *p) {
      delete [] ((::Garfield::OpticalData*)p);
   }
   static void destruct_GarfieldcLcLOpticalData(void *p) {
      typedef ::Garfield::OpticalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::OpticalData

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLSolid(void *p) {
      delete ((::Garfield::Solid*)p);
   }
   static void deleteArray_GarfieldcLcLSolid(void *p) {
      delete [] ((::Garfield::Solid*)p);
   }
   static void destruct_GarfieldcLcLSolid(void *p) {
      typedef ::Garfield::Solid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::Solid

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLSolidBox(void *p) {
      delete ((::Garfield::SolidBox*)p);
   }
   static void deleteArray_GarfieldcLcLSolidBox(void *p) {
      delete [] ((::Garfield::SolidBox*)p);
   }
   static void destruct_GarfieldcLcLSolidBox(void *p) {
      typedef ::Garfield::SolidBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::SolidBox

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLSolidTube(void *p) {
      delete ((::Garfield::SolidTube*)p);
   }
   static void deleteArray_GarfieldcLcLSolidTube(void *p) {
      delete [] ((::Garfield::SolidTube*)p);
   }
   static void destruct_GarfieldcLcLSolidTube(void *p) {
      typedef ::Garfield::SolidTube current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::SolidTube

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLGeometryBase(void *p) {
      delete ((::Garfield::GeometryBase*)p);
   }
   static void deleteArray_GarfieldcLcLGeometryBase(void *p) {
      delete [] ((::Garfield::GeometryBase*)p);
   }
   static void destruct_GarfieldcLcLGeometryBase(void *p) {
      typedef ::Garfield::GeometryBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::GeometryBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLGeometrySimple(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::GeometrySimple : new ::Garfield::GeometrySimple;
   }
   static void *newArray_GarfieldcLcLGeometrySimple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::GeometrySimple[nElements] : new ::Garfield::GeometrySimple[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLGeometrySimple(void *p) {
      delete ((::Garfield::GeometrySimple*)p);
   }
   static void deleteArray_GarfieldcLcLGeometrySimple(void *p) {
      delete [] ((::Garfield::GeometrySimple*)p);
   }
   static void destruct_GarfieldcLcLGeometrySimple(void *p) {
      typedef ::Garfield::GeometrySimple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::GeometrySimple

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLGeometryRoot(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::GeometryRoot : new ::Garfield::GeometryRoot;
   }
   static void *newArray_GarfieldcLcLGeometryRoot(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::GeometryRoot[nElements] : new ::Garfield::GeometryRoot[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLGeometryRoot(void *p) {
      delete ((::Garfield::GeometryRoot*)p);
   }
   static void deleteArray_GarfieldcLcLGeometryRoot(void *p) {
      delete [] ((::Garfield::GeometryRoot*)p);
   }
   static void destruct_GarfieldcLcLGeometryRoot(void *p) {
      typedef ::Garfield::GeometryRoot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::GeometryRoot

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentBase(void *p) {
      delete ((::Garfield::ComponentBase*)p);
   }
   static void deleteArray_GarfieldcLcLComponentBase(void *p) {
      delete [] ((::Garfield::ComponentBase*)p);
   }
   static void destruct_GarfieldcLcLComponentBase(void *p) {
      typedef ::Garfield::ComponentBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLComponentAnalyticField(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnalyticField : new ::Garfield::ComponentAnalyticField;
   }
   static void *newArray_GarfieldcLcLComponentAnalyticField(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnalyticField[nElements] : new ::Garfield::ComponentAnalyticField[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentAnalyticField(void *p) {
      delete ((::Garfield::ComponentAnalyticField*)p);
   }
   static void deleteArray_GarfieldcLcLComponentAnalyticField(void *p) {
      delete [] ((::Garfield::ComponentAnalyticField*)p);
   }
   static void destruct_GarfieldcLcLComponentAnalyticField(void *p) {
      typedef ::Garfield::ComponentAnalyticField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentAnalyticField

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentFieldMap(void *p) {
      delete ((::Garfield::ComponentFieldMap*)p);
   }
   static void deleteArray_GarfieldcLcLComponentFieldMap(void *p) {
      delete [] ((::Garfield::ComponentFieldMap*)p);
   }
   static void destruct_GarfieldcLcLComponentFieldMap(void *p) {
      typedef ::Garfield::ComponentFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentFieldMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLComponentAnsys123(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnsys123 : new ::Garfield::ComponentAnsys123;
   }
   static void *newArray_GarfieldcLcLComponentAnsys123(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnsys123[nElements] : new ::Garfield::ComponentAnsys123[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentAnsys123(void *p) {
      delete ((::Garfield::ComponentAnsys123*)p);
   }
   static void deleteArray_GarfieldcLcLComponentAnsys123(void *p) {
      delete [] ((::Garfield::ComponentAnsys123*)p);
   }
   static void destruct_GarfieldcLcLComponentAnsys123(void *p) {
      typedef ::Garfield::ComponentAnsys123 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentAnsys123

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLComponentAnsys121(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnsys121 : new ::Garfield::ComponentAnsys121;
   }
   static void *newArray_GarfieldcLcLComponentAnsys121(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentAnsys121[nElements] : new ::Garfield::ComponentAnsys121[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentAnsys121(void *p) {
      delete ((::Garfield::ComponentAnsys121*)p);
   }
   static void deleteArray_GarfieldcLcLComponentAnsys121(void *p) {
      delete [] ((::Garfield::ComponentAnsys121*)p);
   }
   static void destruct_GarfieldcLcLComponentAnsys121(void *p) {
      typedef ::Garfield::ComponentAnsys121 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentAnsys121

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLComponentConstant(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentConstant : new ::Garfield::ComponentConstant;
   }
   static void *newArray_GarfieldcLcLComponentConstant(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentConstant[nElements] : new ::Garfield::ComponentConstant[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentConstant(void *p) {
      delete ((::Garfield::ComponentConstant*)p);
   }
   static void deleteArray_GarfieldcLcLComponentConstant(void *p) {
      delete [] ((::Garfield::ComponentConstant*)p);
   }
   static void destruct_GarfieldcLcLComponentConstant(void *p) {
      typedef ::Garfield::ComponentConstant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentConstant

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLComponentUser(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentUser : new ::Garfield::ComponentUser;
   }
   static void *newArray_GarfieldcLcLComponentUser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ComponentUser[nElements] : new ::Garfield::ComponentUser[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLComponentUser(void *p) {
      delete ((::Garfield::ComponentUser*)p);
   }
   static void deleteArray_GarfieldcLcLComponentUser(void *p) {
      delete [] ((::Garfield::ComponentUser*)p);
   }
   static void destruct_GarfieldcLcLComponentUser(void *p) {
      typedef ::Garfield::ComponentUser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ComponentUser

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLSensor(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::Sensor : new ::Garfield::Sensor;
   }
   static void *newArray_GarfieldcLcLSensor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::Sensor[nElements] : new ::Garfield::Sensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLSensor(void *p) {
      delete ((::Garfield::Sensor*)p);
   }
   static void deleteArray_GarfieldcLcLSensor(void *p) {
      delete [] ((::Garfield::Sensor*)p);
   }
   static void destruct_GarfieldcLcLSensor(void *p) {
      typedef ::Garfield::Sensor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::Sensor

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewMedium(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewMedium : new ::Garfield::ViewMedium;
   }
   static void *newArray_GarfieldcLcLViewMedium(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewMedium[nElements] : new ::Garfield::ViewMedium[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewMedium(void *p) {
      delete ((::Garfield::ViewMedium*)p);
   }
   static void deleteArray_GarfieldcLcLViewMedium(void *p) {
      delete [] ((::Garfield::ViewMedium*)p);
   }
   static void destruct_GarfieldcLcLViewMedium(void *p) {
      typedef ::Garfield::ViewMedium current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ViewMedium

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewField(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewField : new ::Garfield::ViewField;
   }
   static void *newArray_GarfieldcLcLViewField(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewField[nElements] : new ::Garfield::ViewField[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewField(void *p) {
      delete ((::Garfield::ViewField*)p);
   }
   static void deleteArray_GarfieldcLcLViewField(void *p) {
      delete [] ((::Garfield::ViewField*)p);
   }
   static void destruct_GarfieldcLcLViewField(void *p) {
      typedef ::Garfield::ViewField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ViewField

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewDrift(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewDrift : new ::Garfield::ViewDrift;
   }
   static void *newArray_GarfieldcLcLViewDrift(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewDrift[nElements] : new ::Garfield::ViewDrift[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewDrift(void *p) {
      delete ((::Garfield::ViewDrift*)p);
   }
   static void deleteArray_GarfieldcLcLViewDrift(void *p) {
      delete [] ((::Garfield::ViewDrift*)p);
   }
   static void destruct_GarfieldcLcLViewDrift(void *p) {
      typedef ::Garfield::ViewDrift current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ViewDrift

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewSignal(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewSignal : new ::Garfield::ViewSignal;
   }
   static void *newArray_GarfieldcLcLViewSignal(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::ViewSignal[nElements] : new ::Garfield::ViewSignal[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewSignal(void *p) {
      delete ((::Garfield::ViewSignal*)p);
   }
   static void deleteArray_GarfieldcLcLViewSignal(void *p) {
      delete [] ((::Garfield::ViewSignal*)p);
   }
   static void destruct_GarfieldcLcLViewSignal(void *p) {
      typedef ::Garfield::ViewSignal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::ViewSignal

namespace Garfield {
//______________________________________________________________________________
void ViewCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class Garfield::ViewCell.

   TObject::Streamer(R__b);
}

} // namespace Garfield
namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewCell(void *p) {
      return  p ? new(p) ::Garfield::ViewCell : new ::Garfield::ViewCell;
   }
   static void *newArray_GarfieldcLcLViewCell(Long_t nElements, void *p) {
      return p ? new(p) ::Garfield::ViewCell[nElements] : new ::Garfield::ViewCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewCell(void *p) {
      delete ((::Garfield::ViewCell*)p);
   }
   static void deleteArray_GarfieldcLcLViewCell(void *p) {
      delete [] ((::Garfield::ViewCell*)p);
   }
   static void destruct_GarfieldcLcLViewCell(void *p) {
      typedef ::Garfield::ViewCell current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_GarfieldcLcLViewCell(TBuffer &buf, void *obj) {
      ((::Garfield::ViewCell*)obj)->::Garfield::ViewCell::Streamer(buf);
   }
} // end of namespace ROOT for class ::Garfield::ViewCell

namespace Garfield {
//______________________________________________________________________________
void ViewGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class Garfield::ViewGeometry.

   TObject::Streamer(R__b);
}

} // namespace Garfield
namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLViewGeometry(void *p) {
      return  p ? new(p) ::Garfield::ViewGeometry : new ::Garfield::ViewGeometry;
   }
   static void *newArray_GarfieldcLcLViewGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::Garfield::ViewGeometry[nElements] : new ::Garfield::ViewGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLViewGeometry(void *p) {
      delete ((::Garfield::ViewGeometry*)p);
   }
   static void deleteArray_GarfieldcLcLViewGeometry(void *p) {
      delete [] ((::Garfield::ViewGeometry*)p);
   }
   static void destruct_GarfieldcLcLViewGeometry(void *p) {
      typedef ::Garfield::ViewGeometry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_GarfieldcLcLViewGeometry(TBuffer &buf, void *obj) {
      ((::Garfield::ViewGeometry*)obj)->::Garfield::ViewGeometry::Streamer(buf);
   }
} // end of namespace ROOT for class ::Garfield::ViewGeometry

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GarfieldcLcLTrack(void *p) {
      delete ((::Garfield::Track*)p);
   }
   static void deleteArray_GarfieldcLcLTrack(void *p) {
      delete [] ((::Garfield::Track*)p);
   }
   static void destruct_GarfieldcLcLTrack(void *p) {
      typedef ::Garfield::Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::Track

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLTrackHeed(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackHeed : new ::Garfield::TrackHeed;
   }
   static void *newArray_GarfieldcLcLTrackHeed(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackHeed[nElements] : new ::Garfield::TrackHeed[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLTrackHeed(void *p) {
      delete ((::Garfield::TrackHeed*)p);
   }
   static void deleteArray_GarfieldcLcLTrackHeed(void *p) {
      delete [] ((::Garfield::TrackHeed*)p);
   }
   static void destruct_GarfieldcLcLTrackHeed(void *p) {
      typedef ::Garfield::TrackHeed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::TrackHeed

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLTrackElectron(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackElectron : new ::Garfield::TrackElectron;
   }
   static void *newArray_GarfieldcLcLTrackElectron(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackElectron[nElements] : new ::Garfield::TrackElectron[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLTrackElectron(void *p) {
      delete ((::Garfield::TrackElectron*)p);
   }
   static void deleteArray_GarfieldcLcLTrackElectron(void *p) {
      delete [] ((::Garfield::TrackElectron*)p);
   }
   static void destruct_GarfieldcLcLTrackElectron(void *p) {
      typedef ::Garfield::TrackElectron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::TrackElectron

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLTrackBichsel(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackBichsel : new ::Garfield::TrackBichsel;
   }
   static void *newArray_GarfieldcLcLTrackBichsel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackBichsel[nElements] : new ::Garfield::TrackBichsel[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLTrackBichsel(void *p) {
      delete ((::Garfield::TrackBichsel*)p);
   }
   static void deleteArray_GarfieldcLcLTrackBichsel(void *p) {
      delete [] ((::Garfield::TrackBichsel*)p);
   }
   static void destruct_GarfieldcLcLTrackBichsel(void *p) {
      typedef ::Garfield::TrackBichsel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::TrackBichsel

namespace ROOT {
   // Wrappers around operator new
   static void *new_GarfieldcLcLTrackPAI(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackPAI : new ::Garfield::TrackPAI;
   }
   static void *newArray_GarfieldcLcLTrackPAI(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Garfield::TrackPAI[nElements] : new ::Garfield::TrackPAI[nElements];
   }
   // Wrapper around operator delete
   static void delete_GarfieldcLcLTrackPAI(void *p) {
      delete ((::Garfield::TrackPAI*)p);
   }
   static void deleteArray_GarfieldcLcLTrackPAI(void *p) {
      delete [] ((::Garfield::TrackPAI*)p);
   }
   static void destruct_GarfieldcLcLTrackPAI(void *p) {
      typedef ::Garfield::TrackPAI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Garfield::TrackPAI

namespace {
  void TriggerDictionaryInitialization_GarfieldDict_Impl() {
    static const char* headers[] = {
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMC.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic_josh.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnalyticField.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys121.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys123.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentBase.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentCST.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentConstant.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentElmer.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentFieldMap.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentNeBem2d.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad2d.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad3d.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentUser.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/DriftLineRKF.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/FundamentalConstants.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GarfieldConstants.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryBase.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryRoot.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometrySimple.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MagboltzInterface.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Medium.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumConductor.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumGas.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumMagboltz.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumPlastic.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumSilicon.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Numerics.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/OpticalData.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Plotting.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngine.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngineRoot.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Random.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngine.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngineRoot.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Sensor.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Solid.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidBox.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidTube.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Track.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackBichsel.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackElectron.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackHeed.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackPAI.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackSimple.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewCell.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewDrift.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewFEMesh.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewField.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewGeometry.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewMedium.hh",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewSignal.hh",
0
    };
    static const char* includePaths[] = {
"/opt/local/libexec/root6/include/root",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include",
"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Heed",
"/opt/local/libexec/root6/include/root",
"/Users/nakajima/Dropbox/Work/HPXeTPC/garfpp_recomb/",
0
    };
    static const char* fwdDeclCode = 
"namespace Garfield { class AvalancheMicroscopic; }"
"namespace Garfield { class AvalancheMC; }"
"namespace Garfield { class Medium; }"
"namespace Garfield { class MediumGas; }"
"namespace Garfield { class MediumMagboltz; }"
"namespace Garfield { class MediumSilicon; }"
"namespace Garfield { class OpticalData; }"
"namespace Garfield { class Solid; }"
"namespace Garfield { class SolidBox; }"
"namespace Garfield { class SolidTube; }"
"namespace Garfield { class GeometryBase; }"
"namespace Garfield { class GeometrySimple; }"
"namespace Garfield { class GeometryRoot; }"
"namespace Garfield { class ComponentBase; }"
"namespace Garfield { class ComponentAnalyticField; }"
"namespace Garfield { class ComponentFieldMap; }"
"namespace Garfield { class ComponentAnsys123; }"
"namespace Garfield { class ComponentAnsys121; }"
"namespace Garfield { class ComponentConstant; }"
"namespace Garfield { class ComponentUser; }"
"namespace Garfield { class Sensor; }"
"namespace Garfield { class ViewMedium; }"
"namespace Garfield { class ViewField; }"
"namespace Garfield { class ViewDrift; }"
"namespace Garfield { class ViewSignal; }"
"namespace Garfield { class ViewCell; }"
"namespace Garfield { class ViewGeometry; }"
"namespace Garfield { class Track; }"
"namespace Garfield { class TrackHeed; }"
"namespace Garfield { class TrackElectron; }"
"namespace Garfield { class TrackBichsel; }"
"namespace Garfield { class TrackPAI; }"
;
    static const char* payloadCode = 
"\n"
"#ifndef G__VECTOR_HAS_CLASS_ITERATOR\n"
"  #define G__VECTOR_HAS_CLASS_ITERATOR\n"
"#endif\n"
"#ifndef INS_CRETURN\n"
"  #define INS_CRETURN\n"
"#endif\n"
"\n"
"#define _BACKWARD_BACKWARD_WARNING_H\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMC.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/AvalancheMicroscopic_josh.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnalyticField.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys121.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentAnsys123.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentBase.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentCST.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentConstant.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentElmer.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentFieldMap.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentNeBem2d.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad2d.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentTcad3d.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ComponentUser.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/DriftLineRKF.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/FundamentalConstants.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GarfieldConstants.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryBase.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometryRoot.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/GeometrySimple.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MagboltzInterface.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Medium.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumConductor.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumGas.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumMagboltz.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumPlastic.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/MediumSilicon.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Numerics.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/OpticalData.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Plotting.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngine.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/PlottingEngineRoot.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Random.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngine.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/RandomEngineRoot.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Sensor.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Solid.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidBox.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/SolidTube.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/Track.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackBichsel.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackElectron.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackHeed.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackPAI.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/TrackSimple.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewCell.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewDrift.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewFEMesh.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewField.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewGeometry.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewMedium.hh\"\n"
"#include \"/Users/nakajima/Work/HPXeTPC/garfpp_recomb/Include/ViewSignal.hh\"\n"
"\n"
"#undef  _BACKWARD_BACKWARD_WARNING_H\n"
;
    static const char* classesHeaders[]={
"Garfield::AvalancheMC", payloadCode, "@",
"Garfield::AvalancheMicroscopic", payloadCode, "@",
"Garfield::ComponentAnalyticField", payloadCode, "@",
"Garfield::ComponentAnsys121", payloadCode, "@",
"Garfield::ComponentAnsys123", payloadCode, "@",
"Garfield::ComponentBase", payloadCode, "@",
"Garfield::ComponentConstant", payloadCode, "@",
"Garfield::ComponentFieldMap", payloadCode, "@",
"Garfield::ComponentUser", payloadCode, "@",
"Garfield::GeometryBase", payloadCode, "@",
"Garfield::GeometryRoot", payloadCode, "@",
"Garfield::GeometrySimple", payloadCode, "@",
"Garfield::Medium", payloadCode, "@",
"Garfield::MediumGas", payloadCode, "@",
"Garfield::MediumMagboltz", payloadCode, "@",
"Garfield::MediumSilicon", payloadCode, "@",
"Garfield::OpticalData", payloadCode, "@",
"Garfield::RndmUniform", payloadCode, "@",
"Garfield::Sensor", payloadCode, "@",
"Garfield::Solid", payloadCode, "@",
"Garfield::SolidBox", payloadCode, "@",
"Garfield::SolidTube", payloadCode, "@",
"Garfield::Track", payloadCode, "@",
"Garfield::TrackBichsel", payloadCode, "@",
"Garfield::TrackElectron", payloadCode, "@",
"Garfield::TrackHeed", payloadCode, "@",
"Garfield::TrackPAI", payloadCode, "@",
"Garfield::ViewCell", payloadCode, "@",
"Garfield::ViewDrift", payloadCode, "@",
"Garfield::ViewField", payloadCode, "@",
"Garfield::ViewGeometry", payloadCode, "@",
"Garfield::ViewMedium", payloadCode, "@",
"Garfield::ViewSignal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GarfieldDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GarfieldDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GarfieldDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GarfieldDict() {
  TriggerDictionaryInitialization_GarfieldDict_Impl();
}
