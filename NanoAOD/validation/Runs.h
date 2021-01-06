//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep  8 05:44:59 2020 by ROOT version 6.12/07
// from TTree Runs/Runs
// found on file: /eos/cms/store/group/phys_muon/dmytro/tmp/NanoAOD/505/QCD_Pt-30to50_MuEnrichedPt5_TuneCP5_13TeV_pythia8+RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v3+MINIAODSIM/4237CE15-B026-5949-B143-C194A7B018FF.root
//////////////////////////////////////////////////////////

#ifndef Runs_h
#define Runs_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Runs {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxgenEventCount = 1;
   static constexpr Int_t kMaxgenEventSumw = 1;
   static constexpr Int_t kMaxgenEventSumw2 = 1;
   static constexpr Int_t kMaxnLHEScaleSumw = 1;
   static constexpr Int_t kMaxLHEScaleSumw = 1;
   static constexpr Int_t kMaxnLHEPdfSumw = 1;
   static constexpr Int_t kMaxLHEPdfSumw = 1;

   // Declaration of leaf types
   UInt_t          run;
   Long64_t        genEventCount_;
   Double_t        genEventSumw_;
   Double_t        genEventSumw2_;
   UInt_t          nLHEScaleSumw_;
   Double_t        LHEScaleSumw_[kMaxnLHEScaleSumw];   //[nLHEScaleSumw_]
   UInt_t          nLHEPdfSumw_;
   Double_t        LHEPdfSumw_[kMaxnLHEPdfSumw];   //[nLHEPdfSumw_]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_genEventCount_;   //!
   TBranch        *b_genEventSumw_;   //!
   TBranch        *b_genEventSumw2_;   //!
   TBranch        *b_nLHEScaleSumw_;   //!
   TBranch        *b_LHEScaleSumw_;   //!
   TBranch        *b_nLHEPdfSumw_;   //!
   TBranch        *b_LHEPdfSumw_;   //!

   Runs(TTree *tree=0);
   virtual ~Runs();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Runs_cxx
Runs::Runs(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/phys_muon/dmytro/tmp/NanoAOD/505/QCD_Pt-30to50_MuEnrichedPt5_TuneCP5_13TeV_pythia8+RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v3+MINIAODSIM/4237CE15-B026-5949-B143-C194A7B018FF.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/phys_muon/dmytro/tmp/NanoAOD/505/QCD_Pt-30to50_MuEnrichedPt5_TuneCP5_13TeV_pythia8+RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v3+MINIAODSIM/4237CE15-B026-5949-B143-C194A7B018FF.root");
      }
      f->GetObject("Runs",tree);

   }
   Init(tree);
}

Runs::~Runs()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Runs::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Runs::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Runs::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("genEventCount_", &genEventCount_, &b_genEventCount_);
   fChain->SetBranchAddress("genEventSumw_", &genEventSumw_, &b_genEventSumw_);
   fChain->SetBranchAddress("genEventSumw2_", &genEventSumw2_, &b_genEventSumw2_);
   fChain->SetBranchAddress("nLHEScaleSumw_", &nLHEScaleSumw_, &b_nLHEScaleSumw_);
   fChain->SetBranchAddress("LHEScaleSumw_", &LHEScaleSumw_, &b_LHEScaleSumw_);
   fChain->SetBranchAddress("nLHEPdfSumw_", &nLHEPdfSumw_, &b_nLHEPdfSumw_);
   fChain->SetBranchAddress("LHEPdfSumw_", &LHEPdfSumw_, &b_LHEPdfSumw_);
   Notify();
}

Bool_t Runs::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Runs::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Runs::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Runs_cxx
