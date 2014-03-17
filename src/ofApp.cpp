#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    src.loadImage("glider.png");
    
    
    /// imagenes para los filtros
    hefe.loadImage("hefe.png");
    hudson.loadImage("hudson.png");
    toaster.loadImage("toaster.png");
    filter2.loadImage("filter2.png");
    
    
    //shader
    shaderHefe.load("hefe.vert","hefe.frag");
    shaderAmaro.load("amaro.vert","amaro.frag");
    shaderEarlyBird.load("earlyBird.vert","earlyBird.frag");
    shaderHudson.load("hudson.vert","hudson.frag");
    shaderMayfair.load("mayfair.vert","mayfair.frag");
    shaderRise.load("rise.vert","rise.frag");
    shaderToaster.load("toaster.vert","toaster.frag");
    shaderXpro.load("xpro.vert","xpro.frag");
    
    //fbo
    fbo.allocate(ofGetScreenWidth(), ofGetScreenHeight());
    fbo.begin();
    ofClear(0,0,0,255);
    fbo.end();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    fbo.begin();
    
    //hefe
    shaderHefe.begin();
    shaderHefe.setUniformTexture("u_Texture2", hefe.getTextureReference(), 1);
    src.draw(0, 0);
    shaderHefe.end();
    ofDrawBitmapString("HEFE", ofPoint(20,380));
    
    
    //amaro
    shaderAmaro.begin();
    shaderAmaro.setUniformTexture("u_Texture1", filter2.getTextureReference(), 1);
    src.draw(410, 0);
    shaderAmaro.end();
    ofDrawBitmapString("AMARO", ofPoint(430,380));
    
    
    //earlyBird
    shaderEarlyBird.begin();
    shaderEarlyBird.setUniformTexture("u_Texture1", hefe.getTextureReference(), 1);
    src.draw(0, 410);
    shaderEarlyBird.end();
    ofDrawBitmapString("EARLYBIRD", ofPoint(20,780));
    
    
    //hudson
    shaderHudson.begin();
    shaderHudson.setUniformTexture("u_Texture3", hudson.getTextureReference(), 1);
    src.draw(410, 410);
    shaderHudson.end();
    ofDrawBitmapString("HUDSON", ofPoint(430,780));
    
    
    
    ///shaderMayfair
    shaderMayfair.begin();
    shaderMayfair.setUniformTexture("u_Texture1", filter2.getTextureReference(), 1);
    src.draw(820, 0);
    shaderMayfair.end();
    ofDrawBitmapString("MAYFAIR", ofPoint(840,380));

    
    
    //rise
    shaderRise.begin();
    shaderRise.setUniformTexture("u_Texture1", filter2.getTextureReference(), 1);
    src.draw(820, 410);
    shaderRise.end();
    ofDrawBitmapString("RISE", ofPoint(840,780));
    
    
    //toaster
    shaderToaster.begin();
    shaderToaster.setUniformTexture("u_Texture1", toaster.getTextureReference(), 1);
    src.draw(1230, 0);
    shaderToaster.end();
    ofDrawBitmapString("TOASTER", ofPoint(1240,380));

    
    //rise
    shaderXpro.begin();
    shaderXpro.setUniformTexture("u_Texture1", filter2.getTextureReference(), 1);
    src.draw(1230, 410);
    shaderXpro.end();
    ofDrawBitmapString("XPRO", ofPoint(1240,780));
    
    
    //default
    src.draw(0, 820, 200, 200);
    ofDrawBitmapString("sin filtro", ofPoint(10,850));
    fbo.end();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //src.draw(0, 0);
    
    fbo.draw(0, 0);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
