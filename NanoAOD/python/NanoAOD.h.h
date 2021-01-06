//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 19 07:28:11 2020 by ROOT version 6.12/07
// from TTree Events/
// found on file: /eos/user/b/bimahaku/BstoMuMu_RECO_miniAOD_Files/BstoMuMuFile-RunIIAutumn18MiniAOD_1.root
//////////////////////////////////////////////////////////

#ifndef NanoAOD.h_h
#define NanoAOD.h_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "DataFormats/Provenance/interface/EventAuxiliary.h"
#include "vector"
#include "vector"
#include "vector"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/SortedCollection.h"
#include "DataFormats/DetId/interface/DetId.h"
#include "DataFormats/EcalRecHit/interface/EcalRecHit.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "Math/GenVector/Cartesian3D.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "DataFormats/Candidate/interface/ParticleState.h"
#include "DataFormats/Candidate/interface/CompositePtrCandidate.h"
#include "DataFormats/JetReco/interface/Jet.h"
#include "DataFormats/Common/interface/Ptr.h"
#include "DataFormats/PatCandidates/interface/PATObject.h"
#include "DataFormats/Common/interface/OwnVector.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/Common/interface/SortedCollection.h"
#include "DataFormats/Common/interface/RefVectorBase.h"
#include "DataFormats/Common/interface/Ref.h"
#include "SimDataFormats/JetMatching/interface/JetFlavourInfo.h"
#include "DataFormats/Common/interface/OwnVector.h"
#include "DataFormats/JetReco/interface/JetID.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/PatCandidates/interface/PackedCandidate.h"
#include "DataFormats/PatCandidates/interface/PackedCandidate.h"
#include "DataFormats/Common/interface/RefProd.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/PatCandidates/interface/PackedGenParticle.h"
#include "Math/GenVector/Cartesian3D.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/HepMCCandidate/interface/GenStatusFlags.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/PatCandidates/interface/TriggerObject.h"
#include "DataFormats/Common/interface/RefToBase.h"
#include "DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h"
#include "DataFormats/Provenance/interface/Hash.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/CaloRecHit/interface/CaloCluster.h"
#include "DataFormats/CaloRecHit/interface/CaloID.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/JetReco/interface/GenJet.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"

class NanoAOD.h {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxGenEventInfoProduct_generator__SIM = 1;
   static constexpr Int_t kMaxedmTriggerResults_TriggerResults__SIM = 1;
   static constexpr Int_t kMaxfloatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT = 1;
   static constexpr Int_t kMaxedmTriggerResults_TriggerResults__HLT = 1;
   static constexpr Int_t kMaxfloat_genParticles_t0_HLT = 1;
   static constexpr Int_t kMaxrecoGenMETs_genMetTrue__HLT = 1;
   static constexpr Int_t kMaxrecoGenParticles_genPUProtons_genPUProtons_HLT = 1;
   static constexpr Int_t kMaxGlobalAlgBlkBXVector_gtStage2Digis__RECO = 1;
   static constexpr Int_t kMaxGlobalExtBlkBXVector_gtStage2Digis__RECO = 1;
   static constexpr Int_t kMaxl1tEGammaBXVector_caloStage2Digis_EGamma_RECO = 1;
   static constexpr Int_t kMaxl1tEtSumBXVector_caloStage2Digis_EtSum_RECO = 1;
   static constexpr Int_t kMaxl1tJetBXVector_caloStage2Digis_Jet_RECO = 1;
   static constexpr Int_t kMaxl1tMuonBXVector_gmtStage2Digis_Muon_RECO = 1;
   static constexpr Int_t kMaxl1tTauBXVector_caloStage2Digis_Tau_RECO = 1;
   static constexpr Int_t kMaxHcalNoiseSummary_hcalnoise__RECO = 1;
   static constexpr Int_t kMaxL1GlobalTriggerReadoutRecord_gtDigis__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoAll__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetAll__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetAllCalo__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetCentral__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetCentralCalo__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetCentralChargedPileUp__RECO = 1;
   static constexpr Int_t kMaxdouble_fixedGridRhoFastjetCentralNeutral__RECO = 1;
   static constexpr Int_t kMaxedmTriggerResults_TriggerResults__RECO = 1;
   static constexpr Int_t kMaxrecoBeamHaloSummary_BeamHaloSummary__RECO = 1;
   static constexpr Int_t kMaxrecoBeamSpot_offlineBeamSpot__RECO = 1;
   static constexpr Int_t kMaxrecoCSCHaloData_CSCHaloData__RECO = 1;
   static constexpr Int_t kMaxCTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO = 1;
   static constexpr Int_t kMaxLumiScalerss_scalersRawToDigi__RECO = 1;
   static constexpr Int_t kMaxl1extraL1EmParticles_l1extraParticles_Isolated_RECO = 1;
   static constexpr Int_t kMaxl1extraL1EmParticles_l1extraParticles_NonIsolated_RECO = 1;
   static constexpr Int_t kMaxl1extraL1EtMissParticles_l1extraParticles_MET_RECO = 1;
   static constexpr Int_t kMaxl1extraL1EtMissParticles_l1extraParticles_MHT_RECO = 1;
   static constexpr Int_t kMaxl1extraL1HFRingss_l1extraParticles__RECO = 1;
   static constexpr Int_t kMaxl1extraL1JetParticles_l1extraParticles_Central_RECO = 1;
   static constexpr Int_t kMaxl1extraL1JetParticles_l1extraParticles_Forward_RECO = 1;
   static constexpr Int_t kMaxl1extraL1JetParticles_l1extraParticles_IsoTau_RECO = 1;
   static constexpr Int_t kMaxl1extraL1JetParticles_l1extraParticles_Tau_RECO = 1;
   static constexpr Int_t kMaxl1extraL1MuonParticles_l1extraParticles__RECO = 1;
   static constexpr Int_t kMaxrecoTracks_displacedStandAloneMuons__RECO = 1;
   static constexpr Int_t kMaxrecoDeDxHitInfosedmAssociation_isolatedTracks__PAT = 1;
   static constexpr Int_t kMaxrecoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT = 1;
   static constexpr Int_t kMaxCSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT = 1;
   static constexpr Int_t kMaxDTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT = 1;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT = 1;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_id__id = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_energy = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_time = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_flagBits = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_extra = 107;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT = 1;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_id__id = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_energy = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_time = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_flagBits = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_extra = 67;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT = 1;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj = 110;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_id__id = 110;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_energy = 110;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_time = 110;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_flagBits = 110;
   static constexpr Int_t kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_extra = 110;
   static constexpr Int_t kMaxHBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT = 1;
   static constexpr Int_t kMaxedmTriggerResults_TriggerResults__PAT = 1;
   static constexpr Int_t kMaxfloatedmValueMap_offlineSlimmedPrimaryVertices__PAT = 1;
   static constexpr Int_t kMaxpatPackedTriggerPrescales_patTrigger__PAT = 1;
   static constexpr Int_t kMaxpatPackedTriggerPrescales_patTrigger_l1max_PAT = 1;
   static constexpr Int_t kMaxpatPackedTriggerPrescales_patTrigger_l1min_PAT = 1;
   static constexpr Int_t kMaxrecoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT = 1;
   static constexpr Int_t kMaxPileupSummaryInfos_slimmedAddPileupInfo__PAT = 1;
   static constexpr Int_t kMaxpatCompositeCandidates_oniaPhotonCandidates_conversions_PAT = 1;
   static constexpr Int_t kMaxpatElectrons_slimmedElectrons__PAT = 1;
   static constexpr Int_t kMaxpatIsolatedTracks_isolatedTracks__PAT = 1;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT = 1;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_m_state_qx3 = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_m_state_pdgId = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_m_state_status = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_refToOrig__core = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_refToOrig__key = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_triggerObjectMatchesEmbedded = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_efficiencyValues = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_efficiencyNames = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genParticleRef = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genParticleEmbedded = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_overlapLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_overlapItems = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userDataLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userDataObjects__data = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userFloatLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userFloats = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userIntLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userInts = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userCandLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_userCands = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_kinResolutions = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_kinResolutionLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_embeddedCaloTowers = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_caloTowersFwdPtr = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_embeddedPFCandidates = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_pfCandidates = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_pfCandidatesFwdPtr = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_subjetCollections = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_subjetLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genJet = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genJetRef__refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genJetRef__refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genJetFwdRef__ref__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_genJetFwdRef__backRef__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jec = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_currentJECSet = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_currentJECLevel = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_currentJECFlavor = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_pairDiscriVector = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_tagInfoLabels = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_tagInfos__data = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_tagInfosFwdPtr = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_jetCharge = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_associatedTracks__refVector__product = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_associatedTracks__refVector__keys = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_specificCalo = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_specificJPT = 28;
   static constexpr Int_t kMaxpatJets_slimmedJets__PAT_obj_specificPF = 28;
   static constexpr Int_t kMaxpatJets_slimmedJetsAK8__PAT = 1;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT = 1;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_m_state_qx3 = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_m_state_pdgId = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_m_state_status = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_refToOrig__core = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_refToOrig__key = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_triggerObjectMatchesEmbedded = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_efficiencyValues = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_efficiencyNames = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genParticleRef = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genParticleEmbedded = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_overlapLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_overlapItems = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userDataLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userDataObjects__data = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userFloatLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userFloats = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userIntLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userInts = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userCandLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_userCands = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_kinResolutions = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_kinResolutionLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_embeddedCaloTowers = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_caloTowersFwdPtr = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_embeddedPFCandidates = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_pfCandidates = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_pfCandidatesFwdPtr = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_subjetCollections = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_subjetLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genJet = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__ref__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__backRef__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jec = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_currentJECSet = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_currentJECLevel = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_currentJECFlavor = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_pairDiscriVector = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_tagInfoLabels = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_tagInfos__data = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_tagInfosFwdPtr = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_jetCharge = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__product = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__keys = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_specificCalo = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_specificJPT = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsPuppi__PAT_obj_specificPF = 8;
   static constexpr Int_t kMaxpatJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT = 1;
   static constexpr Int_t kMaxpatMETs_slimmedMETs__PAT = 1;
   static constexpr Int_t kMaxpatMETs_slimmedMETsNoHF__PAT = 1;
   static constexpr Int_t kMaxpatMETs_slimmedMETsPuppi__PAT = 1;
   static constexpr Int_t kMaxpatMuons_slimmedMuons__PAT = 1;
   static constexpr Int_t kMaxpatPackedCandidates_lostTracks__PAT = 1;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT = 1;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedPt = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedEta = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedPhi = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedM = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedDxy = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedDz = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedDPhi = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedDEta = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedDTrkPt = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweight = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweightNoLepDiff = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_rawCaloFraction = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_hcalFraction = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedTime = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedTimeError = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_isIsolatedChargedHadron = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_pdgId = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_qualityFlags = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_pvRefProd__product = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_pvRefKey = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedHits = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_packedLayers = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_normalizedChi2 = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_covarianceVersion = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_covarianceSchema = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_packedPFCandidates__PAT_obj_firstHit = 3420;
   static constexpr Int_t kMaxpatPackedCandidates_lostTracks_eleTracks_PAT = 1;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT = 1;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_packedPt = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_packedY = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_packedPhi = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_packedM = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_dxy = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_dz = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_dphi = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_pdgId = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_charge = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_mother__product = 913;
   static constexpr Int_t kMaxpatPackedGenParticles_packedGenParticles__PAT_obj_statusFlags__flags = 913;
   static constexpr Int_t kMaxpatPhotons_slimmedOOTPhotons__PAT = 1;
   static constexpr Int_t kMaxpatPhotons_slimmedPhotons__PAT = 1;
   static constexpr Int_t kMaxpatTaus_slimmedTaus__PAT = 1;
   static constexpr Int_t kMaxpatTaus_slimmedTausBoosted__PAT = 1;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT = 1;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_qx3 = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_pdgId = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_status = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_collection = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_triggerObjectTypes = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_refToOrig__holder = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabels = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabelIndices = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathNames = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathIndices = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathLastFilterAccepted = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathL3FilterAccepted = 242;
   static constexpr Int_t kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_psetId__hash = 242;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT = 1;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT = 1;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_energy = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergy = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergyUncertainty = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_caloID__detectors = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_hitsAndFractions = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_algoID = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_seedId__id = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_flags = 57;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT = 1;
   static constexpr Int_t kMaxrecoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT = 1;
   static constexpr Int_t kMaxrecoCaloJets_slimmedCaloJets__PAT = 1;
   static constexpr Int_t kMaxrecoConversions_reducedEgamma_reducedConversions_PAT = 1;
   static constexpr Int_t kMaxrecoConversions_reducedEgamma_reducedSingleLegConversions_PAT = 1;
   static constexpr Int_t kMaxrecoDeDxHitInfos_isolatedTracks__PAT = 1;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJets__PAT = 1;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJets__PAT_obj = 13;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJets__PAT_obj_m_state_qx3 = 13;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJets__PAT_obj_m_state_pdgId = 13;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJets__PAT_obj_m_state_status = 13;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJetsAK8__PAT = 1;
   static constexpr Int_t kMaxrecoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT = 1;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT = 1;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_m_state_qx3 = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_m_state_pdgId = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_m_state_status = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__product = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__keys = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__product = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__keys = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_collisionId = 187;
   static constexpr Int_t kMaxrecoGenParticles_prunedGenParticles__PAT_obj_statusFlags__flags = 187;
   static constexpr Int_t kMaxrecoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT = 1;
   static constexpr Int_t kMaxrecoGsfTracks_reducedEgamma_reducedGsfTracks_PAT = 1;
   static constexpr Int_t kMaxrecoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT = 1;
   static constexpr Int_t kMaxrecoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT = 1;
   static constexpr Int_t kMaxrecoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT = 1;
   static constexpr Int_t kMaxrecoSuperClusters_reducedEgamma_reducedSuperClusters_PAT = 1;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT = 1;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_chi2 = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_ndof = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_covariance = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_tracks = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_refittedTracks = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_weights = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_validity = 76;
   static constexpr Int_t kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_time = 76;
   static constexpr Int_t kMaxrecoVertexCompositePtrCandidates_slimmedKshortVertices__PAT = 1;
   static constexpr Int_t kMaxrecoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT = 1;
   static constexpr Int_t kMaxrecoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT = 1;
   static constexpr Int_t kMaxStrings_slimmedPatTrigger_filterLabels_PAT = 1;
   static constexpr Int_t kMaxuint_bunchSpacingProducer__PAT = 1;

