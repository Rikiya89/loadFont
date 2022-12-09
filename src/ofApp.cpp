#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    GrinchedRegular.load("GrinchedRegular.otf", 60);
    fontX = ofGetWidth();
}

//--------------------------------------------------------------
void ofApp::update(){
    fontX -= 1;
    ofRectangle rect = GrinchedRegular.getStringBoundingBox("Hello, everyone,I'm Ricky! Bonjour, tout le monde, Je suis Ricky!" , 0, 0);
    if (fontX < -rect.width){
        fontX = ofGetWidth();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 102);
    GrinchedRegular.drawString("Hello, everyone,I'm Ricky! Bonjour, tout le monde, Je suis Ricky!", fontX, ofGetHeight()/2);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
