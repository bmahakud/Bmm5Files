// -*- C++ -*-
//
// Package:    SecondaryVertexConstraintProducer
// Class:      SecondaryVertexConstraintProducer
// 
/**\class VertexConstraintProducer VertexConstraintProducer.cc RecoTracker/ConstraintProducerTest/src/VertexConstraintProducer.cc

Description: <one line class summary>

Implementation:
<Notes on implementation>
*/
//
// Author : Bibhuprasad Mahakud
//         Created: 2020, IIT Bhubaneswar
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "DataFormats/MuonReco/interface/Muon.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "TrackingTools/PatternTools/interface/TrackConstraintAssociation.h"
#include "DataFormats/BeamSpot/interface/BeamSpot.h"
#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
//
//
// class decleration
//

class VertexConstraintProducer: public edm::EDProducer {
public:
  explicit VertexConstraintProducer(const edm::ParameterSet&);
  ~VertexConstraintProducer();

private:
  virtual void produce(edm::Event&, const edm::EventSetup&) override;
  virtual void endJob() override ;
      
  // ----------member data ---------------------------
  const edm::InputTag srcTrkTag_;
  edm::EDGetTokenT<reco::TrackCollection> trkToken_;

  //const edm::InputTag srcMuonTag_;
  //edm::EDGetTokenT<std::vector<reco::Muon>> muonToken_;
  //
  std::string secVtx_;
  

  const edm::InputTag srcVtxTag_;
  edm::EDGetTokenT<reco::VertexCollection> vtxToken_;


  const edm::InputTag secVtxXTag_;
  edm::EDGetTokenT<float> secVtxXToken_;

 
  const edm::InputTag secVtxYTag_;
  edm::EDGetTokenT<float> secVtxYToken_;


  const edm::InputTag secVtxZTag_;
  edm::EDGetTokenT<float> secVtxZToken_;


  const edm::InputTag secVtxXXerTag_;
  edm::EDGetTokenT<float> secVtxXXerToken_;


  const edm::InputTag secVtxYYerTag_;
  edm::EDGetTokenT<float> secVtxYYerToken_;


  const edm::InputTag secVtxZZerTag_;
  edm::EDGetTokenT<float> secVtxZZerToken_;


  const edm::InputTag secVtxXYerTag_;
  edm::EDGetTokenT<float> secVtxXYerToken_;


  const edm::InputTag secVtxYZerTag_;
  edm::EDGetTokenT<float> secVtxYZerToken_;


  const edm::InputTag secVtxZXerTag_;
  edm::EDGetTokenT<float> secVtxZXerToken_;


 



};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
VertexConstraintProducer::VertexConstraintProducer(const edm::ParameterSet& iConfig) :
srcTrkTag_(iConfig.getParameter<edm::InputTag>("srcTrk")),
secVtx_(iConfig.getParameter<std::string>("secondaryVtxInfo")),
srcVtxTag_(iConfig.getParameter<edm::InputTag>("srcVtx")),
secVtxXTag_( iConfig.getParameter<edm::InputTag>( "secVtxX" ) ),
secVtxYTag_( iConfig.getParameter<edm::InputTag>( "secVtxY" ) ),
secVtxZTag_( iConfig.getParameter<edm::InputTag>( "secVtxZ" ) ),
secVtxXXerTag_( iConfig.getParameter<edm::InputTag>( "secVtxXXer" ) ),
secVtxYYerTag_( iConfig.getParameter<edm::InputTag>( "secVtxYYer" ) ),
secVtxZZerTag_( iConfig.getParameter<edm::InputTag>( "secVtxZZer" ) ),
secVtxXYerTag_( iConfig.getParameter<edm::InputTag>( "secVtxXYer" ) ),
secVtxYZerTag_( iConfig.getParameter<edm::InputTag>( "secVtxYZer" ) ),
secVtxZXerTag_( iConfig.getParameter<edm::InputTag>( "secVtxZXer" ) )



{
  //declare the consumes
  trkToken_ = consumes<reco::TrackCollection>(edm::InputTag(srcTrkTag_));
  vtxToken_ = consumes<reco::VertexCollection>(edm::InputTag(srcVtxTag_));
  secVtxXToken_ = consumes<float>(edm::InputTag(secVtxXTag_));
  secVtxYToken_ = consumes<float>(edm::InputTag(secVtxYTag_));
  secVtxZToken_ = consumes<float>(edm::InputTag(secVtxZTag_));

  secVtxXXerToken_ = consumes<float>(edm::InputTag(secVtxXXerTag_));
  secVtxYYerToken_ = consumes<float>(edm::InputTag(secVtxYYerTag_));
  secVtxZZerToken_ = consumes<float>(edm::InputTag(secVtxZZerTag_)); 

  secVtxXYerToken_ = consumes<float>(edm::InputTag(secVtxXYerTag_));
  secVtxYZerToken_ = consumes<float>(edm::InputTag(secVtxYZerTag_));
  secVtxZXerToken_ = consumes<float>(edm::InputTag(secVtxZXerTag_));


  //register your products
  produces<std::vector<VertexConstraint> >();
  produces<TrackVtxConstraintAssociationCollection>();


  //now do what ever other initialization is needed
}


