#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(60);
	ofHideCursor();
	ofBackground(0,0,0);


	//Serial Section:
	mySerial.enumerateDevices();
	mySerial.setup("/dev/cu.usbserial-A7006SBc", 9600);

	//Play Movie Section:

	sentA = false;
	frame = 0;

	myPlayer.setUseTexture(true);
	myPlayer.loadMovie("finalD4eva4.mov");
	//myPlayer.loadMovie("Dialog-MPEG-4 .mp4");
	myPlayer.play();

}

//--------------------------------------------------------------
void testApp::update(){
	myPlayer.idleMovie();
	frame = myPlayer.getCurrentFrame();
	////printf("movie frame: %i \n" , frame);

	// reset
	if (( frame >= 0 ) && ( frame <= 89 ))
	{
	    sentA = false;
	    printf("Reset at frame %i \n" , frame );
	}

	// frame 1
	if (( frame >= 90 ) && ( frame <= 100) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 1 \n");
	}

	// frame 2
	if (( frame >= 238 ) && ( frame <= 248) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 2 \n");

	}
	// frame 3
	if (( frame >= 536 ) && ( frame <= 546) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 3 \n");

	}
	// frame
	if (( frame >= 638 ) && ( frame <= 648) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 4 \n");
	}
	// frame 5
	if (( frame >= 709 ) && ( frame <= 718) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 5 \n");
	}
	// frame 6
	if (( frame >= 760 ) && ( frame <= 770) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 6 \n");
	}
	// frame 7
	if (( frame >= 945 ) && ( frame <= 960) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 7 \n");
	}
	// slide 8
	if (( frame >= 1076 ) && ( frame <= 1090) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 8 \n");
	}
	// slide 9
	if (( frame >= 1250 ) && ( frame <= 1260) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 9 \n");
	}
	// slide 10
	if (( frame >= 1440 ) && ( frame <= 1450) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 10 \n");
	}
	// slide 11
	if (( frame >= 1590 ) && ( frame <= 1600) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 11 \n");
	}
	// frame 12
	if (( frame >= 1935 ) && ( frame <= 1945) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 12 \n");
	}
	// frame 13
	if (( frame >= 2315 ) && ( frame <= 2325) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 13 \n");
	}
	// frame 14
	if (( frame >= 2412 ) && ( frame <= 2422) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 14 \n");
	}
	// frame 15
	if (( frame >= 2480 ) && ( frame <= 2490) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 15 \n");
	}
	// frame 16
	if (( frame >= 2576 ) && ( frame <= 2586) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 16 \n");
	}
	// slide 17
	if (( frame >= 2704 ) && ( frame <= 2720) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 17 \n");
	}
	// slide 18 
	if (( frame >= 2804 ) && ( frame <= 2820) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 18 \n");
	}
	// frame 19
	if (( frame >= 3310 ) && ( frame <= 3320) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 19 \n");
	}
	// frame 20
	if (( frame >= 3394 ) && ( frame <= 3406) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 20 \n");
	}
	// frame 21
	if (( frame >= 4490 ) && ( frame <= 4500) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 21 \n");
	}
	// frame 22
	if (( frame >= 4700 ) && ( frame <= 4710) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 22 \n");
	}
	// frame 23
	if (( frame >= 4895 ) && ( frame <= 4905) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 23 \n");
	}
	// frame 24
	if (( frame >= 5030 ) && ( frame <= 5040) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 24 \n");
	}
	// slide 25
	if (( frame >= 5310 ) && ( frame <= 5320) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 25 \n");
	}
	// frame 26
	if (( frame >= 6050 ) && ( frame <= 6060) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 26 \n");
	}
	// frame 27
	if (( frame >= 6200 ) && ( frame <= 6210) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 27 \n");
	}
	// frame 28
	if (( frame >= 6300 ) && ( frame <= 6310) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 28 \n");
	}
	// slide 29
	if (( frame >= 6380 ) && ( frame <= 6390) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 29 \n");
	}
	// slide 30
	if (( frame >= 6485 ) && ( frame <= 6495) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 30 \n");
	}
	// slide 31
	if (( frame >= 6706 ) && ( frame <= 6716) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 31 \n");
	}
	// slide 32
	if (( frame >= 8700 ) && ( frame <= 8714) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 32 \n");
	}
	// slide 33
	if (( frame >= 8914) && ( frame <= 8918) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 33 \n");
	}
	// slide 34
	if (( frame >= 9500 ) && ( frame <= 9510) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 34 \n");
	}
	// slide 35
	if (( frame >= 9600 ) && ( frame <= 9610) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 35 \n");
	}

	// slide 36
	if (( frame >= 9700 ) && ( frame <= 9710) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 36 \n");
	}
	// slide 37
	if (( frame >= 9800 ) && ( frame <= 9810) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 37 \n");
	}
	// slide 38
	if (( frame >= 9900 ) && ( frame <= 9910) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 38 \n");
	}
	// slide 39-- picture
	if (( frame >= 9950 ) && ( frame <= 9960) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 39 \n");
	}
	// slide 40
	if (( frame >= 10254 ) && ( frame <= 10268) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 40 \n");
	}
	// slide 41
	if (( frame >= 10650 ) && ( frame <= 10664) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 41 \n");
	}
	// slide 42
	if (( frame >= 10700 ) && ( frame <= 10710) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 42 \n");
	}
	// slide 43
	if (( frame >= 10730 ) && ( frame <= 10740) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 43 \n");
	}
	// slide 44
	if (( frame >= 10760 ) && ( frame <= 10770) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 44 \n");
	}
	// slide 45
	if (( frame >= 10790 ) && ( frame <= 10800) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 45 \n");
	}
		// slide 46
	if (( frame >= 10830 ) && ( frame <= 10840) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 46 \n");
	}
	// frame 47
	if (( frame >= 10860 ) && ( frame <= 10870) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 47 \n");
	}
	// frame 48
	if (( frame >= 10890 ) && ( frame <= 10900) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 48 \n");
	}
	// frame 49
	if (( frame >= 10930 ) && ( frame <= 10940) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 49 \n");
	}
	// frame 50
	if (( frame >= 10960 ) && ( frame <= 10970) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 50 \n");
	}
	// frame 51
	if (( frame >= 10990 ) && ( frame <= 11000) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 51 \n");
	}
	// frame 52
	if (( frame >= 11030 ) && ( frame <= 11040) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 52 \n");
	}
	// frame 53
	if (( frame >= 11060 ) && ( frame <= 11070) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 53 \n");
	}
	// frame 54
	if (( frame >= 11090 ) && ( frame <= 11100) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 54 \n");
	}
	// frame 55
	if (( frame >= 11130 ) && ( frame <= 11140) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 55 \n");
	}
	// frame 56
	if (( frame >= 11160 ) && ( frame <= 11170) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 56 \n");
	}
	// frame 57
	if (( frame >= 11190 ) && ( frame <= 11200) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 57 \n");
	}
	// frame 58
	if (( frame >= 11230 ) && ( frame <= 11240) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 58 \n");
	}
	// frame 59
	if (( frame >= 11260 ) && ( frame <= 11270) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 59 \n");
	}
	// frame 60
	if (( frame >= 11290 ) && ( frame <= 11300) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 60 \n");
	}
	// frame 61
	if (( frame >= 11330 ) && ( frame <= 11340) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 61 \n");
	}
	// frame 62
	if (( frame >= 11360 ) && ( frame <= 11370) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 62 \n");
	}
	// frame 63
	if (( frame >= 11390) && ( frame <= 11400) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 63 \n");
	}
	// frame 64
	if (( frame >= 11430 ) && ( frame <= 11440) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 64 \n");
	}
	// frame 65
	if (( frame >= 11460 ) && ( frame <= 11470) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 65 \n");
	}
	// frame 66
	if (( frame >= 11490 ) && ( frame <= 11500) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 66 \n");
	}
	// frame 67
	if (( frame >= 11530 ) && ( frame <= 11540) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 67 \n");
	}
	// frame 68
	if (( frame >= 11560 ) && ( frame <= 11570) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 68 \n");
	}
	// frame 69
	if (( frame >= 11590 ) && ( frame <= 11600) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 69 \n");
	}
	// frame 70
	if (( frame >= 11630 ) && ( frame <= 11640) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 70 \n");
	}
	// frame 71
	if (( frame >= 11660 ) && ( frame <= 11670) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 71 \n");
	}
	// frame 72
	if (( frame >= 11690 ) && ( frame <= 11700) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 72 \n");
	}
	// frame 73
	if (( frame >= 11730 ) && ( frame <= 11740) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 73 \n");
	}
	// frame 74
	if (( frame >= 11760 ) && ( frame <= 11770) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 74 \n");
	}
	// frame 75
	if (( frame >= 11790 ) && ( frame <= 11800) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 75 \n");
	}
	// frame 76
	if (( frame >= 11830 ) && ( frame <= 11840) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 76 \n");
	}
	// frame 77
	if (( frame >= 11860 ) && ( frame <= 11870) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 77 \n");
	}
	// frame 78
	if (( frame >= 11890 ) && ( frame <= 11900) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 78 \n");
	}
	// slide 79
	if (( frame >= 11930 ) && ( frame <= 11940) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 79 \n");
	}
	// slide 80
	if (( frame >= 12000 ) && ( frame <= 12010) && (sentA == true))
	{
		sentA = false;
		mySerial.writeByte('a');
		printf("Slide: 80 \n");
	}

	// slide 0
	if (( frame >= 12150) && ( frame <= 12160) && (sentA == false))
	{
		sentA = true;
		mySerial.writeByte('a');
		printf("Slide: 0 \n");
	}


}

//--------------------------------------------------------------
void testApp::draw(){
	myPlayer.draw(-100,0);
	
	ofSetColor(0, 0, 0);
	ofRect(1080, 0, 100, 720);
	ofSetColor(255, 255, 255);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

	//printf("frame: %i \n" , frame);


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