   // Declaration of leaf types
   edm::EventAuxiliary *EventAuxiliary;
   vector<edm::StoredProductProvenance> *EventProductProvenance;
   vector<edm::Hash<1> > *EventSelections;
   vector<unsigned short> *BranchListIndexes;
 //edm::Wrapper<GenEventInfoProduct> *GenEventInfoProduct_generator__SIM_;
   Bool_t          GenEventInfoProduct_generator__SIM_present;
   GenEventInfoProduct GenEventInfoProduct_generator__SIM_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__SIM_;
   Bool_t          edmTriggerResults_TriggerResults__SIM_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__SIM_obj;
 //edm::Wrapper<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > *floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_;
   Bool_t          floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_present;
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__HLT_;
   Bool_t          edmTriggerResults_TriggerResults__HLT_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__HLT_obj;
 //edm::Wrapper<float> *float_genParticles_t0_HLT_;
   Bool_t          float_genParticles_t0_HLT_present;
   Float_t         float_genParticles_t0_HLT_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetTrue__HLT_;
   Bool_t          recoGenMETs_genMetTrue__HLT_present;
   vector<reco::GenMET> recoGenMETs_genMetTrue__HLT_obj;
 //edm::Wrapper<vector<reco::GenParticle> > *recoGenParticles_genPUProtons_genPUProtons_HLT_;
   Bool_t          recoGenParticles_genPUProtons_genPUProtons_HLT_present;
   vector<reco::GenParticle> recoGenParticles_genPUProtons_genPUProtons_HLT_obj;
 //edm::Wrapper<BXVector<GlobalAlgBlk> > *GlobalAlgBlkBXVector_gtStage2Digis__RECO_;
   Bool_t          GlobalAlgBlkBXVector_gtStage2Digis__RECO_present;
   BXVector<GlobalAlgBlk> GlobalAlgBlkBXVector_gtStage2Digis__RECO_obj;
 //edm::Wrapper<BXVector<GlobalExtBlk> > *GlobalExtBlkBXVector_gtStage2Digis__RECO_;
   Bool_t          GlobalExtBlkBXVector_gtStage2Digis__RECO_present;
   BXVector<GlobalExtBlk> GlobalExtBlkBXVector_gtStage2Digis__RECO_obj;
 //edm::Wrapper<BXVector<l1t::EGamma> > *l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_;
   Bool_t          l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_present;
   BXVector<l1t::EGamma> l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_obj;
 //edm::Wrapper<BXVector<l1t::EtSum> > *l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_;
   Bool_t          l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_present;
   BXVector<l1t::EtSum> l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_obj;
 //edm::Wrapper<BXVector<l1t::Jet> > *l1tJetBXVector_caloStage2Digis_Jet_RECO_;
   Bool_t          l1tJetBXVector_caloStage2Digis_Jet_RECO_present;
   BXVector<l1t::Jet> l1tJetBXVector_caloStage2Digis_Jet_RECO_obj;
 //edm::Wrapper<BXVector<l1t::Muon> > *l1tMuonBXVector_gmtStage2Digis_Muon_RECO_;
   Bool_t          l1tMuonBXVector_gmtStage2Digis_Muon_RECO_present;
   BXVector<l1t::Muon> l1tMuonBXVector_gmtStage2Digis_Muon_RECO_obj;
 //edm::Wrapper<BXVector<l1t::Tau> > *l1tTauBXVector_caloStage2Digis_Tau_RECO_;
   Bool_t          l1tTauBXVector_caloStage2Digis_Tau_RECO_present;
   BXVector<l1t::Tau> l1tTauBXVector_caloStage2Digis_Tau_RECO_obj;
 //edm::Wrapper<HcalNoiseSummary> *HcalNoiseSummary_hcalnoise__RECO_;
   Bool_t          HcalNoiseSummary_hcalnoise__RECO_present;
   HcalNoiseSummary HcalNoiseSummary_hcalnoise__RECO_obj;
 //edm::Wrapper<L1GlobalTriggerReadoutRecord> *L1GlobalTriggerReadoutRecord_gtDigis__RECO_;
   Bool_t          L1GlobalTriggerReadoutRecord_gtDigis__RECO_present;
   L1GlobalTriggerReadoutRecord L1GlobalTriggerReadoutRecord_gtDigis__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoAll__RECO_;
   Bool_t          double_fixedGridRhoAll__RECO_present;
   Double_t        double_fixedGridRhoAll__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetAll__RECO_;
   Bool_t          double_fixedGridRhoFastjetAll__RECO_present;
   Double_t        double_fixedGridRhoFastjetAll__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetAllCalo__RECO_;
   Bool_t          double_fixedGridRhoFastjetAllCalo__RECO_present;
   Double_t        double_fixedGridRhoFastjetAllCalo__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentral__RECO_;
   Bool_t          double_fixedGridRhoFastjetCentral__RECO_present;
   Double_t        double_fixedGridRhoFastjetCentral__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralCalo__RECO_;
   Bool_t          double_fixedGridRhoFastjetCentralCalo__RECO_present;
   Double_t        double_fixedGridRhoFastjetCentralCalo__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralChargedPileUp__RECO_;
   Bool_t          double_fixedGridRhoFastjetCentralChargedPileUp__RECO_present;
   Double_t        double_fixedGridRhoFastjetCentralChargedPileUp__RECO_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralNeutral__RECO_;
   Bool_t          double_fixedGridRhoFastjetCentralNeutral__RECO_present;
   Double_t        double_fixedGridRhoFastjetCentralNeutral__RECO_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__RECO_;
   Bool_t          edmTriggerResults_TriggerResults__RECO_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__RECO_obj;
 //edm::Wrapper<reco::BeamHaloSummary> *recoBeamHaloSummary_BeamHaloSummary__RECO_;
   Bool_t          recoBeamHaloSummary_BeamHaloSummary__RECO_present;
   reco::BeamHaloSummary recoBeamHaloSummary_BeamHaloSummary__RECO_obj;
 //edm::Wrapper<reco::BeamSpot> *recoBeamSpot_offlineBeamSpot__RECO_;
   Bool_t          recoBeamSpot_offlineBeamSpot__RECO_present;
   reco::BeamSpot  recoBeamSpot_offlineBeamSpot__RECO_obj;
 //edm::Wrapper<reco::CSCHaloData> *recoCSCHaloData_CSCHaloData__RECO_;
   Bool_t          recoCSCHaloData_CSCHaloData__RECO_present;
   reco::CSCHaloData recoCSCHaloData_CSCHaloData__RECO_obj;
 //edm::Wrapper<vector<CTPPSLocalTrackLite> > *CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_;
   Bool_t          CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_present;
   vector<CTPPSLocalTrackLite> CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_obj;
 //edm::Wrapper<vector<LumiScalers> > *LumiScalerss_scalersRawToDigi__RECO_;
   Bool_t          LumiScalerss_scalersRawToDigi__RECO_present;
   vector<LumiScalers> LumiScalerss_scalersRawToDigi__RECO_obj;
 //edm::Wrapper<vector<l1extra::L1EmParticle> > *l1extraL1EmParticles_l1extraParticles_Isolated_RECO_;
   Bool_t          l1extraL1EmParticles_l1extraParticles_Isolated_RECO_present;
   vector<l1extra::L1EmParticle> l1extraL1EmParticles_l1extraParticles_Isolated_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1EmParticle> > *l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_;
   Bool_t          l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_present;
   vector<l1extra::L1EmParticle> l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1EtMissParticle> > *l1extraL1EtMissParticles_l1extraParticles_MET_RECO_;
   Bool_t          l1extraL1EtMissParticles_l1extraParticles_MET_RECO_present;
   vector<l1extra::L1EtMissParticle> l1extraL1EtMissParticles_l1extraParticles_MET_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1EtMissParticle> > *l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_;
   Bool_t          l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_present;
   vector<l1extra::L1EtMissParticle> l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1HFRings> > *l1extraL1HFRingss_l1extraParticles__RECO_;
   Bool_t          l1extraL1HFRingss_l1extraParticles__RECO_present;
   vector<l1extra::L1HFRings> l1extraL1HFRingss_l1extraParticles__RECO_obj;
 //edm::Wrapper<vector<l1extra::L1JetParticle> > *l1extraL1JetParticles_l1extraParticles_Central_RECO_;
   Bool_t          l1extraL1JetParticles_l1extraParticles_Central_RECO_present;
   vector<l1extra::L1JetParticle> l1extraL1JetParticles_l1extraParticles_Central_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1JetParticle> > *l1extraL1JetParticles_l1extraParticles_Forward_RECO_;
   Bool_t          l1extraL1JetParticles_l1extraParticles_Forward_RECO_present;
   vector<l1extra::L1JetParticle> l1extraL1JetParticles_l1extraParticles_Forward_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1JetParticle> > *l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_;
   Bool_t          l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_present;
   vector<l1extra::L1JetParticle> l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1JetParticle> > *l1extraL1JetParticles_l1extraParticles_Tau_RECO_;
   Bool_t          l1extraL1JetParticles_l1extraParticles_Tau_RECO_present;
   vector<l1extra::L1JetParticle> l1extraL1JetParticles_l1extraParticles_Tau_RECO_obj;
 //edm::Wrapper<vector<l1extra::L1MuonParticle> > *l1extraL1MuonParticles_l1extraParticles__RECO_;
   Bool_t          l1extraL1MuonParticles_l1extraParticles__RECO_present;
   vector<l1extra::L1MuonParticle> l1extraL1MuonParticles_l1extraParticles__RECO_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_displacedStandAloneMuons__RECO_;
   Bool_t          recoTracks_displacedStandAloneMuons__RECO_present;
   vector<reco::Track> recoTracks_displacedStandAloneMuons__RECO_obj;
 //edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > > *recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_;
   Bool_t          recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_present;
   edm::Association<vector<reco::DeDxHitInfo> > recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_obj;
 //edm::Wrapper<edm::OwnVector<reco::BaseTagInfo,edm::ClonePolicy<reco::BaseTagInfo> > > *recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_;
   Bool_t          recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_present;
   edm::OwnVector<reco::BaseTagInfo,edm::ClonePolicy<reco::BaseTagInfo> > recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_obj;
 //edm::Wrapper<edm::RangeMap<CSCDetId,edm::OwnVector<CSCSegment,edm::ClonePolicy<CSCSegment> >,edm::ClonePolicy<CSCSegment> > > *CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_;
   Bool_t          CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_present;
   edm::RangeMap<CSCDetId,edm::OwnVector<CSCSegment,edm::ClonePolicy<CSCSegment> >,edm::ClonePolicy<CSCSegment> > CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_obj;
 //edm::Wrapper<edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > > *DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_;
   Bool_t          DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_present;
   edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_;
   Bool_t          EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_present;
   Int_t           EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_;
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_id__id_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_energy_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_time_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_flagBits_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_extra_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj_]
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_;
   Bool_t          EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_present;
   Int_t           EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_;
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_id__id_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_energy_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_time_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_flagBits_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_extra_[kMaxEcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj_]
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_;
   Bool_t          EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_present;
   Int_t           EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_;
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_id__id_[kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_energy_[kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj_]
   Float_t         EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_time_[kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_flagBits_[kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj_]
   UInt_t          EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_extra_[kMaxEcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj];   //[EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj_]
 //edm::Wrapper<edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > > *HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_;
   Bool_t          HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_present;
   edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__PAT_;
   Bool_t          edmTriggerResults_TriggerResults__PAT_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__PAT_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_;
   Bool_t          floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_present;
   edm::ValueMap<float> floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_obj;
 //edm::Wrapper<pat::PackedTriggerPrescales> *patPackedTriggerPrescales_patTrigger__PAT_;
   Bool_t          patPackedTriggerPrescales_patTrigger__PAT_present;
   pat::PackedTriggerPrescales patPackedTriggerPrescales_patTrigger__PAT_obj;
 //edm::Wrapper<pat::PackedTriggerPrescales> *patPackedTriggerPrescales_patTrigger_l1max_PAT_;
   Bool_t          patPackedTriggerPrescales_patTrigger_l1max_PAT_present;
   pat::PackedTriggerPrescales patPackedTriggerPrescales_patTrigger_l1max_PAT_obj;
 //edm::Wrapper<pat::PackedTriggerPrescales> *patPackedTriggerPrescales_patTrigger_l1min_PAT_;
   Bool_t          patPackedTriggerPrescales_patTrigger_l1min_PAT_present;
   pat::PackedTriggerPrescales patPackedTriggerPrescales_patTrigger_l1min_PAT_obj;
 //edm::Wrapper<reco::JetFlavourInfoMatchingCollection> *recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_;
   Bool_t          recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_present;
   reco::JetFlavourInfoMatchingCollection recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_obj;
 //edm::Wrapper<vector<PileupSummaryInfo> > *PileupSummaryInfos_slimmedAddPileupInfo__PAT_;
   Bool_t          PileupSummaryInfos_slimmedAddPileupInfo__PAT_present;
   vector<PileupSummaryInfo> PileupSummaryInfos_slimmedAddPileupInfo__PAT_obj;
 //edm::Wrapper<vector<pat::CompositeCandidate> > *patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_;
   Bool_t          patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_present;
   vector<pat::CompositeCandidate> patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_obj;
 //edm::Wrapper<vector<pat::Electron> > *patElectrons_slimmedElectrons__PAT_;
   Bool_t          patElectrons_slimmedElectrons__PAT_present;
   vector<pat::Electron> patElectrons_slimmedElectrons__PAT_obj;
 //edm::Wrapper<vector<pat::IsolatedTrack> > *patIsolatedTracks_isolatedTracks__PAT_;
   Bool_t          patIsolatedTracks_isolatedTracks__PAT_present;
   vector<pat::IsolatedTrack> patIsolatedTracks_isolatedTracks__PAT_obj;
 //edm::Wrapper<vector<pat::Jet> > *patJets_slimmedJets__PAT_;
   Bool_t          patJets_slimmedJets__PAT_present;
   Int_t           patJets_slimmedJets__PAT_obj_;
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fX[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fY[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fZ[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Double32_t      patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fM[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_m_state_qx3_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_m_state_pdgId_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_m_state_status_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<edm::Ptr<reco::Candidate> > patJets_slimmedJets__PAT_obj_dau[kMaxpatJets_slimmedJets__PAT_obj];
   Float_t         patJets_slimmedJets__PAT_obj_mJetArea[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_mPileupEnergy[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_mPassNumber[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   edm::RefCore    patJets_slimmedJets__PAT_obj_refToOrig__core_[kMaxpatJets_slimmedJets__PAT_obj];
   ULong_t         patJets_slimmedJets__PAT_obj_refToOrig__key_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<pat::TriggerObjectStandAlone> patJets_slimmedJets__PAT_obj_triggerObjectMatchesEmbedded_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<pat::LookupTableRecord> patJets_slimmedJets__PAT_obj_efficiencyValues_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_efficiencyNames_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::Ref<vector<reco::GenParticle>,reco::GenParticle,edm::refhelper::FindUsingAdvance<vector<reco::GenParticle>,reco::GenParticle> > > patJets_slimmedJets__PAT_obj_genParticleRef_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::GenParticle> patJets_slimmedJets__PAT_obj_genParticleEmbedded_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_overlapLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::PtrVector<reco::Candidate> > patJets_slimmedJets__PAT_obj_overlapItems_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_userDataLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<pat::UserData*> patJets_slimmedJets__PAT_obj_userDataObjects__data_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_userFloatLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<float>   patJets_slimmedJets__PAT_obj_userFloats_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_userIntLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<int>     patJets_slimmedJets__PAT_obj_userInts_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_userCandLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::Ptr<reco::Candidate> > patJets_slimmedJets__PAT_obj_userCands_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<pat::CandKinResolution> patJets_slimmedJets__PAT_obj_kinResolutions_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_kinResolutionLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   Bool_t          patJets_slimmedJets__PAT_obj_embeddedCaloTowers_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<CaloTower> patJets_slimmedJets__PAT_obj_caloTowers__obj[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::FwdPtr<CaloTower> > patJets_slimmedJets__PAT_obj_caloTowersFwdPtr_[kMaxpatJets_slimmedJets__PAT_obj];
   Bool_t          patJets_slimmedJets__PAT_obj_embeddedPFCandidates_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<reco::PFCandidate> patJets_slimmedJets__PAT_obj_pfCandidates_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::FwdPtr<reco::PFCandidate> > patJets_slimmedJets__PAT_obj_pfCandidatesFwdPtr_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<vector<edm::Ptr<pat::Jet> > > patJets_slimmedJets__PAT_obj_subjetCollections_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_subjetLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::GenJet> patJets_slimmedJets__PAT_obj_genJet_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCore    patJets_slimmedJets__PAT_obj_genJetRef__refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_genJetRef__refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCoreWithIndex patJets_slimmedJets__PAT_obj_genJetFwdRef__ref__product_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCoreWithIndex patJets_slimmedJets__PAT_obj_genJetFwdRef__backRef__product_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCore    patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCore    patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCore    patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   edm::RefCore    patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   Int_t           patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_hadronFlavour[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partonFlavour[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<pat::JetCorrFactors> patJets_slimmedJets__PAT_obj_jec_[kMaxpatJets_slimmedJets__PAT_obj];
   UInt_t          patJets_slimmedJets__PAT_obj_currentJECSet_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   UInt_t          patJets_slimmedJets__PAT_obj_currentJECLevel_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Int_t           patJets_slimmedJets__PAT_obj_currentJECFlavor_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   vector<pair<string,float> > patJets_slimmedJets__PAT_obj_pairDiscriVector_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<string>  patJets_slimmedJets__PAT_obj_tagInfoLabels_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::BaseTagInfo*> patJets_slimmedJets__PAT_obj_tagInfos__data_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<edm::FwdPtr<reco::BaseTagInfo> > patJets_slimmedJets__PAT_obj_tagInfosFwdPtr_[kMaxpatJets_slimmedJets__PAT_obj];
   Float_t         patJets_slimmedJets__PAT_obj_jetCharge_[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   edm::RefCore    patJets_slimmedJets__PAT_obj_associatedTracks__refVector__product_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<unsigned int> patJets_slimmedJets__PAT_obj_associatedTracks__refVector__keys_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::CaloJet::Specific> patJets_slimmedJets__PAT_obj_specificCalo_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::JPTJet::Specific> patJets_slimmedJets__PAT_obj_specificJPT_[kMaxpatJets_slimmedJets__PAT_obj];
   vector<reco::PFJet::Specific> patJets_slimmedJets__PAT_obj_specificPF_[kMaxpatJets_slimmedJets__PAT_obj];
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fHPD[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fRBX[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__n90Hits[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fSubDetector1[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fSubDetector2[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fSubDetector3[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fSubDetector4[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__restrictedEMF[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__nHCALTowers[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__nECALTowers[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__approximatefHPD[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__approximatefRBX[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__hitsInN90[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__numberOfHits2RPC[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__numberOfHits3RPC[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Short_t         patJets_slimmedJets__PAT_obj_jetID__numberOfHitsRPC[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fEB[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fEE[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fHB[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fHE[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fHO[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fLong[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fShort[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fLS[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
   Float_t         patJets_slimmedJets__PAT_obj_jetID__fHFOOT[kMaxpatJets_slimmedJets__PAT_obj];   //[patJets_slimmedJets__PAT.obj_]
 //edm::Wrapper<vector<pat::Jet> > *patJets_slimmedJetsAK8__PAT_;
   Bool_t          patJets_slimmedJetsAK8__PAT_present;
   vector<pat::Jet> patJets_slimmedJetsAK8__PAT_obj;
 //edm::Wrapper<vector<pat::Jet> > *patJets_slimmedJetsPuppi__PAT_;
   Bool_t          patJets_slimmedJetsPuppi__PAT_present;
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_;
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fX[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fY[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fZ[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPt[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fEta[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPhi[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Double32_t      patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fM[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_m_state_qx3_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_m_state_pdgId_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_m_state_status_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<edm::Ptr<reco::Candidate> > patJets_slimmedJetsPuppi__PAT_obj_dau[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_mJetArea[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_mPileupEnergy[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_mPassNumber[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_refToOrig__core_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   ULong_t         patJets_slimmedJetsPuppi__PAT_obj_refToOrig__key_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<pat::TriggerObjectStandAlone> patJets_slimmedJetsPuppi__PAT_obj_triggerObjectMatchesEmbedded_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<pat::LookupTableRecord> patJets_slimmedJetsPuppi__PAT_obj_efficiencyValues_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_efficiencyNames_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::Ref<vector<reco::GenParticle>,reco::GenParticle,edm::refhelper::FindUsingAdvance<vector<reco::GenParticle>,reco::GenParticle> > > patJets_slimmedJetsPuppi__PAT_obj_genParticleRef_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::GenParticle> patJets_slimmedJetsPuppi__PAT_obj_genParticleEmbedded_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_overlapLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::PtrVector<reco::Candidate> > patJets_slimmedJetsPuppi__PAT_obj_overlapItems_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_userDataLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<pat::UserData*> patJets_slimmedJetsPuppi__PAT_obj_userDataObjects__data_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_userFloatLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<float>   patJets_slimmedJetsPuppi__PAT_obj_userFloats_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_userIntLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<int>     patJets_slimmedJetsPuppi__PAT_obj_userInts_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_userCandLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::Ptr<reco::Candidate> > patJets_slimmedJetsPuppi__PAT_obj_userCands_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<pat::CandKinResolution> patJets_slimmedJetsPuppi__PAT_obj_kinResolutions_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_kinResolutionLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Bool_t          patJets_slimmedJetsPuppi__PAT_obj_embeddedCaloTowers_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<CaloTower> patJets_slimmedJetsPuppi__PAT_obj_caloTowers__obj[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::FwdPtr<CaloTower> > patJets_slimmedJetsPuppi__PAT_obj_caloTowersFwdPtr_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Bool_t          patJets_slimmedJetsPuppi__PAT_obj_embeddedPFCandidates_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<reco::PFCandidate> patJets_slimmedJetsPuppi__PAT_obj_pfCandidates_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::FwdPtr<reco::PFCandidate> > patJets_slimmedJetsPuppi__PAT_obj_pfCandidatesFwdPtr_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<vector<edm::Ptr<pat::Jet> > > patJets_slimmedJetsPuppi__PAT_obj_subjetCollections_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_subjetLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::GenJet> patJets_slimmedJetsPuppi__PAT_obj_genJet_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCoreWithIndex patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__ref__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCoreWithIndex patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__backRef__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_hadronFlavour[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partonFlavour[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<pat::JetCorrFactors> patJets_slimmedJetsPuppi__PAT_obj_jec_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   UInt_t          patJets_slimmedJetsPuppi__PAT_obj_currentJECSet_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   UInt_t          patJets_slimmedJetsPuppi__PAT_obj_currentJECLevel_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Int_t           patJets_slimmedJetsPuppi__PAT_obj_currentJECFlavor_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   vector<pair<string,float> > patJets_slimmedJetsPuppi__PAT_obj_pairDiscriVector_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<string>  patJets_slimmedJetsPuppi__PAT_obj_tagInfoLabels_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::BaseTagInfo*> patJets_slimmedJetsPuppi__PAT_obj_tagInfos__data_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<edm::FwdPtr<reco::BaseTagInfo> > patJets_slimmedJetsPuppi__PAT_obj_tagInfosFwdPtr_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetCharge_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   edm::RefCore    patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__product_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<unsigned int> patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__keys_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::CaloJet::Specific> patJets_slimmedJetsPuppi__PAT_obj_specificCalo_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::JPTJet::Specific> patJets_slimmedJetsPuppi__PAT_obj_specificJPT_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   vector<reco::PFJet::Specific> patJets_slimmedJetsPuppi__PAT_obj_specificPF_[kMaxpatJets_slimmedJetsPuppi__PAT_obj];
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fHPD[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fRBX[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__n90Hits[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector1[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector2[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector3[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector4[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__restrictedEMF[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__nHCALTowers[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__nECALTowers[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefHPD[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefRBX[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__hitsInN90[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits2RPC[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits3RPC[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Short_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHitsRPC[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fEB[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fEE[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fHB[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fHE[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fHO[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fLong[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fShort[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fLS[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
   Float_t         patJets_slimmedJetsPuppi__PAT_obj_jetID__fHFOOT[kMaxpatJets_slimmedJetsPuppi__PAT_obj];   //[patJets_slimmedJetsPuppi__PAT.obj_]
 //edm::Wrapper<vector<pat::Jet> > *patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_;
   Bool_t          patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_present;
   vector<pat::Jet> patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_obj;
 //edm::Wrapper<vector<pat::MET> > *patMETs_slimmedMETs__PAT_;
   Bool_t          patMETs_slimmedMETs__PAT_present;
   vector<pat::MET> patMETs_slimmedMETs__PAT_obj;
 //edm::Wrapper<vector<pat::MET> > *patMETs_slimmedMETsNoHF__PAT_;
   Bool_t          patMETs_slimmedMETsNoHF__PAT_present;
   vector<pat::MET> patMETs_slimmedMETsNoHF__PAT_obj;
 //edm::Wrapper<vector<pat::MET> > *patMETs_slimmedMETsPuppi__PAT_;
   Bool_t          patMETs_slimmedMETsPuppi__PAT_present;
   vector<pat::MET> patMETs_slimmedMETsPuppi__PAT_obj;
 //edm::Wrapper<vector<pat::Muon> > *patMuons_slimmedMuons__PAT_;
   Bool_t          patMuons_slimmedMuons__PAT_present;
   vector<pat::Muon> patMuons_slimmedMuons__PAT_obj;
 //edm::Wrapper<vector<pat::PackedCandidate> > *patPackedCandidates_lostTracks__PAT_;
   Bool_t          patPackedCandidates_lostTracks__PAT_present;
   vector<pat::PackedCandidate> patPackedCandidates_lostTracks__PAT_obj;
 //edm::Wrapper<vector<pat::PackedCandidate> > *patPackedCandidates_packedPFCandidates__PAT_;
   Bool_t          patPackedCandidates_packedPFCandidates__PAT_present;
   Int_t           patPackedCandidates_packedPFCandidates__PAT_obj_;
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedPt_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedEta_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedPhi_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedM_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedDxy_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedDz_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedDPhi_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedDEta_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedDTrkPt_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydxy[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydz[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dzdz[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dlambdadz[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidxy[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dptdpt[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__detadeta[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidphi[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweight_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   Char_t          patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweightNoLepDiff_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_rawCaloFraction_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   Char_t          patPackedCandidates_packedPFCandidates__PAT_obj_hcalFraction_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   Short_t         patPackedCandidates_packedPFCandidates__PAT_obj_packedTime_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_packedTimeError_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   Bool_t          patPackedCandidates_packedPFCandidates__PAT_obj_isIsolatedChargedHadron_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   Int_t           patPackedCandidates_packedPFCandidates__PAT_obj_pdgId_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_qualityFlags_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   edm::RefCore    patPackedCandidates_packedPFCandidates__PAT_obj_pvRefProd__product_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];
   UInt_t          patPackedCandidates_packedPFCandidates__PAT_obj_pvRefKey_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_packedHits_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_packedLayers_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UChar_t         patPackedCandidates_packedPFCandidates__PAT_obj_normalizedChi2_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_covarianceVersion_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_covarianceSchema_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
   UShort_t        patPackedCandidates_packedPFCandidates__PAT_obj_firstHit_[kMaxpatPackedCandidates_packedPFCandidates__PAT_obj];   //[patPackedCandidates_packedPFCandidates__PAT.obj_]
 //edm::Wrapper<vector<pat::PackedCandidate> > *patPackedCandidates_lostTracks_eleTracks_PAT_;
   Bool_t          patPackedCandidates_lostTracks_eleTracks_PAT_present;
   vector<pat::PackedCandidate> patPackedCandidates_lostTracks_eleTracks_PAT_obj;
 //edm::Wrapper<vector<pat::PackedGenParticle> > *patPackedGenParticles_packedGenParticles__PAT_;
   Bool_t          patPackedGenParticles_packedGenParticles__PAT_present;
   Int_t           patPackedGenParticles_packedGenParticles__PAT_obj_;
   UShort_t        patPackedGenParticles_packedGenParticles__PAT_obj_packedPt_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   UShort_t        patPackedGenParticles_packedGenParticles__PAT_obj_packedY_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   UShort_t        patPackedGenParticles_packedGenParticles__PAT_obj_packedPhi_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   UShort_t        patPackedGenParticles_packedGenParticles__PAT_obj_packedM_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Double_t        patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fX[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Double_t        patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fY[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Double_t        patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fZ[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Float_t         patPackedGenParticles_packedGenParticles__PAT_obj_dxy_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Float_t         patPackedGenParticles_packedGenParticles__PAT_obj_dz_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Float_t         patPackedGenParticles_packedGenParticles__PAT_obj_dphi_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Int_t           patPackedGenParticles_packedGenParticles__PAT_obj_pdgId_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   Char_t          patPackedGenParticles_packedGenParticles__PAT_obj_charge_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];   //[patPackedGenParticles_packedGenParticles__PAT.obj_]
   edm::RefCoreWithIndex patPackedGenParticles_packedGenParticles__PAT_obj_mother__product_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];
   bitset<15>      patPackedGenParticles_packedGenParticles__PAT_obj_statusFlags__flags_[kMaxpatPackedGenParticles_packedGenParticles__PAT_obj];
 //edm::Wrapper<vector<pat::Photon> > *patPhotons_slimmedOOTPhotons__PAT_;
   Bool_t          patPhotons_slimmedOOTPhotons__PAT_present;
   vector<pat::Photon> patPhotons_slimmedOOTPhotons__PAT_obj;
 //edm::Wrapper<vector<pat::Photon> > *patPhotons_slimmedPhotons__PAT_;
   Bool_t          patPhotons_slimmedPhotons__PAT_present;
   vector<pat::Photon> patPhotons_slimmedPhotons__PAT_obj;
 //edm::Wrapper<vector<pat::Tau> > *patTaus_slimmedTaus__PAT_;
   Bool_t          patTaus_slimmedTaus__PAT_present;
   vector<pat::Tau> patTaus_slimmedTaus__PAT_obj;
 //edm::Wrapper<vector<pat::Tau> > *patTaus_slimmedTausBoosted__PAT_;
   Bool_t          patTaus_slimmedTausBoosted__PAT_present;
   vector<pat::Tau> patTaus_slimmedTausBoosted__PAT_obj;
 //edm::Wrapper<vector<pat::TriggerObjectStandAlone> > *patTriggerObjectStandAlones_slimmedPatTrigger__PAT_;
   Bool_t          patTriggerObjectStandAlones_slimmedPatTrigger__PAT_present;
   Int_t           patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_;
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fX[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fY[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fZ[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPt[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fEta[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPhi[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Double32_t      patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fM[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Int_t           patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_qx3_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Int_t           patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_pdgId_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   Int_t           patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_status_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];   //[patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj_]
   string          patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_collection_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<trigger::TriggerObjectType> patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_triggerObjectTypes_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<string>  patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabels_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<unsigned short> patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabelIndices_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<string>  patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathNames_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<unsigned short> patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathIndices_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<bool>    patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathLastFilterAccepted_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   vector<bool>    patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathL3FilterAccepted_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
   string          patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_psetId__hash_[kMaxpatTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj];
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_;
   Bool_t          recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_present;
   vector<reco::CaloCluster> recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_reducedEgamma_reducedESClusters_PAT_;
   Bool_t          recoCaloClusters_reducedEgamma_reducedESClusters_PAT_present;
   Int_t           recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_;
   Double_t        recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_energy_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   Double_t        recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergy_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   Float_t         recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergyUncertainty_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   Double_t        recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fX[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   Double_t        recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fY[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   Double_t        recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fZ[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   UInt_t          recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_caloID__detectors_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   vector<pair<DetId,float> > recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_hitsAndFractions_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];
   Int_t           recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_algoID_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   UInt_t          recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_seedId__id_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
   UInt_t          recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_flags_[kMaxrecoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj];   //[recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj_]
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_;
   Bool_t          recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_present;
   vector<reco::CaloCluster> recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_;
   Bool_t          recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_present;
   vector<reco::CaloCluster> recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_obj;
 //edm::Wrapper<vector<reco::CaloJet> > *recoCaloJets_slimmedCaloJets__PAT_;
   Bool_t          recoCaloJets_slimmedCaloJets__PAT_present;
   vector<reco::CaloJet> recoCaloJets_slimmedCaloJets__PAT_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_reducedEgamma_reducedConversions_PAT_;
   Bool_t          recoConversions_reducedEgamma_reducedConversions_PAT_present;
   vector<reco::Conversion> recoConversions_reducedEgamma_reducedConversions_PAT_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_;
   Bool_t          recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_present;
   vector<reco::Conversion> recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_obj;
 //edm::Wrapper<vector<reco::DeDxHitInfo> > *recoDeDxHitInfos_isolatedTracks__PAT_;
   Bool_t          recoDeDxHitInfos_isolatedTracks__PAT_present;
   vector<reco::DeDxHitInfo> recoDeDxHitInfos_isolatedTracks__PAT_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_slimmedGenJets__PAT_;
   Bool_t          recoGenJets_slimmedGenJets__PAT_present;
   Int_t           recoGenJets_slimmedGenJets__PAT_obj_;
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fX[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fY[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fZ[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Double32_t      recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fM[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Int_t           recoGenJets_slimmedGenJets__PAT_obj_m_state_qx3_[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Int_t           recoGenJets_slimmedGenJets__PAT_obj_m_state_pdgId_[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Int_t           recoGenJets_slimmedGenJets__PAT_obj_m_state_status_[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   vector<edm::Ptr<reco::Candidate> > recoGenJets_slimmedGenJets__PAT_obj_dau[kMaxrecoGenJets_slimmedGenJets__PAT_obj];
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_mJetArea[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_mPileupEnergy[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Int_t           recoGenJets_slimmedGenJets__PAT_obj_mPassNumber[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_EmEnergy[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_HadEnergy[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_InvisibleEnergy[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
   Float_t         recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_AuxiliaryEnergy[kMaxrecoGenJets_slimmedGenJets__PAT_obj];   //[recoGenJets_slimmedGenJets__PAT.obj_]
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_slimmedGenJetsAK8__PAT_;
   Bool_t          recoGenJets_slimmedGenJetsAK8__PAT_present;
   vector<reco::GenJet> recoGenJets_slimmedGenJetsAK8__PAT_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_;
   Bool_t          recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_present;
   vector<reco::GenJet> recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_obj;
 //edm::Wrapper<vector<reco::GenParticle> > *recoGenParticles_prunedGenParticles__PAT_;
   Bool_t          recoGenParticles_prunedGenParticles__PAT_present;
   Int_t           recoGenParticles_prunedGenParticles__PAT_obj_;
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fX[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fY[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fZ[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPt[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fEta[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPhi[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Double32_t      recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fM[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Int_t           recoGenParticles_prunedGenParticles__PAT_obj_m_state_qx3_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Int_t           recoGenParticles_prunedGenParticles__PAT_obj_m_state_pdgId_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   Int_t           recoGenParticles_prunedGenParticles__PAT_obj_m_state_status_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   edm::RefCore    recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__product_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];
   vector<unsigned int> recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__keys_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];
   edm::RefCore    recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__product_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];
   vector<unsigned int> recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__keys_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];
   Int_t           recoGenParticles_prunedGenParticles__PAT_obj_collisionId_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];   //[recoGenParticles_prunedGenParticles__PAT.obj_]
   bitset<15>      recoGenParticles_prunedGenParticles__PAT_obj_statusFlags__flags_[kMaxrecoGenParticles_prunedGenParticles__PAT_obj];
 //edm::Wrapper<vector<reco::GsfElectronCore> > *recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_;
   Bool_t          recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_present;
   vector<reco::GsfElectronCore> recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_obj;
 //edm::Wrapper<vector<reco::GsfTrack> > *recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_;
   Bool_t          recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_present;
   vector<reco::GsfTrack> recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_obj;
 //edm::Wrapper<vector<reco::PhotonCore> > *recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_;
   Bool_t          recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_present;
   vector<reco::PhotonCore> recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_obj;
 //edm::Wrapper<vector<reco::PhotonCore> > *recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_;
   Bool_t          recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_present;
   vector<reco::PhotonCore> recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_;
   Bool_t          recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_present;
   vector<reco::SuperCluster> recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_;
   Bool_t          recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_present;
   vector<reco::SuperCluster> recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_obj;
 //edm::Wrapper<vector<reco::Vertex> > *recoVertexs_offlineSlimmedPrimaryVertices__PAT_;
   Bool_t          recoVertexs_offlineSlimmedPrimaryVertices__PAT_present;
   Int_t           recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_;
   Float_t         recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_chi2_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Float_t         recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_ndof_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Double_t        recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fX[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Double_t        recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fY[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Double_t        recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fZ[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Float_t         recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_covariance_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj][10];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   vector<edm::RefToBase<reco::Track> > recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_tracks_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];
   vector<reco::Track> recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_refittedTracks_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];
   vector<unsigned char> recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_weights_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];
   Bool_t          recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_validity_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
   Double_t        recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_time_[kMaxrecoVertexs_offlineSlimmedPrimaryVertices__PAT_obj];   //[recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj_]
 //edm::Wrapper<vector<reco::VertexCompositePtrCandidate> > *recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_;
   Bool_t          recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_present;
   vector<reco::VertexCompositePtrCandidate> recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_obj;
 //edm::Wrapper<vector<reco::VertexCompositePtrCandidate> > *recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_;
   Bool_t          recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_present;
   vector<reco::VertexCompositePtrCandidate> recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_obj;
 //edm::Wrapper<vector<reco::VertexCompositePtrCandidate> > *recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_;
   Bool_t          recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_present;
   vector<reco::VertexCompositePtrCandidate> recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_obj;
 //edm::Wrapper<vector<string> > *Strings_slimmedPatTrigger_filterLabels_PAT_;
   Bool_t          Strings_slimmedPatTrigger_filterLabels_PAT_present;
   vector<string>  Strings_slimmedPatTrigger_filterLabels_PAT_obj;
 //edm::Wrapper<unsigned int> *uint_bunchSpacingProducer__PAT_;
   Bool_t          uint_bunchSpacingProducer__PAT_present;
   UInt_t          uint_bunchSpacingProducer__PAT_obj;

   // List of branches
   TBranch        *b_EventAuxiliary;   //!
   TBranch        *b_EventProductProvenance;   //!
   TBranch        *b_EventSelections;   //!
   TBranch        *b_BranchListIndexes;   //!
   TBranch        *b_GenEventInfoProduct_generator__SIM_present;   //!
   TBranch        *b_GenEventInfoProduct_generator__SIM_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__SIM_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__SIM_obj;   //!
   TBranch        *b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_present;   //!
   TBranch        *b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__HLT_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__HLT_obj;   //!
   TBranch        *b_float_genParticles_t0_HLT_present;   //!
   TBranch        *b_float_genParticles_t0_HLT_obj;   //!
   TBranch        *b_recoGenMETs_genMetTrue__HLT_present;   //!
   TBranch        *b_recoGenMETs_genMetTrue__HLT_obj;   //!
   TBranch        *b_recoGenParticles_genPUProtons_genPUProtons_HLT_present;   //!
   TBranch        *b_recoGenParticles_genPUProtons_genPUProtons_HLT_obj;   //!
   TBranch        *b_GlobalAlgBlkBXVector_gtStage2Digis__RECO_present;   //!
   TBranch        *b_GlobalAlgBlkBXVector_gtStage2Digis__RECO_obj;   //!
   TBranch        *b_GlobalExtBlkBXVector_gtStage2Digis__RECO_present;   //!
   TBranch        *b_GlobalExtBlkBXVector_gtStage2Digis__RECO_obj;   //!
   TBranch        *b_l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_present;   //!
   TBranch        *b_l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_obj;   //!
   TBranch        *b_l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_present;   //!
   TBranch        *b_l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_obj;   //!
   TBranch        *b_l1tJetBXVector_caloStage2Digis_Jet_RECO_present;   //!
   TBranch        *b_l1tJetBXVector_caloStage2Digis_Jet_RECO_obj;   //!
   TBranch        *b_l1tMuonBXVector_gmtStage2Digis_Muon_RECO_present;   //!
   TBranch        *b_l1tMuonBXVector_gmtStage2Digis_Muon_RECO_obj;   //!
   TBranch        *b_l1tTauBXVector_caloStage2Digis_Tau_RECO_present;   //!
   TBranch        *b_l1tTauBXVector_caloStage2Digis_Tau_RECO_obj;   //!
   TBranch        *b_HcalNoiseSummary_hcalnoise__RECO_present;   //!
   TBranch        *b_HcalNoiseSummary_hcalnoise__RECO_obj;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_gtDigis__RECO_present;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_gtDigis__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoAll__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoAll__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetAll__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetAll__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetAllCalo__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetAllCalo__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentral__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentral__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralCalo__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralCalo__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralChargedPileUp__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralChargedPileUp__RECO_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralNeutral__RECO_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralNeutral__RECO_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__RECO_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__RECO_obj;   //!
   TBranch        *b_recoBeamHaloSummary_BeamHaloSummary__RECO_present;   //!
   TBranch        *b_recoBeamHaloSummary_BeamHaloSummary__RECO_obj;   //!
   TBranch        *b_recoBeamSpot_offlineBeamSpot__RECO_present;   //!
   TBranch        *b_recoBeamSpot_offlineBeamSpot__RECO_obj;   //!
   TBranch        *b_recoCSCHaloData_CSCHaloData__RECO_present;   //!
   TBranch        *b_recoCSCHaloData_CSCHaloData__RECO_obj;   //!
   TBranch        *b_CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_present;   //!
   TBranch        *b_CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_obj;   //!
   TBranch        *b_LumiScalerss_scalersRawToDigi__RECO_present;   //!
   TBranch        *b_LumiScalerss_scalersRawToDigi__RECO_obj;   //!
   TBranch        *b_l1extraL1EmParticles_l1extraParticles_Isolated_RECO_present;   //!
   TBranch        *b_l1extraL1EmParticles_l1extraParticles_Isolated_RECO_obj;   //!
   TBranch        *b_l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_present;   //!
   TBranch        *b_l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_obj;   //!
   TBranch        *b_l1extraL1EtMissParticles_l1extraParticles_MET_RECO_present;   //!
   TBranch        *b_l1extraL1EtMissParticles_l1extraParticles_MET_RECO_obj;   //!
   TBranch        *b_l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_present;   //!
   TBranch        *b_l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_obj;   //!
   TBranch        *b_l1extraL1HFRingss_l1extraParticles__RECO_present;   //!
   TBranch        *b_l1extraL1HFRingss_l1extraParticles__RECO_obj;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Central_RECO_present;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Central_RECO_obj;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Forward_RECO_present;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Forward_RECO_obj;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_present;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_obj;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Tau_RECO_present;   //!
   TBranch        *b_l1extraL1JetParticles_l1extraParticles_Tau_RECO_obj;   //!
   TBranch        *b_l1extraL1MuonParticles_l1extraParticles__RECO_present;   //!
   TBranch        *b_l1extraL1MuonParticles_l1extraParticles__RECO_obj;   //!
   TBranch        *b_recoTracks_displacedStandAloneMuons__RECO_present;   //!
   TBranch        *b_recoTracks_displacedStandAloneMuons__RECO_obj;   //!
   TBranch        *b_recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_present;   //!
   TBranch        *b_recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_obj;   //!
   TBranch        *b_recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_present;   //!
   TBranch        *b_recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_obj;   //!
   TBranch        *b_CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_present;   //!
   TBranch        *b_CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_obj;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_present;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_obj;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_id__id_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_energy_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_time_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_flagBits_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_extra_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_id__id_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_energy_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_time_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_flagBits_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_extra_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_id__id_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_energy_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_time_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_flagBits_;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_extra_;   //!
   TBranch        *b_HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_present;   //!
   TBranch        *b_HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__PAT_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__PAT_obj;   //!
   TBranch        *b_floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_present;   //!
   TBranch        *b_floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_obj;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger__PAT_present;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger__PAT_obj;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger_l1max_PAT_present;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger_l1max_PAT_obj;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger_l1min_PAT_present;   //!
   TBranch        *b_patPackedTriggerPrescales_patTrigger_l1min_PAT_obj;   //!
   TBranch        *b_recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_present;   //!
   TBranch        *b_recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_obj;   //!
   TBranch        *b_PileupSummaryInfos_slimmedAddPileupInfo__PAT_present;   //!
   TBranch        *b_PileupSummaryInfos_slimmedAddPileupInfo__PAT_obj;   //!
   TBranch        *b_patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_present;   //!
   TBranch        *b_patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_obj;   //!
   TBranch        *b_patElectrons_slimmedElectrons__PAT_present;   //!
   TBranch        *b_patElectrons_slimmedElectrons__PAT_obj;   //!
   TBranch        *b_patIsolatedTracks_isolatedTracks__PAT_present;   //!
   TBranch        *b_patIsolatedTracks_isolatedTracks__PAT_obj;   //!
   TBranch        *b_patJets_slimmedJets__PAT_present;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fX;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fY;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fZ;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fM;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_qx3_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_pdgId_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_m_state_status_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_dau;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_mJetArea;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_mPileupEnergy;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_mPassNumber;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_refToOrig__core_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_refToOrig__key_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_triggerObjectMatchesEmbedded_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_efficiencyValues_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_efficiencyNames_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genParticleRef_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genParticleEmbedded_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_overlapLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_overlapItems_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userDataLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userDataObjects__data_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userFloatLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userFloats_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userIntLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userInts_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userCandLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_userCands_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_kinResolutions_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_kinResolutionLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_embeddedCaloTowers_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_caloTowers__obj;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_caloTowersFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_embeddedPFCandidates_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_pfCandidates_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_pfCandidatesFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_subjetCollections_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_subjetLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genJet_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genJetRef__refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genJetRef__refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genJetFwdRef__ref__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_genJetFwdRef__backRef__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_hadronFlavour;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partonFlavour;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jec_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_currentJECSet_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_currentJECLevel_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_currentJECFlavor_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_pairDiscriVector_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_tagInfoLabels_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_tagInfos__data_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_tagInfosFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetCharge_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_associatedTracks__refVector__product_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_associatedTracks__refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_specificCalo_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_specificJPT_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_specificPF_;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fHPD;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fRBX;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__n90Hits;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector1;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector2;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector3;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector4;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__restrictedEMF;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__nHCALTowers;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__nECALTowers;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__approximatefHPD;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__approximatefRBX;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__hitsInN90;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__numberOfHits2RPC;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__numberOfHits3RPC;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__numberOfHitsRPC;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fEB;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fEE;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fHB;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fHE;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fHO;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fLong;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fShort;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fLS;   //!
   TBranch        *b_patJets_slimmedJets__PAT_obj_jetID__fHFOOT;   //!
   TBranch        *b_patJets_slimmedJetsAK8__PAT_present;   //!
   TBranch        *b_patJets_slimmedJetsAK8__PAT_obj;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_present;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fX;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fY;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fZ;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPt;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fEta;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPhi;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fM;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_qx3_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_pdgId_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_m_state_status_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_dau;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_mJetArea;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_mPileupEnergy;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_mPassNumber;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_refToOrig__core_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_refToOrig__key_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_triggerObjectMatchesEmbedded_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_efficiencyValues_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_efficiencyNames_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genParticleRef_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genParticleEmbedded_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_overlapLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_overlapItems_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userDataLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userDataObjects__data_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userFloatLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userFloats_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userIntLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userInts_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userCandLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_userCands_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_kinResolutions_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_kinResolutionLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_embeddedCaloTowers_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_caloTowers__obj;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_caloTowersFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_embeddedPFCandidates_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_pfCandidates_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_pfCandidatesFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_subjetCollections_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_subjetLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genJet_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__ref__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__backRef__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_hadronFlavour;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partonFlavour;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jec_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_currentJECSet_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_currentJECLevel_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_currentJECFlavor_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_pairDiscriVector_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_tagInfoLabels_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_tagInfos__data_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_tagInfosFwdPtr_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetCharge_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__product_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__keys_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_specificCalo_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_specificJPT_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_specificPF_;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHPD;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fRBX;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__n90Hits;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector1;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector2;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector3;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector4;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__restrictedEMF;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__nHCALTowers;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__nECALTowers;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefHPD;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefRBX;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__hitsInN90;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits2RPC;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits3RPC;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHitsRPC;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fEB;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fEE;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHB;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHE;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHO;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fLong;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fShort;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fLS;   //!
   TBranch        *b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHFOOT;   //!
   TBranch        *b_patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_present;   //!
   TBranch        *b_patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_obj;   //!
   TBranch        *b_patMETs_slimmedMETs__PAT_present;   //!
   TBranch        *b_patMETs_slimmedMETs__PAT_obj;   //!
   TBranch        *b_patMETs_slimmedMETsNoHF__PAT_present;   //!
   TBranch        *b_patMETs_slimmedMETsNoHF__PAT_obj;   //!
   TBranch        *b_patMETs_slimmedMETsPuppi__PAT_present;   //!
   TBranch        *b_patMETs_slimmedMETsPuppi__PAT_obj;   //!
   TBranch        *b_patMuons_slimmedMuons__PAT_present;   //!
   TBranch        *b_patMuons_slimmedMuons__PAT_obj;   //!
   TBranch        *b_patPackedCandidates_lostTracks__PAT_present;   //!
   TBranch        *b_patPackedCandidates_lostTracks__PAT_obj;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_present;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPt_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedEta_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPhi_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedM_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDxy_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDz_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDPhi_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDEta_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDTrkPt_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydxy;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydz;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dzdz;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dlambdadz;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidxy;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dptdpt;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__detadeta;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidphi;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweight_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweightNoLepDiff_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_rawCaloFraction_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_hcalFraction_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedTime_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedTimeError_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_isIsolatedChargedHadron_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_pdgId_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_qualityFlags_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_pvRefProd__product_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_pvRefKey_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedHits_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_packedLayers_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_normalizedChi2_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_covarianceVersion_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_covarianceSchema_;   //!
   TBranch        *b_patPackedCandidates_packedPFCandidates__PAT_obj_firstHit_;   //!
   TBranch        *b_patPackedCandidates_lostTracks_eleTracks_PAT_present;   //!
   TBranch        *b_patPackedCandidates_lostTracks_eleTracks_PAT_obj;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_present;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_packedPt_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_packedY_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_packedPhi_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_packedM_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fX;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fY;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fZ;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_dxy_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_dz_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_dphi_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_pdgId_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_charge_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_mother__product_;   //!
   TBranch        *b_patPackedGenParticles_packedGenParticles__PAT_obj_statusFlags__flags_;   //!
   TBranch        *b_patPhotons_slimmedOOTPhotons__PAT_present;   //!
   TBranch        *b_patPhotons_slimmedOOTPhotons__PAT_obj;   //!
   TBranch        *b_patPhotons_slimmedPhotons__PAT_present;   //!
   TBranch        *b_patPhotons_slimmedPhotons__PAT_obj;   //!
   TBranch        *b_patTaus_slimmedTaus__PAT_present;   //!
   TBranch        *b_patTaus_slimmedTaus__PAT_obj;   //!
   TBranch        *b_patTaus_slimmedTausBoosted__PAT_present;   //!
   TBranch        *b_patTaus_slimmedTausBoosted__PAT_obj;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_present;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fX;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fY;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fZ;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPt;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fEta;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPhi;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fM;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_qx3_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_pdgId_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_status_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_collection_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_triggerObjectTypes_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabels_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabelIndices_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathNames_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathIndices_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathLastFilterAccepted_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathL3FilterAccepted_;   //!
   TBranch        *b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_psetId__hash_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_present;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_obj;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_present;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_energy_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergy_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergyUncertainty_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fX;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fY;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fZ;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_caloID__detectors_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_hitsAndFractions_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_algoID_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_seedId__id_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_flags_;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_present;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_obj;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_present;   //!
   TBranch        *b_recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_obj;   //!
   TBranch        *b_recoCaloJets_slimmedCaloJets__PAT_present;   //!
   TBranch        *b_recoCaloJets_slimmedCaloJets__PAT_obj;   //!
   TBranch        *b_recoConversions_reducedEgamma_reducedConversions_PAT_present;   //!
   TBranch        *b_recoConversions_reducedEgamma_reducedConversions_PAT_obj;   //!
   TBranch        *b_recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_present;   //!
   TBranch        *b_recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_obj;   //!
   TBranch        *b_recoDeDxHitInfos_isolatedTracks__PAT_present;   //!
   TBranch        *b_recoDeDxHitInfos_isolatedTracks__PAT_obj;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_present;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fX;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fY;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fZ;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fM;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_qx3_;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_pdgId_;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_state_status_;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_dau;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_mJetArea;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_mPileupEnergy;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_mPassNumber;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_EmEnergy;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_HadEnergy;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_InvisibleEnergy;   //!
   TBranch        *b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_AuxiliaryEnergy;   //!
   TBranch        *b_recoGenJets_slimmedGenJetsAK8__PAT_present;   //!
   TBranch        *b_recoGenJets_slimmedGenJetsAK8__PAT_obj;   //!
   TBranch        *b_recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_present;   //!
   TBranch        *b_recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_obj;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_present;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fX;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fY;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fZ;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPt;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fEta;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPhi;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fM;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_qx3_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_pdgId_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_status_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__product_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__keys_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__product_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__keys_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_collisionId_;   //!
   TBranch        *b_recoGenParticles_prunedGenParticles__PAT_obj_statusFlags__flags_;   //!
   TBranch        *b_recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_present;   //!
   TBranch        *b_recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_obj;   //!
   TBranch        *b_recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_present;   //!
   TBranch        *b_recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_obj;   //!
   TBranch        *b_recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_present;   //!
   TBranch        *b_recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_obj;   //!
   TBranch        *b_recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_present;   //!
   TBranch        *b_recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_obj;   //!
   TBranch        *b_recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_present;   //!
   TBranch        *b_recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_obj;   //!
   TBranch        *b_recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_present;   //!
   TBranch        *b_recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_obj;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_present;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_chi2_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_ndof_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fX;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fY;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fZ;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_covariance_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_tracks_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_refittedTracks_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_weights_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_validity_;   //!
   TBranch        *b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_time_;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_present;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_obj;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_present;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_obj;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_present;   //!
   TBranch        *b_recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_obj;   //!
   TBranch        *b_Strings_slimmedPatTrigger_filterLabels_PAT_present;   //!
   TBranch        *b_Strings_slimmedPatTrigger_filterLabels_PAT_obj;   //!
   TBranch        *b_uint_bunchSpacingProducer__PAT_present;   //!
   TBranch        *b_uint_bunchSpacingProducer__PAT_obj;   //!

   NanoAOD.h(TTree *tree=0);
   virtual ~NanoAOD.h();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NanoAOD.h_cxx
NanoAOD.h::NanoAOD.h(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/user/b/bimahaku/BstoMuMu_RECO_miniAOD_Files/BstoMuMuFile-RunIIAutumn18MiniAOD_1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/user/b/bimahaku/BstoMuMu_RECO_miniAOD_Files/BstoMuMuFile-RunIIAutumn18MiniAOD_1.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

NanoAOD.h::~NanoAOD.h()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NanoAOD.h::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NanoAOD.h::LoadTree(Long64_t entry)
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

void NanoAOD.h::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   EventAuxiliary = 0;
   EventProductProvenance = 0;
   EventSelections = 0;
   BranchListIndexes = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventAuxiliary", &EventAuxiliary, &b_EventAuxiliary);
   fChain->SetBranchAddress("EventProductProvenance", &EventProductProvenance, &b_EventProductProvenance);
   fChain->SetBranchAddress("EventSelections", &EventSelections, &b_EventSelections);
   fChain->SetBranchAddress("BranchListIndexes", &BranchListIndexes, &b_BranchListIndexes);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__SIM.present", &GenEventInfoProduct_generator__SIM_present, &b_GenEventInfoProduct_generator__SIM_present);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__SIM.obj", &GenEventInfoProduct_generator__SIM_obj, &b_GenEventInfoProduct_generator__SIM_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__SIM.present", &edmTriggerResults_TriggerResults__SIM_present, &b_edmTriggerResults_TriggerResults__SIM_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__SIM.obj", &edmTriggerResults_TriggerResults__SIM_obj, &b_edmTriggerResults_TriggerResults__SIM_obj);
   fChain->SetBranchAddress("floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT.present", &floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_present, &b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_present);
   fChain->SetBranchAddress("floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT.obj", &floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_obj, &b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_HLT_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__HLT.present", &edmTriggerResults_TriggerResults__HLT_present, &b_edmTriggerResults_TriggerResults__HLT_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__HLT.obj", &edmTriggerResults_TriggerResults__HLT_obj, &b_edmTriggerResults_TriggerResults__HLT_obj);
   fChain->SetBranchAddress("float_genParticles_t0_HLT.present", &float_genParticles_t0_HLT_present, &b_float_genParticles_t0_HLT_present);
   fChain->SetBranchAddress("float_genParticles_t0_HLT.obj", &float_genParticles_t0_HLT_obj, &b_float_genParticles_t0_HLT_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__HLT.present", &recoGenMETs_genMetTrue__HLT_present, &b_recoGenMETs_genMetTrue__HLT_present);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__HLT.obj", &recoGenMETs_genMetTrue__HLT_obj, &b_recoGenMETs_genMetTrue__HLT_obj);
   fChain->SetBranchAddress("recoGenParticles_genPUProtons_genPUProtons_HLT.present", &recoGenParticles_genPUProtons_genPUProtons_HLT_present, &b_recoGenParticles_genPUProtons_genPUProtons_HLT_present);
   fChain->SetBranchAddress("recoGenParticles_genPUProtons_genPUProtons_HLT.obj", &recoGenParticles_genPUProtons_genPUProtons_HLT_obj, &b_recoGenParticles_genPUProtons_genPUProtons_HLT_obj);
   fChain->SetBranchAddress("GlobalAlgBlkBXVector_gtStage2Digis__RECO.present", &GlobalAlgBlkBXVector_gtStage2Digis__RECO_present, &b_GlobalAlgBlkBXVector_gtStage2Digis__RECO_present);
   fChain->SetBranchAddress("GlobalAlgBlkBXVector_gtStage2Digis__RECO.obj", &GlobalAlgBlkBXVector_gtStage2Digis__RECO_obj, &b_GlobalAlgBlkBXVector_gtStage2Digis__RECO_obj);
   fChain->SetBranchAddress("GlobalExtBlkBXVector_gtStage2Digis__RECO.present", &GlobalExtBlkBXVector_gtStage2Digis__RECO_present, &b_GlobalExtBlkBXVector_gtStage2Digis__RECO_present);
   fChain->SetBranchAddress("GlobalExtBlkBXVector_gtStage2Digis__RECO.obj", &GlobalExtBlkBXVector_gtStage2Digis__RECO_obj, &b_GlobalExtBlkBXVector_gtStage2Digis__RECO_obj);
   fChain->SetBranchAddress("l1tEGammaBXVector_caloStage2Digis_EGamma_RECO.present", &l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_present, &b_l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_present);
   fChain->SetBranchAddress("l1tEGammaBXVector_caloStage2Digis_EGamma_RECO.obj", &l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_obj, &b_l1tEGammaBXVector_caloStage2Digis_EGamma_RECO_obj);
   fChain->SetBranchAddress("l1tEtSumBXVector_caloStage2Digis_EtSum_RECO.present", &l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_present, &b_l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_present);
   fChain->SetBranchAddress("l1tEtSumBXVector_caloStage2Digis_EtSum_RECO.obj", &l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_obj, &b_l1tEtSumBXVector_caloStage2Digis_EtSum_RECO_obj);
   fChain->SetBranchAddress("l1tJetBXVector_caloStage2Digis_Jet_RECO.present", &l1tJetBXVector_caloStage2Digis_Jet_RECO_present, &b_l1tJetBXVector_caloStage2Digis_Jet_RECO_present);
   fChain->SetBranchAddress("l1tJetBXVector_caloStage2Digis_Jet_RECO.obj", &l1tJetBXVector_caloStage2Digis_Jet_RECO_obj, &b_l1tJetBXVector_caloStage2Digis_Jet_RECO_obj);
   fChain->SetBranchAddress("l1tMuonBXVector_gmtStage2Digis_Muon_RECO.present", &l1tMuonBXVector_gmtStage2Digis_Muon_RECO_present, &b_l1tMuonBXVector_gmtStage2Digis_Muon_RECO_present);
   fChain->SetBranchAddress("l1tMuonBXVector_gmtStage2Digis_Muon_RECO.obj", &l1tMuonBXVector_gmtStage2Digis_Muon_RECO_obj, &b_l1tMuonBXVector_gmtStage2Digis_Muon_RECO_obj);
   fChain->SetBranchAddress("l1tTauBXVector_caloStage2Digis_Tau_RECO.present", &l1tTauBXVector_caloStage2Digis_Tau_RECO_present, &b_l1tTauBXVector_caloStage2Digis_Tau_RECO_present);
   fChain->SetBranchAddress("l1tTauBXVector_caloStage2Digis_Tau_RECO.obj", &l1tTauBXVector_caloStage2Digis_Tau_RECO_obj, &b_l1tTauBXVector_caloStage2Digis_Tau_RECO_obj);
   fChain->SetBranchAddress("HcalNoiseSummary_hcalnoise__RECO.present", &HcalNoiseSummary_hcalnoise__RECO_present, &b_HcalNoiseSummary_hcalnoise__RECO_present);
   fChain->SetBranchAddress("HcalNoiseSummary_hcalnoise__RECO.obj", &HcalNoiseSummary_hcalnoise__RECO_obj, &b_HcalNoiseSummary_hcalnoise__RECO_obj);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_gtDigis__RECO.present", &L1GlobalTriggerReadoutRecord_gtDigis__RECO_present, &b_L1GlobalTriggerReadoutRecord_gtDigis__RECO_present);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_gtDigis__RECO.obj", &L1GlobalTriggerReadoutRecord_gtDigis__RECO_obj, &b_L1GlobalTriggerReadoutRecord_gtDigis__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoAll__RECO.present", &double_fixedGridRhoAll__RECO_present, &b_double_fixedGridRhoAll__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoAll__RECO.obj", &double_fixedGridRhoAll__RECO_obj, &b_double_fixedGridRhoAll__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAll__RECO.present", &double_fixedGridRhoFastjetAll__RECO_present, &b_double_fixedGridRhoFastjetAll__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAll__RECO.obj", &double_fixedGridRhoFastjetAll__RECO_obj, &b_double_fixedGridRhoFastjetAll__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAllCalo__RECO.present", &double_fixedGridRhoFastjetAllCalo__RECO_present, &b_double_fixedGridRhoFastjetAllCalo__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAllCalo__RECO.obj", &double_fixedGridRhoFastjetAllCalo__RECO_obj, &b_double_fixedGridRhoFastjetAllCalo__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentral__RECO.present", &double_fixedGridRhoFastjetCentral__RECO_present, &b_double_fixedGridRhoFastjetCentral__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentral__RECO.obj", &double_fixedGridRhoFastjetCentral__RECO_obj, &b_double_fixedGridRhoFastjetCentral__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralCalo__RECO.present", &double_fixedGridRhoFastjetCentralCalo__RECO_present, &b_double_fixedGridRhoFastjetCentralCalo__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralCalo__RECO.obj", &double_fixedGridRhoFastjetCentralCalo__RECO_obj, &b_double_fixedGridRhoFastjetCentralCalo__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralChargedPileUp__RECO.present", &double_fixedGridRhoFastjetCentralChargedPileUp__RECO_present, &b_double_fixedGridRhoFastjetCentralChargedPileUp__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralChargedPileUp__RECO.obj", &double_fixedGridRhoFastjetCentralChargedPileUp__RECO_obj, &b_double_fixedGridRhoFastjetCentralChargedPileUp__RECO_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralNeutral__RECO.present", &double_fixedGridRhoFastjetCentralNeutral__RECO_present, &b_double_fixedGridRhoFastjetCentralNeutral__RECO_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralNeutral__RECO.obj", &double_fixedGridRhoFastjetCentralNeutral__RECO_obj, &b_double_fixedGridRhoFastjetCentralNeutral__RECO_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__RECO.present", &edmTriggerResults_TriggerResults__RECO_present, &b_edmTriggerResults_TriggerResults__RECO_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__RECO.obj", &edmTriggerResults_TriggerResults__RECO_obj, &b_edmTriggerResults_TriggerResults__RECO_obj);
   fChain->SetBranchAddress("recoBeamHaloSummary_BeamHaloSummary__RECO.present", &recoBeamHaloSummary_BeamHaloSummary__RECO_present, &b_recoBeamHaloSummary_BeamHaloSummary__RECO_present);
   fChain->SetBranchAddress("recoBeamHaloSummary_BeamHaloSummary__RECO.obj", &recoBeamHaloSummary_BeamHaloSummary__RECO_obj, &b_recoBeamHaloSummary_BeamHaloSummary__RECO_obj);
   fChain->SetBranchAddress("recoBeamSpot_offlineBeamSpot__RECO.present", &recoBeamSpot_offlineBeamSpot__RECO_present, &b_recoBeamSpot_offlineBeamSpot__RECO_present);
   fChain->SetBranchAddress("recoBeamSpot_offlineBeamSpot__RECO.obj", &recoBeamSpot_offlineBeamSpot__RECO_obj, &b_recoBeamSpot_offlineBeamSpot__RECO_obj);
   fChain->SetBranchAddress("recoCSCHaloData_CSCHaloData__RECO.present", &recoCSCHaloData_CSCHaloData__RECO_present, &b_recoCSCHaloData_CSCHaloData__RECO_present);
   fChain->SetBranchAddress("recoCSCHaloData_CSCHaloData__RECO.obj", &recoCSCHaloData_CSCHaloData__RECO_obj, &b_recoCSCHaloData_CSCHaloData__RECO_obj);
   fChain->SetBranchAddress("CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO.present", &CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_present, &b_CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_present);
   fChain->SetBranchAddress("CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO.obj", &CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_obj, &b_CTPPSLocalTrackLites_ctppsLocalTrackLiteProducer__RECO_obj);
   fChain->SetBranchAddress("LumiScalerss_scalersRawToDigi__RECO.present", &LumiScalerss_scalersRawToDigi__RECO_present, &b_LumiScalerss_scalersRawToDigi__RECO_present);
   fChain->SetBranchAddress("LumiScalerss_scalersRawToDigi__RECO.obj", &LumiScalerss_scalersRawToDigi__RECO_obj, &b_LumiScalerss_scalersRawToDigi__RECO_obj);
   fChain->SetBranchAddress("l1extraL1EmParticles_l1extraParticles_Isolated_RECO.present", &l1extraL1EmParticles_l1extraParticles_Isolated_RECO_present, &b_l1extraL1EmParticles_l1extraParticles_Isolated_RECO_present);
   fChain->SetBranchAddress("l1extraL1EmParticles_l1extraParticles_Isolated_RECO.obj", &l1extraL1EmParticles_l1extraParticles_Isolated_RECO_obj, &b_l1extraL1EmParticles_l1extraParticles_Isolated_RECO_obj);
   fChain->SetBranchAddress("l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO.present", &l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_present, &b_l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_present);
   fChain->SetBranchAddress("l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO.obj", &l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_obj, &b_l1extraL1EmParticles_l1extraParticles_NonIsolated_RECO_obj);
   fChain->SetBranchAddress("l1extraL1EtMissParticles_l1extraParticles_MET_RECO.present", &l1extraL1EtMissParticles_l1extraParticles_MET_RECO_present, &b_l1extraL1EtMissParticles_l1extraParticles_MET_RECO_present);
   fChain->SetBranchAddress("l1extraL1EtMissParticles_l1extraParticles_MET_RECO.obj", &l1extraL1EtMissParticles_l1extraParticles_MET_RECO_obj, &b_l1extraL1EtMissParticles_l1extraParticles_MET_RECO_obj);
   fChain->SetBranchAddress("l1extraL1EtMissParticles_l1extraParticles_MHT_RECO.present", &l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_present, &b_l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_present);
   fChain->SetBranchAddress("l1extraL1EtMissParticles_l1extraParticles_MHT_RECO.obj", &l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_obj, &b_l1extraL1EtMissParticles_l1extraParticles_MHT_RECO_obj);
   fChain->SetBranchAddress("l1extraL1HFRingss_l1extraParticles__RECO.present", &l1extraL1HFRingss_l1extraParticles__RECO_present, &b_l1extraL1HFRingss_l1extraParticles__RECO_present);
   fChain->SetBranchAddress("l1extraL1HFRingss_l1extraParticles__RECO.obj", &l1extraL1HFRingss_l1extraParticles__RECO_obj, &b_l1extraL1HFRingss_l1extraParticles__RECO_obj);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Central_RECO.present", &l1extraL1JetParticles_l1extraParticles_Central_RECO_present, &b_l1extraL1JetParticles_l1extraParticles_Central_RECO_present);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Central_RECO.obj", &l1extraL1JetParticles_l1extraParticles_Central_RECO_obj, &b_l1extraL1JetParticles_l1extraParticles_Central_RECO_obj);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Forward_RECO.present", &l1extraL1JetParticles_l1extraParticles_Forward_RECO_present, &b_l1extraL1JetParticles_l1extraParticles_Forward_RECO_present);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Forward_RECO.obj", &l1extraL1JetParticles_l1extraParticles_Forward_RECO_obj, &b_l1extraL1JetParticles_l1extraParticles_Forward_RECO_obj);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_IsoTau_RECO.present", &l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_present, &b_l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_present);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_IsoTau_RECO.obj", &l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_obj, &b_l1extraL1JetParticles_l1extraParticles_IsoTau_RECO_obj);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Tau_RECO.present", &l1extraL1JetParticles_l1extraParticles_Tau_RECO_present, &b_l1extraL1JetParticles_l1extraParticles_Tau_RECO_present);
   fChain->SetBranchAddress("l1extraL1JetParticles_l1extraParticles_Tau_RECO.obj", &l1extraL1JetParticles_l1extraParticles_Tau_RECO_obj, &b_l1extraL1JetParticles_l1extraParticles_Tau_RECO_obj);
   fChain->SetBranchAddress("l1extraL1MuonParticles_l1extraParticles__RECO.present", &l1extraL1MuonParticles_l1extraParticles__RECO_present, &b_l1extraL1MuonParticles_l1extraParticles__RECO_present);
   fChain->SetBranchAddress("l1extraL1MuonParticles_l1extraParticles__RECO.obj", &l1extraL1MuonParticles_l1extraParticles__RECO_obj, &b_l1extraL1MuonParticles_l1extraParticles__RECO_obj);
   fChain->SetBranchAddress("recoTracks_displacedStandAloneMuons__RECO.present", &recoTracks_displacedStandAloneMuons__RECO_present, &b_recoTracks_displacedStandAloneMuons__RECO_present);
   fChain->SetBranchAddress("recoTracks_displacedStandAloneMuons__RECO.obj", &recoTracks_displacedStandAloneMuons__RECO_obj, &b_recoTracks_displacedStandAloneMuons__RECO_obj);
   fChain->SetBranchAddress("recoDeDxHitInfosedmAssociation_isolatedTracks__PAT.present", &recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_present, &b_recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_present);
   fChain->SetBranchAddress("recoDeDxHitInfosedmAssociation_isolatedTracks__PAT.obj", &recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_obj, &b_recoDeDxHitInfosedmAssociation_isolatedTracks__PAT_obj);
   fChain->SetBranchAddress("recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT.present", &recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_present, &b_recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_present);
   fChain->SetBranchAddress("recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT.obj", &recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_obj, &b_recoBaseTagInfosOwned_slimmedJetsPuppi_tagInfos_PAT_obj);
   fChain->SetBranchAddress("CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT.present", &CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_present, &b_CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_present);
   fChain->SetBranchAddress("CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT.obj", &CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_obj, &b_CSCDetIdCSCSegmentsOwnedRangeMap_slimmedMuons__PAT_obj);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT.present", &DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_present, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_present);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT.obj", &DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_obj, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_slimmedMuons__PAT_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.present", &EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_present, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj", &EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj.id_.id_", EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_id__id_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_id__id_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj.energy_", EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_energy_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_energy_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj.time_", EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_time_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_time_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj.flagBits_", EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_flagBits_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_flagBits_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT.obj.obj.extra_", EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_extra_, &b_EcalRecHitsSorted_reducedEgamma_reducedEBRecHits_PAT_obj_obj_extra_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.present", &EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_present, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj", &EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj.id_.id_", EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_id__id_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_id__id_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj.energy_", EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_energy_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_energy_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj.time_", EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_time_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_time_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj.flagBits_", EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_flagBits_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_flagBits_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT.obj.obj.extra_", EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_extra_, &b_EcalRecHitsSorted_reducedEgamma_reducedEERecHits_PAT_obj_obj_extra_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.present", &EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_present, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj", &EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj.id_.id_", EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_id__id_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_id__id_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj.energy_", EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_energy_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_energy_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj.time_", EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_time_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_time_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj.flagBits_", EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_flagBits_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_flagBits_);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT.obj.obj.extra_", EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_extra_, &b_EcalRecHitsSorted_reducedEgamma_reducedESRecHits_PAT_obj_obj_extra_);
   fChain->SetBranchAddress("HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT.present", &HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_present, &b_HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_present);
   fChain->SetBranchAddress("HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT.obj", &HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_obj, &b_HBHERecHitsSorted_reducedEgamma_reducedHBHEHits_PAT_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__PAT.present", &edmTriggerResults_TriggerResults__PAT_present, &b_edmTriggerResults_TriggerResults__PAT_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__PAT.obj", &edmTriggerResults_TriggerResults__PAT_obj, &b_edmTriggerResults_TriggerResults__PAT_obj);
   fChain->SetBranchAddress("floatedmValueMap_offlineSlimmedPrimaryVertices__PAT.present", &floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_present, &b_floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_present);
   fChain->SetBranchAddress("floatedmValueMap_offlineSlimmedPrimaryVertices__PAT.obj", &floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_obj, &b_floatedmValueMap_offlineSlimmedPrimaryVertices__PAT_obj);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger__PAT.present", &patPackedTriggerPrescales_patTrigger__PAT_present, &b_patPackedTriggerPrescales_patTrigger__PAT_present);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger__PAT.obj", &patPackedTriggerPrescales_patTrigger__PAT_obj, &b_patPackedTriggerPrescales_patTrigger__PAT_obj);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger_l1max_PAT.present", &patPackedTriggerPrescales_patTrigger_l1max_PAT_present, &b_patPackedTriggerPrescales_patTrigger_l1max_PAT_present);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger_l1max_PAT.obj", &patPackedTriggerPrescales_patTrigger_l1max_PAT_obj, &b_patPackedTriggerPrescales_patTrigger_l1max_PAT_obj);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger_l1min_PAT.present", &patPackedTriggerPrescales_patTrigger_l1min_PAT_present, &b_patPackedTriggerPrescales_patTrigger_l1min_PAT_present);
   fChain->SetBranchAddress("patPackedTriggerPrescales_patTrigger_l1min_PAT.obj", &patPackedTriggerPrescales_patTrigger_l1min_PAT_obj, &b_patPackedTriggerPrescales_patTrigger_l1min_PAT_obj);
   fChain->SetBranchAddress("recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT.present", &recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_present, &b_recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_present);
   fChain->SetBranchAddress("recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT.obj", &recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_obj, &b_recoJetFlavourInfoMatchingCollection_slimmedGenJetsFlavourInfos__PAT_obj);
   fChain->SetBranchAddress("PileupSummaryInfos_slimmedAddPileupInfo__PAT.present", &PileupSummaryInfos_slimmedAddPileupInfo__PAT_present, &b_PileupSummaryInfos_slimmedAddPileupInfo__PAT_present);
   fChain->SetBranchAddress("PileupSummaryInfos_slimmedAddPileupInfo__PAT.obj", &PileupSummaryInfos_slimmedAddPileupInfo__PAT_obj, &b_PileupSummaryInfos_slimmedAddPileupInfo__PAT_obj);
   fChain->SetBranchAddress("patCompositeCandidates_oniaPhotonCandidates_conversions_PAT.present", &patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_present, &b_patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_present);
   fChain->SetBranchAddress("patCompositeCandidates_oniaPhotonCandidates_conversions_PAT.obj", &patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_obj, &b_patCompositeCandidates_oniaPhotonCandidates_conversions_PAT_obj);
   fChain->SetBranchAddress("patElectrons_slimmedElectrons__PAT.present", &patElectrons_slimmedElectrons__PAT_present, &b_patElectrons_slimmedElectrons__PAT_present);
   fChain->SetBranchAddress("patElectrons_slimmedElectrons__PAT.obj", &patElectrons_slimmedElectrons__PAT_obj, &b_patElectrons_slimmedElectrons__PAT_obj);
   fChain->SetBranchAddress("patIsolatedTracks_isolatedTracks__PAT.present", &patIsolatedTracks_isolatedTracks__PAT_present, &b_patIsolatedTracks_isolatedTracks__PAT_present);
   fChain->SetBranchAddress("patIsolatedTracks_isolatedTracks__PAT.obj", &patIsolatedTracks_isolatedTracks__PAT_obj, &b_patIsolatedTracks_isolatedTracks__PAT_obj);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.present", &patJets_slimmedJets__PAT_present, &b_patJets_slimmedJets__PAT_present);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj", &patJets_slimmedJets__PAT_obj_, &b_patJets_slimmedJets__PAT_obj_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.vertex_.fCoordinates.fX", patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fX, &b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.vertex_.fCoordinates.fY", patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fY, &b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.vertex_.fCoordinates.fZ", patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fZ, &b_patJets_slimmedJets__PAT_obj_m_state_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.p4Polar_.fCoordinates.fPt", patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt, &b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.p4Polar_.fCoordinates.fEta", patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta, &b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.p4Polar_.fCoordinates.fPhi", patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi, &b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.p4Polar_.fCoordinates.fM", patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fM, &b_patJets_slimmedJets__PAT_obj_m_state_p4Polar__fCoordinates_fM);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.qx3_", patJets_slimmedJets__PAT_obj_m_state_qx3_, &b_patJets_slimmedJets__PAT_obj_m_state_qx3_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.pdgId_", patJets_slimmedJets__PAT_obj_m_state_pdgId_, &b_patJets_slimmedJets__PAT_obj_m_state_pdgId_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.m_state.status_", patJets_slimmedJets__PAT_obj_m_state_status_, &b_patJets_slimmedJets__PAT_obj_m_state_status_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.dau", patJets_slimmedJets__PAT_obj_dau, &b_patJets_slimmedJets__PAT_obj_dau);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.mJetArea", patJets_slimmedJets__PAT_obj_mJetArea, &b_patJets_slimmedJets__PAT_obj_mJetArea);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.mPileupEnergy", patJets_slimmedJets__PAT_obj_mPileupEnergy, &b_patJets_slimmedJets__PAT_obj_mPileupEnergy);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.mPassNumber", patJets_slimmedJets__PAT_obj_mPassNumber, &b_patJets_slimmedJets__PAT_obj_mPassNumber);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.refToOrig_.core_", patJets_slimmedJets__PAT_obj_refToOrig__core_, &b_patJets_slimmedJets__PAT_obj_refToOrig__core_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.refToOrig_.key_", patJets_slimmedJets__PAT_obj_refToOrig__key_, &b_patJets_slimmedJets__PAT_obj_refToOrig__key_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.triggerObjectMatchesEmbedded_", patJets_slimmedJets__PAT_obj_triggerObjectMatchesEmbedded_, &b_patJets_slimmedJets__PAT_obj_triggerObjectMatchesEmbedded_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.efficiencyValues_", patJets_slimmedJets__PAT_obj_efficiencyValues_, &b_patJets_slimmedJets__PAT_obj_efficiencyValues_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.efficiencyNames_", patJets_slimmedJets__PAT_obj_efficiencyNames_, &b_patJets_slimmedJets__PAT_obj_efficiencyNames_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genParticleRef_", patJets_slimmedJets__PAT_obj_genParticleRef_, &b_patJets_slimmedJets__PAT_obj_genParticleRef_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genParticleEmbedded_", patJets_slimmedJets__PAT_obj_genParticleEmbedded_, &b_patJets_slimmedJets__PAT_obj_genParticleEmbedded_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.overlapLabels_", patJets_slimmedJets__PAT_obj_overlapLabels_, &b_patJets_slimmedJets__PAT_obj_overlapLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.overlapItems_", patJets_slimmedJets__PAT_obj_overlapItems_, &b_patJets_slimmedJets__PAT_obj_overlapItems_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userDataLabels_", patJets_slimmedJets__PAT_obj_userDataLabels_, &b_patJets_slimmedJets__PAT_obj_userDataLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userDataObjects_.data_", patJets_slimmedJets__PAT_obj_userDataObjects__data_, &b_patJets_slimmedJets__PAT_obj_userDataObjects__data_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userFloatLabels_", patJets_slimmedJets__PAT_obj_userFloatLabels_, &b_patJets_slimmedJets__PAT_obj_userFloatLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userFloats_", patJets_slimmedJets__PAT_obj_userFloats_, &b_patJets_slimmedJets__PAT_obj_userFloats_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userIntLabels_", patJets_slimmedJets__PAT_obj_userIntLabels_, &b_patJets_slimmedJets__PAT_obj_userIntLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userInts_", patJets_slimmedJets__PAT_obj_userInts_, &b_patJets_slimmedJets__PAT_obj_userInts_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userCandLabels_", patJets_slimmedJets__PAT_obj_userCandLabels_, &b_patJets_slimmedJets__PAT_obj_userCandLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.userCands_", patJets_slimmedJets__PAT_obj_userCands_, &b_patJets_slimmedJets__PAT_obj_userCands_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.kinResolutions_", patJets_slimmedJets__PAT_obj_kinResolutions_, &b_patJets_slimmedJets__PAT_obj_kinResolutions_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.kinResolutionLabels_", patJets_slimmedJets__PAT_obj_kinResolutionLabels_, &b_patJets_slimmedJets__PAT_obj_kinResolutionLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.embeddedCaloTowers_", patJets_slimmedJets__PAT_obj_embeddedCaloTowers_, &b_patJets_slimmedJets__PAT_obj_embeddedCaloTowers_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.caloTowers_.obj", patJets_slimmedJets__PAT_obj_caloTowers__obj, &b_patJets_slimmedJets__PAT_obj_caloTowers__obj);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.caloTowersFwdPtr_", patJets_slimmedJets__PAT_obj_caloTowersFwdPtr_, &b_patJets_slimmedJets__PAT_obj_caloTowersFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.embeddedPFCandidates_", patJets_slimmedJets__PAT_obj_embeddedPFCandidates_, &b_patJets_slimmedJets__PAT_obj_embeddedPFCandidates_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.pfCandidates_", patJets_slimmedJets__PAT_obj_pfCandidates_, &b_patJets_slimmedJets__PAT_obj_pfCandidates_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.pfCandidatesFwdPtr_", patJets_slimmedJets__PAT_obj_pfCandidatesFwdPtr_, &b_patJets_slimmedJets__PAT_obj_pfCandidatesFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.subjetCollections_", patJets_slimmedJets__PAT_obj_subjetCollections_, &b_patJets_slimmedJets__PAT_obj_subjetCollections_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.subjetLabels_", patJets_slimmedJets__PAT_obj_subjetLabels_, &b_patJets_slimmedJets__PAT_obj_subjetLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genJet_", patJets_slimmedJets__PAT_obj_genJet_, &b_patJets_slimmedJets__PAT_obj_genJet_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genJetRef_.refVector_.product_", patJets_slimmedJets__PAT_obj_genJetRef__refVector__product_, &b_patJets_slimmedJets__PAT_obj_genJetRef__refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genJetRef_.refVector_.keys_", patJets_slimmedJets__PAT_obj_genJetRef__refVector__keys_, &b_patJets_slimmedJets__PAT_obj_genJetRef__refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genJetFwdRef_.ref_.product_", patJets_slimmedJets__PAT_obj_genJetFwdRef__ref__product_, &b_patJets_slimmedJets__PAT_obj_genJetFwdRef__ref__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.genJetFwdRef_.backRef_.product_", patJets_slimmedJets__PAT_obj_genJetFwdRef__backRef__product_, &b_patJets_slimmedJets__PAT_obj_genJetFwdRef__backRef__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_bHadrons.refVector_.product_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_bHadrons.refVector_.keys_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_cHadrons.refVector_.product_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_cHadrons.refVector_.keys_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_partons.refVector_.product_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__product_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_partons.refVector_.keys_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_leptons.refVector_.product_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_leptons.refVector_.keys_", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_hadronFlavour", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_hadronFlavour, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_hadronFlavour);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetFlavourInfo_.m_partonFlavour", patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partonFlavour, &b_patJets_slimmedJets__PAT_obj_jetFlavourInfo__m_partonFlavour);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jec_", patJets_slimmedJets__PAT_obj_jec_, &b_patJets_slimmedJets__PAT_obj_jec_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.currentJECSet_", patJets_slimmedJets__PAT_obj_currentJECSet_, &b_patJets_slimmedJets__PAT_obj_currentJECSet_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.currentJECLevel_", patJets_slimmedJets__PAT_obj_currentJECLevel_, &b_patJets_slimmedJets__PAT_obj_currentJECLevel_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.currentJECFlavor_", patJets_slimmedJets__PAT_obj_currentJECFlavor_, &b_patJets_slimmedJets__PAT_obj_currentJECFlavor_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.pairDiscriVector_", patJets_slimmedJets__PAT_obj_pairDiscriVector_, &b_patJets_slimmedJets__PAT_obj_pairDiscriVector_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.tagInfoLabels_", patJets_slimmedJets__PAT_obj_tagInfoLabels_, &b_patJets_slimmedJets__PAT_obj_tagInfoLabels_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.tagInfos_.data_", patJets_slimmedJets__PAT_obj_tagInfos__data_, &b_patJets_slimmedJets__PAT_obj_tagInfos__data_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.tagInfosFwdPtr_", patJets_slimmedJets__PAT_obj_tagInfosFwdPtr_, &b_patJets_slimmedJets__PAT_obj_tagInfosFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetCharge_", patJets_slimmedJets__PAT_obj_jetCharge_, &b_patJets_slimmedJets__PAT_obj_jetCharge_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.associatedTracks_.refVector_.product_", patJets_slimmedJets__PAT_obj_associatedTracks__refVector__product_, &b_patJets_slimmedJets__PAT_obj_associatedTracks__refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.associatedTracks_.refVector_.keys_", patJets_slimmedJets__PAT_obj_associatedTracks__refVector__keys_, &b_patJets_slimmedJets__PAT_obj_associatedTracks__refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.specificCalo_", patJets_slimmedJets__PAT_obj_specificCalo_, &b_patJets_slimmedJets__PAT_obj_specificCalo_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.specificJPT_", patJets_slimmedJets__PAT_obj_specificJPT_, &b_patJets_slimmedJets__PAT_obj_specificJPT_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.specificPF_", patJets_slimmedJets__PAT_obj_specificPF_, &b_patJets_slimmedJets__PAT_obj_specificPF_);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fHPD", patJets_slimmedJets__PAT_obj_jetID__fHPD, &b_patJets_slimmedJets__PAT_obj_jetID__fHPD);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fRBX", patJets_slimmedJets__PAT_obj_jetID__fRBX, &b_patJets_slimmedJets__PAT_obj_jetID__fRBX);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.n90Hits", patJets_slimmedJets__PAT_obj_jetID__n90Hits, &b_patJets_slimmedJets__PAT_obj_jetID__n90Hits);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fSubDetector1", patJets_slimmedJets__PAT_obj_jetID__fSubDetector1, &b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector1);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fSubDetector2", patJets_slimmedJets__PAT_obj_jetID__fSubDetector2, &b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector2);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fSubDetector3", patJets_slimmedJets__PAT_obj_jetID__fSubDetector3, &b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector3);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fSubDetector4", patJets_slimmedJets__PAT_obj_jetID__fSubDetector4, &b_patJets_slimmedJets__PAT_obj_jetID__fSubDetector4);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.restrictedEMF", patJets_slimmedJets__PAT_obj_jetID__restrictedEMF, &b_patJets_slimmedJets__PAT_obj_jetID__restrictedEMF);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.nHCALTowers", patJets_slimmedJets__PAT_obj_jetID__nHCALTowers, &b_patJets_slimmedJets__PAT_obj_jetID__nHCALTowers);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.nECALTowers", patJets_slimmedJets__PAT_obj_jetID__nECALTowers, &b_patJets_slimmedJets__PAT_obj_jetID__nECALTowers);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.approximatefHPD", patJets_slimmedJets__PAT_obj_jetID__approximatefHPD, &b_patJets_slimmedJets__PAT_obj_jetID__approximatefHPD);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.approximatefRBX", patJets_slimmedJets__PAT_obj_jetID__approximatefRBX, &b_patJets_slimmedJets__PAT_obj_jetID__approximatefRBX);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.hitsInN90", patJets_slimmedJets__PAT_obj_jetID__hitsInN90, &b_patJets_slimmedJets__PAT_obj_jetID__hitsInN90);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.numberOfHits2RPC", patJets_slimmedJets__PAT_obj_jetID__numberOfHits2RPC, &b_patJets_slimmedJets__PAT_obj_jetID__numberOfHits2RPC);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.numberOfHits3RPC", patJets_slimmedJets__PAT_obj_jetID__numberOfHits3RPC, &b_patJets_slimmedJets__PAT_obj_jetID__numberOfHits3RPC);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.numberOfHitsRPC", patJets_slimmedJets__PAT_obj_jetID__numberOfHitsRPC, &b_patJets_slimmedJets__PAT_obj_jetID__numberOfHitsRPC);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fEB", patJets_slimmedJets__PAT_obj_jetID__fEB, &b_patJets_slimmedJets__PAT_obj_jetID__fEB);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fEE", patJets_slimmedJets__PAT_obj_jetID__fEE, &b_patJets_slimmedJets__PAT_obj_jetID__fEE);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fHB", patJets_slimmedJets__PAT_obj_jetID__fHB, &b_patJets_slimmedJets__PAT_obj_jetID__fHB);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fHE", patJets_slimmedJets__PAT_obj_jetID__fHE, &b_patJets_slimmedJets__PAT_obj_jetID__fHE);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fHO", patJets_slimmedJets__PAT_obj_jetID__fHO, &b_patJets_slimmedJets__PAT_obj_jetID__fHO);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fLong", patJets_slimmedJets__PAT_obj_jetID__fLong, &b_patJets_slimmedJets__PAT_obj_jetID__fLong);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fShort", patJets_slimmedJets__PAT_obj_jetID__fShort, &b_patJets_slimmedJets__PAT_obj_jetID__fShort);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fLS", patJets_slimmedJets__PAT_obj_jetID__fLS, &b_patJets_slimmedJets__PAT_obj_jetID__fLS);
   fChain->SetBranchAddress("patJets_slimmedJets__PAT.obj.jetID_.fHFOOT", patJets_slimmedJets__PAT_obj_jetID__fHFOOT, &b_patJets_slimmedJets__PAT_obj_jetID__fHFOOT);
   fChain->SetBranchAddress("patJets_slimmedJetsAK8__PAT.present", &patJets_slimmedJetsAK8__PAT_present, &b_patJets_slimmedJetsAK8__PAT_present);
   fChain->SetBranchAddress("patJets_slimmedJetsAK8__PAT.obj", &patJets_slimmedJetsAK8__PAT_obj, &b_patJets_slimmedJetsAK8__PAT_obj);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.present", &patJets_slimmedJetsPuppi__PAT_present, &b_patJets_slimmedJetsPuppi__PAT_present);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj", &patJets_slimmedJetsPuppi__PAT_obj_, &b_patJets_slimmedJetsPuppi__PAT_obj_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.vertex_.fCoordinates.fX", patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fX, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.vertex_.fCoordinates.fY", patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fY, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.vertex_.fCoordinates.fZ", patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fZ, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.p4Polar_.fCoordinates.fPt", patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPt, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPt);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.p4Polar_.fCoordinates.fEta", patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fEta, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fEta);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.p4Polar_.fCoordinates.fPhi", patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPhi, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fPhi);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.p4Polar_.fCoordinates.fM", patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fM, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_p4Polar__fCoordinates_fM);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.qx3_", patJets_slimmedJetsPuppi__PAT_obj_m_state_qx3_, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_qx3_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.pdgId_", patJets_slimmedJetsPuppi__PAT_obj_m_state_pdgId_, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_pdgId_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.m_state.status_", patJets_slimmedJetsPuppi__PAT_obj_m_state_status_, &b_patJets_slimmedJetsPuppi__PAT_obj_m_state_status_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.dau", patJets_slimmedJetsPuppi__PAT_obj_dau, &b_patJets_slimmedJetsPuppi__PAT_obj_dau);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.mJetArea", patJets_slimmedJetsPuppi__PAT_obj_mJetArea, &b_patJets_slimmedJetsPuppi__PAT_obj_mJetArea);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.mPileupEnergy", patJets_slimmedJetsPuppi__PAT_obj_mPileupEnergy, &b_patJets_slimmedJetsPuppi__PAT_obj_mPileupEnergy);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.mPassNumber", patJets_slimmedJetsPuppi__PAT_obj_mPassNumber, &b_patJets_slimmedJetsPuppi__PAT_obj_mPassNumber);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.refToOrig_.core_", patJets_slimmedJetsPuppi__PAT_obj_refToOrig__core_, &b_patJets_slimmedJetsPuppi__PAT_obj_refToOrig__core_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.refToOrig_.key_", patJets_slimmedJetsPuppi__PAT_obj_refToOrig__key_, &b_patJets_slimmedJetsPuppi__PAT_obj_refToOrig__key_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.triggerObjectMatchesEmbedded_", patJets_slimmedJetsPuppi__PAT_obj_triggerObjectMatchesEmbedded_, &b_patJets_slimmedJetsPuppi__PAT_obj_triggerObjectMatchesEmbedded_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.efficiencyValues_", patJets_slimmedJetsPuppi__PAT_obj_efficiencyValues_, &b_patJets_slimmedJetsPuppi__PAT_obj_efficiencyValues_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.efficiencyNames_", patJets_slimmedJetsPuppi__PAT_obj_efficiencyNames_, &b_patJets_slimmedJetsPuppi__PAT_obj_efficiencyNames_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genParticleRef_", patJets_slimmedJetsPuppi__PAT_obj_genParticleRef_, &b_patJets_slimmedJetsPuppi__PAT_obj_genParticleRef_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genParticleEmbedded_", patJets_slimmedJetsPuppi__PAT_obj_genParticleEmbedded_, &b_patJets_slimmedJetsPuppi__PAT_obj_genParticleEmbedded_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.overlapLabels_", patJets_slimmedJetsPuppi__PAT_obj_overlapLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_overlapLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.overlapItems_", patJets_slimmedJetsPuppi__PAT_obj_overlapItems_, &b_patJets_slimmedJetsPuppi__PAT_obj_overlapItems_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userDataLabels_", patJets_slimmedJetsPuppi__PAT_obj_userDataLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_userDataLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userDataObjects_.data_", patJets_slimmedJetsPuppi__PAT_obj_userDataObjects__data_, &b_patJets_slimmedJetsPuppi__PAT_obj_userDataObjects__data_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userFloatLabels_", patJets_slimmedJetsPuppi__PAT_obj_userFloatLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_userFloatLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userFloats_", patJets_slimmedJetsPuppi__PAT_obj_userFloats_, &b_patJets_slimmedJetsPuppi__PAT_obj_userFloats_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userIntLabels_", patJets_slimmedJetsPuppi__PAT_obj_userIntLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_userIntLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userInts_", patJets_slimmedJetsPuppi__PAT_obj_userInts_, &b_patJets_slimmedJetsPuppi__PAT_obj_userInts_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userCandLabels_", patJets_slimmedJetsPuppi__PAT_obj_userCandLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_userCandLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.userCands_", patJets_slimmedJetsPuppi__PAT_obj_userCands_, &b_patJets_slimmedJetsPuppi__PAT_obj_userCands_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.kinResolutions_", patJets_slimmedJetsPuppi__PAT_obj_kinResolutions_, &b_patJets_slimmedJetsPuppi__PAT_obj_kinResolutions_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.kinResolutionLabels_", patJets_slimmedJetsPuppi__PAT_obj_kinResolutionLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_kinResolutionLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.embeddedCaloTowers_", patJets_slimmedJetsPuppi__PAT_obj_embeddedCaloTowers_, &b_patJets_slimmedJetsPuppi__PAT_obj_embeddedCaloTowers_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.caloTowers_.obj", patJets_slimmedJetsPuppi__PAT_obj_caloTowers__obj, &b_patJets_slimmedJetsPuppi__PAT_obj_caloTowers__obj);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.caloTowersFwdPtr_", patJets_slimmedJetsPuppi__PAT_obj_caloTowersFwdPtr_, &b_patJets_slimmedJetsPuppi__PAT_obj_caloTowersFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.embeddedPFCandidates_", patJets_slimmedJetsPuppi__PAT_obj_embeddedPFCandidates_, &b_patJets_slimmedJetsPuppi__PAT_obj_embeddedPFCandidates_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.pfCandidates_", patJets_slimmedJetsPuppi__PAT_obj_pfCandidates_, &b_patJets_slimmedJetsPuppi__PAT_obj_pfCandidates_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.pfCandidatesFwdPtr_", patJets_slimmedJetsPuppi__PAT_obj_pfCandidatesFwdPtr_, &b_patJets_slimmedJetsPuppi__PAT_obj_pfCandidatesFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.subjetCollections_", patJets_slimmedJetsPuppi__PAT_obj_subjetCollections_, &b_patJets_slimmedJetsPuppi__PAT_obj_subjetCollections_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.subjetLabels_", patJets_slimmedJetsPuppi__PAT_obj_subjetLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_subjetLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genJet_", patJets_slimmedJetsPuppi__PAT_obj_genJet_, &b_patJets_slimmedJetsPuppi__PAT_obj_genJet_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genJetRef_.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genJetRef_.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_genJetRef__refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genJetFwdRef_.ref_.product_", patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__ref__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__ref__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.genJetFwdRef_.backRef_.product_", patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__backRef__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_genJetFwdRef__backRef__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_bHadrons.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_bHadrons.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_bHadrons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_cHadrons.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_cHadrons.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_cHadrons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_partons.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_partons.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_leptons.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_leptons.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_leptons_refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_hadronFlavour", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_hadronFlavour, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_hadronFlavour);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetFlavourInfo_.m_partonFlavour", patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partonFlavour, &b_patJets_slimmedJetsPuppi__PAT_obj_jetFlavourInfo__m_partonFlavour);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jec_", patJets_slimmedJetsPuppi__PAT_obj_jec_, &b_patJets_slimmedJetsPuppi__PAT_obj_jec_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.currentJECSet_", patJets_slimmedJetsPuppi__PAT_obj_currentJECSet_, &b_patJets_slimmedJetsPuppi__PAT_obj_currentJECSet_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.currentJECLevel_", patJets_slimmedJetsPuppi__PAT_obj_currentJECLevel_, &b_patJets_slimmedJetsPuppi__PAT_obj_currentJECLevel_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.currentJECFlavor_", patJets_slimmedJetsPuppi__PAT_obj_currentJECFlavor_, &b_patJets_slimmedJetsPuppi__PAT_obj_currentJECFlavor_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.pairDiscriVector_", patJets_slimmedJetsPuppi__PAT_obj_pairDiscriVector_, &b_patJets_slimmedJetsPuppi__PAT_obj_pairDiscriVector_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.tagInfoLabels_", patJets_slimmedJetsPuppi__PAT_obj_tagInfoLabels_, &b_patJets_slimmedJetsPuppi__PAT_obj_tagInfoLabels_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.tagInfos_.data_", patJets_slimmedJetsPuppi__PAT_obj_tagInfos__data_, &b_patJets_slimmedJetsPuppi__PAT_obj_tagInfos__data_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.tagInfosFwdPtr_", patJets_slimmedJetsPuppi__PAT_obj_tagInfosFwdPtr_, &b_patJets_slimmedJetsPuppi__PAT_obj_tagInfosFwdPtr_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetCharge_", patJets_slimmedJetsPuppi__PAT_obj_jetCharge_, &b_patJets_slimmedJetsPuppi__PAT_obj_jetCharge_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.associatedTracks_.refVector_.product_", patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__product_, &b_patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__product_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.associatedTracks_.refVector_.keys_", patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__keys_, &b_patJets_slimmedJetsPuppi__PAT_obj_associatedTracks__refVector__keys_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.specificCalo_", patJets_slimmedJetsPuppi__PAT_obj_specificCalo_, &b_patJets_slimmedJetsPuppi__PAT_obj_specificCalo_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.specificJPT_", patJets_slimmedJetsPuppi__PAT_obj_specificJPT_, &b_patJets_slimmedJetsPuppi__PAT_obj_specificJPT_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.specificPF_", patJets_slimmedJetsPuppi__PAT_obj_specificPF_, &b_patJets_slimmedJetsPuppi__PAT_obj_specificPF_);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fHPD", patJets_slimmedJetsPuppi__PAT_obj_jetID__fHPD, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHPD);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fRBX", patJets_slimmedJetsPuppi__PAT_obj_jetID__fRBX, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fRBX);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.n90Hits", patJets_slimmedJetsPuppi__PAT_obj_jetID__n90Hits, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__n90Hits);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fSubDetector1", patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector1, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector1);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fSubDetector2", patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector2, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector2);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fSubDetector3", patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector3, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector3);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fSubDetector4", patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector4, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fSubDetector4);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.restrictedEMF", patJets_slimmedJetsPuppi__PAT_obj_jetID__restrictedEMF, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__restrictedEMF);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.nHCALTowers", patJets_slimmedJetsPuppi__PAT_obj_jetID__nHCALTowers, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__nHCALTowers);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.nECALTowers", patJets_slimmedJetsPuppi__PAT_obj_jetID__nECALTowers, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__nECALTowers);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.approximatefHPD", patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefHPD, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefHPD);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.approximatefRBX", patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefRBX, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__approximatefRBX);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.hitsInN90", patJets_slimmedJetsPuppi__PAT_obj_jetID__hitsInN90, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__hitsInN90);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.numberOfHits2RPC", patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits2RPC, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits2RPC);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.numberOfHits3RPC", patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits3RPC, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHits3RPC);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.numberOfHitsRPC", patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHitsRPC, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__numberOfHitsRPC);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fEB", patJets_slimmedJetsPuppi__PAT_obj_jetID__fEB, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fEB);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fEE", patJets_slimmedJetsPuppi__PAT_obj_jetID__fEE, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fEE);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fHB", patJets_slimmedJetsPuppi__PAT_obj_jetID__fHB, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHB);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fHE", patJets_slimmedJetsPuppi__PAT_obj_jetID__fHE, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHE);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fHO", patJets_slimmedJetsPuppi__PAT_obj_jetID__fHO, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHO);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fLong", patJets_slimmedJetsPuppi__PAT_obj_jetID__fLong, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fLong);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fShort", patJets_slimmedJetsPuppi__PAT_obj_jetID__fShort, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fShort);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fLS", patJets_slimmedJetsPuppi__PAT_obj_jetID__fLS, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fLS);
   fChain->SetBranchAddress("patJets_slimmedJetsPuppi__PAT.obj.jetID_.fHFOOT", patJets_slimmedJetsPuppi__PAT_obj_jetID__fHFOOT, &b_patJets_slimmedJetsPuppi__PAT_obj_jetID__fHFOOT);
   fChain->SetBranchAddress("patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT.present", &patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_present, &b_patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_present);
   fChain->SetBranchAddress("patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT.obj", &patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_obj, &b_patJets_slimmedJetsAK8PFPuppiSoftDropPacked_SubJets_PAT_obj);
   fChain->SetBranchAddress("patMETs_slimmedMETs__PAT.present", &patMETs_slimmedMETs__PAT_present, &b_patMETs_slimmedMETs__PAT_present);
   fChain->SetBranchAddress("patMETs_slimmedMETs__PAT.obj", &patMETs_slimmedMETs__PAT_obj, &b_patMETs_slimmedMETs__PAT_obj);
   fChain->SetBranchAddress("patMETs_slimmedMETsNoHF__PAT.present", &patMETs_slimmedMETsNoHF__PAT_present, &b_patMETs_slimmedMETsNoHF__PAT_present);
   fChain->SetBranchAddress("patMETs_slimmedMETsNoHF__PAT.obj", &patMETs_slimmedMETsNoHF__PAT_obj, &b_patMETs_slimmedMETsNoHF__PAT_obj);
   fChain->SetBranchAddress("patMETs_slimmedMETsPuppi__PAT.present", &patMETs_slimmedMETsPuppi__PAT_present, &b_patMETs_slimmedMETsPuppi__PAT_present);
   fChain->SetBranchAddress("patMETs_slimmedMETsPuppi__PAT.obj", &patMETs_slimmedMETsPuppi__PAT_obj, &b_patMETs_slimmedMETsPuppi__PAT_obj);
   fChain->SetBranchAddress("patMuons_slimmedMuons__PAT.present", &patMuons_slimmedMuons__PAT_present, &b_patMuons_slimmedMuons__PAT_present);
   fChain->SetBranchAddress("patMuons_slimmedMuons__PAT.obj", &patMuons_slimmedMuons__PAT_obj, &b_patMuons_slimmedMuons__PAT_obj);
   fChain->SetBranchAddress("patPackedCandidates_lostTracks__PAT.present", &patPackedCandidates_lostTracks__PAT_present, &b_patPackedCandidates_lostTracks__PAT_present);
   fChain->SetBranchAddress("patPackedCandidates_lostTracks__PAT.obj", &patPackedCandidates_lostTracks__PAT_obj, &b_patPackedCandidates_lostTracks__PAT_obj);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.present", &patPackedCandidates_packedPFCandidates__PAT_present, &b_patPackedCandidates_packedPFCandidates__PAT_present);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj", &patPackedCandidates_packedPFCandidates__PAT_obj_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedPt_", patPackedCandidates_packedPFCandidates__PAT_obj_packedPt_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPt_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedEta_", patPackedCandidates_packedPFCandidates__PAT_obj_packedEta_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedEta_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedPhi_", patPackedCandidates_packedPFCandidates__PAT_obj_packedPhi_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPhi_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedM_", patPackedCandidates_packedPFCandidates__PAT_obj_packedM_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedM_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedDxy_", patPackedCandidates_packedPFCandidates__PAT_obj_packedDxy_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDxy_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedDz_", patPackedCandidates_packedPFCandidates__PAT_obj_packedDz_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDz_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedDPhi_", patPackedCandidates_packedPFCandidates__PAT_obj_packedDPhi_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDPhi_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedDEta_", patPackedCandidates_packedPFCandidates__PAT_obj_packedDEta_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDEta_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedDTrkPt_", patPackedCandidates_packedPFCandidates__PAT_obj_packedDTrkPt_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedDTrkPt_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dxydxy", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydxy, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydxy);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dxydz", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydz, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dxydz);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dzdz", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dzdz, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dzdz);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dlambdadz", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dlambdadz, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dlambdadz);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dphidxy", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidxy, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidxy);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dptdpt", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dptdpt, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dptdpt);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.detadeta", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__detadeta, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__detadeta);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedCovariance_.dphidphi", patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidphi, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedCovariance__dphidphi);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedPuppiweight_", patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweight_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweight_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedPuppiweightNoLepDiff_", patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweightNoLepDiff_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedPuppiweightNoLepDiff_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.rawCaloFraction_", patPackedCandidates_packedPFCandidates__PAT_obj_rawCaloFraction_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_rawCaloFraction_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.hcalFraction_", patPackedCandidates_packedPFCandidates__PAT_obj_hcalFraction_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_hcalFraction_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedTime_", patPackedCandidates_packedPFCandidates__PAT_obj_packedTime_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedTime_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedTimeError_", patPackedCandidates_packedPFCandidates__PAT_obj_packedTimeError_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedTimeError_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.isIsolatedChargedHadron_", patPackedCandidates_packedPFCandidates__PAT_obj_isIsolatedChargedHadron_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_isIsolatedChargedHadron_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.pdgId_", patPackedCandidates_packedPFCandidates__PAT_obj_pdgId_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_pdgId_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.qualityFlags_", patPackedCandidates_packedPFCandidates__PAT_obj_qualityFlags_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_qualityFlags_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.pvRefProd_.product_", patPackedCandidates_packedPFCandidates__PAT_obj_pvRefProd__product_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_pvRefProd__product_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.pvRefKey_", patPackedCandidates_packedPFCandidates__PAT_obj_pvRefKey_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_pvRefKey_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedHits_", patPackedCandidates_packedPFCandidates__PAT_obj_packedHits_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedHits_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.packedLayers_", patPackedCandidates_packedPFCandidates__PAT_obj_packedLayers_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_packedLayers_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.normalizedChi2_", patPackedCandidates_packedPFCandidates__PAT_obj_normalizedChi2_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_normalizedChi2_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.covarianceVersion_", patPackedCandidates_packedPFCandidates__PAT_obj_covarianceVersion_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_covarianceVersion_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.covarianceSchema_", patPackedCandidates_packedPFCandidates__PAT_obj_covarianceSchema_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_covarianceSchema_);
   fChain->SetBranchAddress("patPackedCandidates_packedPFCandidates__PAT.obj.firstHit_", patPackedCandidates_packedPFCandidates__PAT_obj_firstHit_, &b_patPackedCandidates_packedPFCandidates__PAT_obj_firstHit_);
   fChain->SetBranchAddress("patPackedCandidates_lostTracks_eleTracks_PAT.present", &patPackedCandidates_lostTracks_eleTracks_PAT_present, &b_patPackedCandidates_lostTracks_eleTracks_PAT_present);
   fChain->SetBranchAddress("patPackedCandidates_lostTracks_eleTracks_PAT.obj", &patPackedCandidates_lostTracks_eleTracks_PAT_obj, &b_patPackedCandidates_lostTracks_eleTracks_PAT_obj);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.present", &patPackedGenParticles_packedGenParticles__PAT_present, &b_patPackedGenParticles_packedGenParticles__PAT_present);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj", &patPackedGenParticles_packedGenParticles__PAT_obj_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.packedPt_", patPackedGenParticles_packedGenParticles__PAT_obj_packedPt_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_packedPt_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.packedY_", patPackedGenParticles_packedGenParticles__PAT_obj_packedY_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_packedY_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.packedPhi_", patPackedGenParticles_packedGenParticles__PAT_obj_packedPhi_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_packedPhi_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.packedM_", patPackedGenParticles_packedGenParticles__PAT_obj_packedM_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_packedM_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.vertex_.fCoordinates.fX", patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fX, &b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.vertex_.fCoordinates.fY", patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fY, &b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.vertex_.fCoordinates.fZ", patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fZ, &b_patPackedGenParticles_packedGenParticles__PAT_obj_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.dxy_", patPackedGenParticles_packedGenParticles__PAT_obj_dxy_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_dxy_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.dz_", patPackedGenParticles_packedGenParticles__PAT_obj_dz_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_dz_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.dphi_", patPackedGenParticles_packedGenParticles__PAT_obj_dphi_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_dphi_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.pdgId_", patPackedGenParticles_packedGenParticles__PAT_obj_pdgId_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_pdgId_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.charge_", patPackedGenParticles_packedGenParticles__PAT_obj_charge_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_charge_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.mother_.product_", patPackedGenParticles_packedGenParticles__PAT_obj_mother__product_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_mother__product_);
   fChain->SetBranchAddress("patPackedGenParticles_packedGenParticles__PAT.obj.statusFlags_.flags_", patPackedGenParticles_packedGenParticles__PAT_obj_statusFlags__flags_, &b_patPackedGenParticles_packedGenParticles__PAT_obj_statusFlags__flags_);
   fChain->SetBranchAddress("patPhotons_slimmedOOTPhotons__PAT.present", &patPhotons_slimmedOOTPhotons__PAT_present, &b_patPhotons_slimmedOOTPhotons__PAT_present);
   fChain->SetBranchAddress("patPhotons_slimmedOOTPhotons__PAT.obj", &patPhotons_slimmedOOTPhotons__PAT_obj, &b_patPhotons_slimmedOOTPhotons__PAT_obj);
   fChain->SetBranchAddress("patPhotons_slimmedPhotons__PAT.present", &patPhotons_slimmedPhotons__PAT_present, &b_patPhotons_slimmedPhotons__PAT_present);
   fChain->SetBranchAddress("patPhotons_slimmedPhotons__PAT.obj", &patPhotons_slimmedPhotons__PAT_obj, &b_patPhotons_slimmedPhotons__PAT_obj);
   fChain->SetBranchAddress("patTaus_slimmedTaus__PAT.present", &patTaus_slimmedTaus__PAT_present, &b_patTaus_slimmedTaus__PAT_present);
   fChain->SetBranchAddress("patTaus_slimmedTaus__PAT.obj", &patTaus_slimmedTaus__PAT_obj, &b_patTaus_slimmedTaus__PAT_obj);
   fChain->SetBranchAddress("patTaus_slimmedTausBoosted__PAT.present", &patTaus_slimmedTausBoosted__PAT_present, &b_patTaus_slimmedTausBoosted__PAT_present);
   fChain->SetBranchAddress("patTaus_slimmedTausBoosted__PAT.obj", &patTaus_slimmedTausBoosted__PAT_obj, &b_patTaus_slimmedTausBoosted__PAT_obj);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.present", &patTriggerObjectStandAlones_slimmedPatTrigger__PAT_present, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_present);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj", &patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.vertex_.fCoordinates.fX", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fX, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.vertex_.fCoordinates.fY", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fY, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.vertex_.fCoordinates.fZ", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fZ, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.p4Polar_.fCoordinates.fPt", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPt, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPt);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.p4Polar_.fCoordinates.fEta", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fEta, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fEta);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.p4Polar_.fCoordinates.fPhi", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPhi, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fPhi);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.p4Polar_.fCoordinates.fM", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fM, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_p4Polar__fCoordinates_fM);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.qx3_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_qx3_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_qx3_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.pdgId_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_pdgId_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_pdgId_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.m_state.status_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_status_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_m_state_status_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.collection_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_collection_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_collection_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.triggerObjectTypes_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_triggerObjectTypes_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_triggerObjectTypes_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.filterLabels_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabels_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabels_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.filterLabelIndices_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabelIndices_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_filterLabelIndices_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.pathNames_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathNames_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathNames_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.pathIndices_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathIndices_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathIndices_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.pathLastFilterAccepted_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathLastFilterAccepted_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathLastFilterAccepted_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.pathL3FilterAccepted_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathL3FilterAccepted_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_pathL3FilterAccepted_);
   fChain->SetBranchAddress("patTriggerObjectStandAlones_slimmedPatTrigger__PAT.obj.psetId_.hash_", patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_psetId__hash_, &b_patTriggerObjectStandAlones_slimmedPatTrigger__PAT_obj_psetId__hash_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT.present", &recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_present, &b_recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_present);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT.obj", &recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_obj, &b_recoCaloClusters_reducedEgamma_reducedEBEEClusters_PAT_obj);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.present", &recoCaloClusters_reducedEgamma_reducedESClusters_PAT_present, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_present);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj", &recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.energy_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_energy_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_energy_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.correctedEnergy_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergy_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergy_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.correctedEnergyUncertainty_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergyUncertainty_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_correctedEnergyUncertainty_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.position_.fCoordinates.fX", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fX, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fX);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.position_.fCoordinates.fY", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fY, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fY);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.position_.fCoordinates.fZ", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fZ, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_position__fCoordinates_fZ);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.caloID_.detectors_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_caloID__detectors_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_caloID__detectors_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.hitsAndFractions_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_hitsAndFractions_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_hitsAndFractions_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.algoID_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_algoID_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_algoID_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.seedId_.id_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_seedId__id_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_seedId__id_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedESClusters_PAT.obj.flags_", recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_flags_, &b_recoCaloClusters_reducedEgamma_reducedESClusters_PAT_obj_flags_);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT.present", &recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_present, &b_recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_present);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT.obj", &recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_obj, &b_recoCaloClusters_reducedEgamma_reducedOOTEBEEClusters_PAT_obj);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT.present", &recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_present, &b_recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_present);
   fChain->SetBranchAddress("recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT.obj", &recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_obj, &b_recoCaloClusters_reducedEgamma_reducedOOTESClusters_PAT_obj);
   fChain->SetBranchAddress("recoCaloJets_slimmedCaloJets__PAT.present", &recoCaloJets_slimmedCaloJets__PAT_present, &b_recoCaloJets_slimmedCaloJets__PAT_present);
   fChain->SetBranchAddress("recoCaloJets_slimmedCaloJets__PAT.obj", &recoCaloJets_slimmedCaloJets__PAT_obj, &b_recoCaloJets_slimmedCaloJets__PAT_obj);
   fChain->SetBranchAddress("recoConversions_reducedEgamma_reducedConversions_PAT.present", &recoConversions_reducedEgamma_reducedConversions_PAT_present, &b_recoConversions_reducedEgamma_reducedConversions_PAT_present);
   fChain->SetBranchAddress("recoConversions_reducedEgamma_reducedConversions_PAT.obj", &recoConversions_reducedEgamma_reducedConversions_PAT_obj, &b_recoConversions_reducedEgamma_reducedConversions_PAT_obj);
   fChain->SetBranchAddress("recoConversions_reducedEgamma_reducedSingleLegConversions_PAT.present", &recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_present, &b_recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_present);
   fChain->SetBranchAddress("recoConversions_reducedEgamma_reducedSingleLegConversions_PAT.obj", &recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_obj, &b_recoConversions_reducedEgamma_reducedSingleLegConversions_PAT_obj);
   fChain->SetBranchAddress("recoDeDxHitInfos_isolatedTracks__PAT.present", &recoDeDxHitInfos_isolatedTracks__PAT_present, &b_recoDeDxHitInfos_isolatedTracks__PAT_present);
   fChain->SetBranchAddress("recoDeDxHitInfos_isolatedTracks__PAT.obj", &recoDeDxHitInfos_isolatedTracks__PAT_obj, &b_recoDeDxHitInfos_isolatedTracks__PAT_obj);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.present", &recoGenJets_slimmedGenJets__PAT_present, &b_recoGenJets_slimmedGenJets__PAT_present);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj", &recoGenJets_slimmedGenJets__PAT_obj_, &b_recoGenJets_slimmedGenJets__PAT_obj_);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.vertex_.fCoordinates.fX", recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fX, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.vertex_.fCoordinates.fY", recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fY, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.vertex_.fCoordinates.fZ", recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fZ, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.p4Polar_.fCoordinates.fPt", recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPt);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.p4Polar_.fCoordinates.fEta", recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fEta);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.p4Polar_.fCoordinates.fPhi", recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fPhi);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.p4Polar_.fCoordinates.fM", recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fM, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_p4Polar__fCoordinates_fM);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.qx3_", recoGenJets_slimmedGenJets__PAT_obj_m_state_qx3_, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_qx3_);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.pdgId_", recoGenJets_slimmedGenJets__PAT_obj_m_state_pdgId_, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_pdgId_);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_state.status_", recoGenJets_slimmedGenJets__PAT_obj_m_state_status_, &b_recoGenJets_slimmedGenJets__PAT_obj_m_state_status_);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.dau", recoGenJets_slimmedGenJets__PAT_obj_dau, &b_recoGenJets_slimmedGenJets__PAT_obj_dau);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.mJetArea", recoGenJets_slimmedGenJets__PAT_obj_mJetArea, &b_recoGenJets_slimmedGenJets__PAT_obj_mJetArea);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.mPileupEnergy", recoGenJets_slimmedGenJets__PAT_obj_mPileupEnergy, &b_recoGenJets_slimmedGenJets__PAT_obj_mPileupEnergy);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.mPassNumber", recoGenJets_slimmedGenJets__PAT_obj_mPassNumber, &b_recoGenJets_slimmedGenJets__PAT_obj_mPassNumber);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_specific.m_EmEnergy", recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_EmEnergy, &b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_EmEnergy);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_specific.m_HadEnergy", recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_HadEnergy, &b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_HadEnergy);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_specific.m_InvisibleEnergy", recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_InvisibleEnergy, &b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_InvisibleEnergy);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJets__PAT.obj.m_specific.m_AuxiliaryEnergy", recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_AuxiliaryEnergy, &b_recoGenJets_slimmedGenJets__PAT_obj_m_specific_m_AuxiliaryEnergy);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJetsAK8__PAT.present", &recoGenJets_slimmedGenJetsAK8__PAT_present, &b_recoGenJets_slimmedGenJetsAK8__PAT_present);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJetsAK8__PAT.obj", &recoGenJets_slimmedGenJetsAK8__PAT_obj, &b_recoGenJets_slimmedGenJetsAK8__PAT_obj);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT.present", &recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_present, &b_recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_present);
   fChain->SetBranchAddress("recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT.obj", &recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_obj, &b_recoGenJets_slimmedGenJetsAK8SoftDropSubJets__PAT_obj);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.present", &recoGenParticles_prunedGenParticles__PAT_present, &b_recoGenParticles_prunedGenParticles__PAT_present);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj", &recoGenParticles_prunedGenParticles__PAT_obj_, &b_recoGenParticles_prunedGenParticles__PAT_obj_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.vertex_.fCoordinates.fX", recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fX, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fX);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.vertex_.fCoordinates.fY", recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fY, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fY);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.vertex_.fCoordinates.fZ", recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fZ, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_vertex__fCoordinates_fZ);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.p4Polar_.fCoordinates.fPt", recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPt, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPt);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.p4Polar_.fCoordinates.fEta", recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fEta, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fEta);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.p4Polar_.fCoordinates.fPhi", recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPhi, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fPhi);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.p4Polar_.fCoordinates.fM", recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fM, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_p4Polar__fCoordinates_fM);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.qx3_", recoGenParticles_prunedGenParticles__PAT_obj_m_state_qx3_, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_qx3_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.pdgId_", recoGenParticles_prunedGenParticles__PAT_obj_m_state_pdgId_, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_pdgId_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.m_state.status_", recoGenParticles_prunedGenParticles__PAT_obj_m_state_status_, &b_recoGenParticles_prunedGenParticles__PAT_obj_m_state_status_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.dau.refVector_.product_", recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__product_, &b_recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__product_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.dau.refVector_.keys_", recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__keys_, &b_recoGenParticles_prunedGenParticles__PAT_obj_dau_refVector__keys_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.mom.refVector_.product_", recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__product_, &b_recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__product_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.mom.refVector_.keys_", recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__keys_, &b_recoGenParticles_prunedGenParticles__PAT_obj_mom_refVector__keys_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.collisionId_", recoGenParticles_prunedGenParticles__PAT_obj_collisionId_, &b_recoGenParticles_prunedGenParticles__PAT_obj_collisionId_);
   fChain->SetBranchAddress("recoGenParticles_prunedGenParticles__PAT.obj.statusFlags_.flags_", recoGenParticles_prunedGenParticles__PAT_obj_statusFlags__flags_, &b_recoGenParticles_prunedGenParticles__PAT_obj_statusFlags__flags_);
   fChain->SetBranchAddress("recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT.present", &recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_present, &b_recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_present);
   fChain->SetBranchAddress("recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT.obj", &recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_obj, &b_recoGsfElectronCores_reducedEgamma_reducedGedGsfElectronCores_PAT_obj);
   fChain->SetBranchAddress("recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT.present", &recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_present, &b_recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_present);
   fChain->SetBranchAddress("recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT.obj", &recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_obj, &b_recoGsfTracks_reducedEgamma_reducedGsfTracks_PAT_obj);
   fChain->SetBranchAddress("recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT.present", &recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_present, &b_recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_present);
   fChain->SetBranchAddress("recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT.obj", &recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_obj, &b_recoPhotonCores_reducedEgamma_reducedGedPhotonCores_PAT_obj);
   fChain->SetBranchAddress("recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT.present", &recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_present, &b_recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_present);
   fChain->SetBranchAddress("recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT.obj", &recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_obj, &b_recoPhotonCores_reducedEgamma_reducedOOTPhotonCores_PAT_obj);
   fChain->SetBranchAddress("recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT.present", &recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_present, &b_recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_present);
   fChain->SetBranchAddress("recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT.obj", &recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_obj, &b_recoSuperClusters_reducedEgamma_reducedOOTSuperClusters_PAT_obj);
   fChain->SetBranchAddress("recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT.present", &recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_present, &b_recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_present);
   fChain->SetBranchAddress("recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT.obj", &recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_obj, &b_recoSuperClusters_reducedEgamma_reducedSuperClusters_PAT_obj);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.present", &recoVertexs_offlineSlimmedPrimaryVertices__PAT_present, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_present);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj", &recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.chi2_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_chi2_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_chi2_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.ndof_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_ndof_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_ndof_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.position_.fCoordinates.fX", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fX, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fX);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.position_.fCoordinates.fY", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fY, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fY);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.position_.fCoordinates.fZ", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fZ, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_position__fCoordinates_fZ);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.covariance_[10]", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_covariance_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_covariance_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.tracks_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_tracks_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_tracks_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.refittedTracks_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_refittedTracks_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_refittedTracks_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.weights_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_weights_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_weights_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.validity_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_validity_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_validity_);
   fChain->SetBranchAddress("recoVertexs_offlineSlimmedPrimaryVertices__PAT.obj.time_", recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_time_, &b_recoVertexs_offlineSlimmedPrimaryVertices__PAT_obj_time_);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT.present", &recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_present, &b_recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_present);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT.obj", &recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_obj, &b_recoVertexCompositePtrCandidates_slimmedKshortVertices__PAT_obj);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT.present", &recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_present, &b_recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_present);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT.obj", &recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_obj, &b_recoVertexCompositePtrCandidates_slimmedLambdaVertices__PAT_obj);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT.present", &recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_present, &b_recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_present);
   fChain->SetBranchAddress("recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT.obj", &recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_obj, &b_recoVertexCompositePtrCandidates_slimmedSecondaryVertices__PAT_obj);
   fChain->SetBranchAddress("Strings_slimmedPatTrigger_filterLabels_PAT.present", &Strings_slimmedPatTrigger_filterLabels_PAT_present, &b_Strings_slimmedPatTrigger_filterLabels_PAT_present);
   fChain->SetBranchAddress("Strings_slimmedPatTrigger_filterLabels_PAT.obj", &Strings_slimmedPatTrigger_filterLabels_PAT_obj, &b_Strings_slimmedPatTrigger_filterLabels_PAT_obj);
   fChain->SetBranchAddress("uint_bunchSpacingProducer__PAT.present", &uint_bunchSpacingProducer__PAT_present, &b_uint_bunchSpacingProducer__PAT_present);
   fChain->SetBranchAddress("uint_bunchSpacingProducer__PAT.obj", &uint_bunchSpacingProducer__PAT_obj, &b_uint_bunchSpacingProducer__PAT_obj);
   Notify();
}

Bool_t NanoAOD.h::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NanoAOD.h::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t NanoAOD.h::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef NanoAOD.h_cxx