VertexConstraintProducer::~VertexConstraintProducer()
{
  // do anything here that needs to be done at desctruction time
  // (e.g. close files, deallocate resources etc.)
}


//
// member functions
//

// ------------ method called to produce the data  ------------
void VertexConstraintProducer::produce(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  using namespace edm;
  using namespace std;


//   const char *FileName;
 //  FileName = secVtx_.c_str();

//  char SVInfofile[100];

//  sprintf(SVInfofile,"%s",FileName);








   /*
   std::ifstream read(SVInfofile); 
   int eventNum;
   double xpos,ypos,zpos,xerr,yerr,zerr,xyerr,yzerr,zxerr;

   int realEventNum = iEvent.id().event();

   while(!read.eof()){

   read>>eventNum>>xpos>>ypos>>zpos>>xerr>>yerr>>zerr>>xyerr>>yzerr>>zxerr;
 
   if(realEventNum == eventNum)break;

  }
   */



  Handle<reco::TrackCollection> theTCollection;
  iEvent.getByToken(trkToken_, theTCollection);


  edm::Handle<float> thevtxX;
  iEvent.getByToken(secVtxXToken_, thevtxX);

   edm::Handle<float> thevtxY;
  iEvent.getByToken(secVtxYToken_, thevtxY);

   edm::Handle<float> thevtxZ;
  iEvent.getByToken(secVtxZToken_, thevtxZ);


  edm::Handle<float> thevtxXXer;
  iEvent.getByToken(secVtxXXerToken_, thevtxXXer);

   edm::Handle<float> thevtxYYer;
  iEvent.getByToken(secVtxYYerToken_, thevtxYYer);

   edm::Handle<float> thevtxZZer;
  iEvent.getByToken(secVtxZZerToken_, thevtxZZer);


  edm::Handle<float> thevtxXYer;
  iEvent.getByToken(secVtxXYerToken_, thevtxXYer);

   edm::Handle<float> thevtxYZer;
  iEvent.getByToken(secVtxYZerToken_, thevtxYZer);

   edm::Handle<float> thevtxZXer;
  iEvent.getByToken(secVtxZXerToken_, thevtxZXer);

   
  //if(thevtxX.isValid())std::cout<<""<<iEvent.id().event()<<"Inside Vertex SV info: "<<*thevtxX<<"  "<<*thevtxY<<"  "<<*thevtxZ<<"  "<<*thevtxXXer<<" "<<*thevtxYYer<<" "<<*thevtxZZer<<" "<<*thevtxXYer<<" "<<*thevtxYZer<<" "<<*thevtxZXer<<std::endl;

 
 
 

  edm::RefProd<std::vector<VertexConstraint> > rPairs = iEvent.getRefBeforePut<std::vector<VertexConstraint> >();
  std::unique_ptr<std::vector<VertexConstraint> > pairs(new std::vector<VertexConstraint>);
  std::unique_ptr<TrackVtxConstraintAssociationCollection> output(new TrackVtxConstraintAssociationCollection(theTCollection, rPairs));



  int index = 0;

   if(thevtxX.isValid() && thevtxY.isValid() && thevtxZ.isValid() && thevtxXXer.isValid() && thevtxYYer.isValid() && thevtxZZer.isValid() && thevtxXYer.isValid() && thevtxYZer.isValid() && thevtxZXer.isValid() ){

     
     double xpos,ypos,zpos,xerr,yerr,zerr,xyerr,yzerr,zxerr;

     xpos = *thevtxX;
     ypos = *thevtxY;
     zpos = *thevtxZ;
     xerr = *thevtxXXer;
     yerr = *thevtxYYer;
     zerr = *thevtxZZer;
     xyerr=  *thevtxXYer;
     yzerr = *thevtxYZer;
     zxerr = *thevtxZXer;


    //std::cout<<"----checking---"<<xpos<<" "<<ypos<<" "<<zpos<<std::endl; 
    bool Run=true;

    if(xpos == ypos && ypos==zpos && xpos==0.)Run=false;
   
    if(Run==true){
    for (reco::TrackCollection::const_iterator i=theTCollection->begin(); i!=theTCollection->end();i++) {

       //std::cout<<"secondary vertex position: "<<xpos<<", "<<ypos<<", "<<zpos<<std::endl;
       //secondary vertex constraint

        //std::cout<<"Event no: "<<iEvent.id().event()<<<<i->pt()<<"inside VertexCon loop, SV info:  "<<xpos<<", "<<ypos<<", "<<zpos<<", "<<xerr<<", "<<yerr<<", "<<zerr<<", "<<xyerr<<", "<<yzerr<<", "<<zxerr<<std::endl;

       VertexConstraint tmp(
        GlobalPoint(xpos, ypos, zpos),
        GlobalError(
        xerr,
        xyerr, yerr,
        zxerr, yzerr, zerr
        )
        );



      pairs->push_back(tmp);
      output->insert(reco::TrackRef(theTCollection,index), edm::Ref<std::vector<VertexConstraint> >(rPairs,index) );
      index++;
    }//loop
    }
    }//valid sv

  iEvent.put(std::move(pairs));
  iEvent.put(std::move(output));
}

// ------------ method called once each job just after ending the event loop  ------------
void VertexConstraintProducer::endJob() {}

//define this as a plug-in
DEFINE_FWK_MODULE(VertexConstraintProducer);
