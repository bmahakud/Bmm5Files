import os, re, ROOT, sys, time
from ROOT import TFile,TTree,TH1,TROOT,TDirectory,TPad,TCanvas,TColor
from array import array



def process_sample(sample):
    # Run info
    chain_Runs = ROOT.TChain("Runs")
    chain_Runs.Add(sample)
    nEvents = 0
    for run in chain_Runs:
        print (run.genEventCount_)
        #nEvents += run.genEventCount
    print (nEvents)




#process_sample("/eos/cms/store/user/dmytro/QCD_Pt-15to20_MuEnrichedPt5_TuneCP5_13TeV_pythia8/crab_NanoAOD_QCD_Pt-15to20_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Bmm5-01/191014_050926/0000/output_1.root")


process_sample("/eos/cms/store/group/phys_muon/dmytro/tmp/NanoAOD/505/QCD_Pt-30to50_MuEnrichedPt5_TuneCP5_13TeV_pythia8+RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v3+MINIAODSIM/4237CE15-B026-5949-B143-C194A7B018FF.root")


#process_sample("/eos/cms/store/group/phys_muon/dmytro/tmp/NanoAOD/507/BsToMuMu_BMuonFilter_SoftQCDnonD_TuneCP5_13TeV-pythia8-evtgen+RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v1+MINIAODSIM/02F7319D-D4D6-8340-B94F-2D882775B406.root")















