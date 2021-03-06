/*
 Starter code for Data Driven App assignment CodeLab II
 Based on basic example of ofxTwitter by Christopher Baker
 <https://christopherbaker.net>
 SPDX-License-Identifier:	MIT
*/


#include "ofApp.h"

//initial app setup
void ofApp::setup()
{
    //lower app frameRate
    ofSetFrameRate(30);

    // Easily register for all search events.
    client.registerSearchEvents(this);

    /* Ensure you have created and app and updated the credentials file
     in the bin/data folder. You can create app at:
     https://apps.twitter.com */
    //Load in the credentials for access to twitter
    client.setCredentialsFromFile("credentials.json");

    /* Sets the polling interval for 6 seconds. This means new tweets
    are retrived every 6 seconds*/
    client.setPollingInterval(6000);

    // This starts a simple search for an emoticon.
    client.search(":)");
    // Tweets are retured in the callbacks onStatus(..), onError(...), etc.

    /*
     To design more complex searches, see the the API documentation here:
     https://dev.twitter.com/rest/public/search
     and:
     https://developer.twitter.com/en/docs/tweets/rules-and-filtering/overview/standard-operators
     You can then use the search object ofxTwitter::SearchQuery like this:
     
        ofxTwitter::SearchQuery query(":)");
        query.setLanguage("en");
        client.search(query);

     This would return only tweets in English
    
     To see how else you can refine the queries you should explore
     the .h files included in:
     openFrameworks/addons/ofxTwitter/libs/ofxTwitter/include/ofx/Twitter
     In particular search.h
    */

}

/*
 Draw function is used to draw to GUI.
 Current setup simply draws tweet count info to a small GUI
 Tweets are displayed in console
*/
void ofApp::draw()
{
    //sets background to black
    ofBackground(0);

    //counts number of tweets
    int total = count + countMissed;

    //string stream used to display number of tweets recived
    std::stringstream ss;
    ss << "  Received: " << count << std::endl;
    ss << "    Missed: " << countMissed << std::endl;
    ss << "     Total: " << total << std::endl;
    
    /*
     Draw string stream info to the GUI window at x: 14 / y: 14
     Bitmap string is default text with limited customisation optimisations
     Load in fonts to enhance design
    */
    ofDrawBitmapString(ss.str(), 14, 14);
}

//This function is called everytime the a new tweet is recieved
void ofApp::onStatus(const ofxTwitter::Status& status)
{
    //increase tweet count
    count++;
    
    //output the tweet author and text
    std::cout << "User: " << status.user().name() << endl;
    std::cout << "Tweet: " << status.text() << endl;
    std::cout << "\n -----------------------------\n" << endl;
    
    /*
     To see what other information you can display you should explore
     the .h files included in:
     openFrameworks/addons/ofxTwitter/libs/ofxTwitter/include/ofx/Twitter
     In particular status.h
    */
}

//returns an error message if error encountered recieving tweets
void ofApp::onError(const ofxTwitter::Error& error)
{
    std::cout << "Error: " << error.code() << " " << error.message();
}

//returns an exception message if exception encountered recieving tweets
void ofApp::onException(const std::exception& notice)
{
    std::cout << "Exception: " << notice.what();
}

void ofApp::onMessage(const ofJson& json)
{
	// This is the raw message json and is ignored here.
}
