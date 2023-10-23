
// Include Libraries
#include "Arduino.h"
#include "LED.h"
#include "Button.h"
#include "Relay.h"


// Pin Definitions
#define LEDR_1_PIN_VIN	3
#define LEDR_2_PIN_VIN	5
#define LEDR_3_PIN_VIN	6
#define LEDR_4_PIN_VIN	9
#define LEDR_5_PIN_VIN	10
#define LEDR_6_PIN_VIN	11
#define ARCADEBUTTON_1_PIN_NO	2
#define ARCADEBUTTON_2_PIN_NO	4
#define ARCADEBUTTON_3_PIN_NO	7
#define ARCADEBUTTON_4_PIN_NO	8
#define ARCADEBUTTON_5_PIN_NO	12
#define ARCADEBUTTON_6_PIN_NO	13
#define RELAYMODULE1_1_PIN_SIGNAL	A0
#define RELAYMODULE2_2_PIN_SIGNAL	A1



// Global variables and defines

// object initialization
LED ledR_1(LEDR_1_PIN_VIN);
LED ledR_2(LEDR_2_PIN_VIN);
LED ledR_3(LEDR_3_PIN_VIN);
LED ledR_4(LEDR_4_PIN_VIN);
LED ledR_5(LEDR_5_PIN_VIN);
LED ledR_6(LEDR_6_PIN_VIN);
Button ArcadeButton_1(ARCADEBUTTON_1_PIN_NO);
Button ArcadeButton_2(ARCADEBUTTON_2_PIN_NO);
Button ArcadeButton_3(ARCADEBUTTON_3_PIN_NO);
Button ArcadeButton_4(ARCADEBUTTON_4_PIN_NO);
Button ArcadeButton_5(ARCADEBUTTON_5_PIN_NO);
Button ArcadeButton_6(ARCADEBUTTON_6_PIN_NO);
Relay relayModule1_1(RELAYMODULE1_1_PIN_SIGNAL);
Relay relayModule2_2(RELAYMODULE2_2_PIN_SIGNAL);


// define vars for testing menu
const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    ArcadeButton_1.init();
    ArcadeButton_2.init();
    ArcadeButton_3.init();
    ArcadeButton_4.init();
    ArcadeButton_5.init();
    ArcadeButton_6.init();
    menuOption = menu();
    
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
    
    
    if(menuOption == '1') {
    // LED - Basic Red 5mm #1 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_1.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_1.off();                        // 3. turns off
    }
    else if(menuOption == '2') {
    // LED - Basic Red 5mm #2 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_2.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_2.off();                        // 3. turns off
    }
    else if(menuOption == '3') {
    // LED - Basic Red 5mm #3 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_3.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_3.off();                        // 3. turns off
    }
    else if(menuOption == '4') {
    // LED - Basic Red 5mm #4 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_4.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_4.off();                        // 3. turns off
    }
    else if(menuOption == '5') {
    // LED - Basic Red 5mm #5 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_5.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_5.off();                        // 3. turns off
    }
    else if(menuOption == '6') {
    // LED - Basic Red 5mm #6 - Test Code
    // The LED will turn on and fade till it is off
    for(int i=255 ; i> 0 ; i -= 5)
    {
    ledR_6.dim(i);                      // 1. Dim Led 
    delay(15);                               // 2. waits 5 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }                                          
    ledR_6.off();                        // 3. turns off
    }
    else if(menuOption == '7') {
    // Concave Arcade Button - Red (without LED) #1 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_1.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_1Val = ArcadeButton_1.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_1Val);

    }
    else if(menuOption == '8') {
    // Concave Arcade Button - Red (without LED) #2 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_2.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_2Val = ArcadeButton_2.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_2Val);

    }
    else if(menuOption == '9') {
    // Concave Arcade Button - Red (without LED) #3 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_3.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_3Val = ArcadeButton_3.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_3Val);

    }
    else if(menuOption == '10') {
    // Concave Arcade Button - Red (without LED) #4 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_4.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_4Val = ArcadeButton_4.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_4Val);

    }
    else if(menuOption == '11') {
    // Concave Arcade Button - Red (without LED) #5 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_5.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_5Val = ArcadeButton_5.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_5Val);

    }
    else if(menuOption == '12') {
    // Concave Arcade Button - Red (without LED) #6 - Test Code
    //Read Arcade pushbutton (without LED)  state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also ArcadeButton_6.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool ArcadeButton_6Val = ArcadeButton_6.read();
    Serial.print(F("Val: ")); Serial.println(ArcadeButton_6Val);

    }
    else if(menuOption == '13') {
    // Relay Module #1 - Test Code
    // The relay will turn on and off for 500ms (0.5 sec)
    relayModule1_1.on();       // 1. turns on
    delay(500);             // 2. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    relayModule1_1.off();      // 3. turns off.
    delay(500);             // 4. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }
    else if(menuOption == '14') {
    // Relay Module #2 - Test Code
    // The relay will turn on and off for 500ms (0.5 sec)
    relayModule2_2.on();       // 1. turns on
    delay(500);             // 2. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    relayModule2_2.off();      // 3. turns off.
    delay(500);             // 4. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }
    
    if (millis() - time0 > timeout)
    {
        menuOption = menu();
    }
    
}



// Menu function for selecting the components to be tested
// Follow serial monitor for instrcutions
char menu()
{

    Serial.println(F("\nWhich component would you like to test?"));
    Serial.println(F("(1) LED - Basic Red 5mm #1"));
    Serial.println(F("(2) LED - Basic Red 5mm #2"));
    Serial.println(F("(3) LED - Basic Red 5mm #3"));
    Serial.println(F("(4) LED - Basic Red 5mm #4"));
    Serial.println(F("(5) LED - Basic Red 5mm #5"));
    Serial.println(F("(6) LED - Basic Red 5mm #6"));
    Serial.println(F("(7) Concave Arcade Button - Red (without LED) #1"));
    Serial.println(F("(8) Concave Arcade Button - Red (without LED) #2"));
    Serial.println(F("(9) Concave Arcade Button - Red (without LED) #3"));
    Serial.println(F("(10) Concave Arcade Button - Red (without LED) #4"));
    Serial.println(F("(11) Concave Arcade Button - Red (without LED) #5"));
    Serial.println(F("(12) Concave Arcade Button - Red (without LED) #6"));
    Serial.println(F("(13) Relay Module #1"));
    Serial.println(F("(14) Relay Module #2"));
    Serial.println(F("(menu) send anything else or press on board reset button\n"));
    while (!Serial.available());

    // Read data from serial monitor if received
    while (Serial.available()) 
    {
        char c = Serial.read();
        if (isAlphaNumeric(c)) 
        {   
            
            if(c == '1') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #1"));
    		else if(c == '2') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #2"));
    		else if(c == '3') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #3"));
    		else if(c == '4') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #4"));
    		else if(c == '5') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #5"));
    		else if(c == '6') 
    			Serial.println(F("Now Testing LED - Basic Red 5mm #6"));
    		else if(c == '7') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #1"));
    		else if(c == '8') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #2"));
    		else if(c == '9') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #3"));
    		else if(c == '10') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #4"));
    		else if(c == '11') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #5"));
    		else if(c == '12') 
    			Serial.println(F("Now Testing Concave Arcade Button - Red (without LED) #6"));
    		else if(c == '13') 
    			Serial.println(F("Now Testing Relay Module #1"));
    		else if(c == '14') 
    			Serial.println(F("Now Testing Relay Module #2"));
            else
            {
                Serial.println(F("illegal input!"));
                return 0;
            }
            time0 = millis();
            return c;
        }
    }
}

/*******************************************************

*    Circuito.io is an automatic generator of schematics and code for off
*    the shelf hardware combinations.

*    Copyright (C) 2016 Roboplan Technologies Ltd.

*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.

*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.

*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*    In addition, and without limitation, to the disclaimers of warranties 
*    stated above and in the GNU General Public License version 3 (or any 
*    later version), Roboplan Technologies Ltd. ("Roboplan") offers this 
*    program subject to the following warranty disclaimers and by using 
*    this program you acknowledge and agree to the following:
*    THIS PROGRAM IS PROVIDED ON AN "AS IS" AND "AS AVAILABLE" BASIS, AND 
*    WITHOUT WARRANTIES OF ANY KIND EITHER EXPRESS OR IMPLIED.  ROBOPLAN 
*    HEREBY DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT 
*    NOT LIMITED TO IMPLIED WARRANTIES OF MERCHANTABILITY, TITLE, FITNESS 
*    FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT, AND THOSE ARISING BY 
*    STATUTE OR FROM A COURSE OF DEALING OR USAGE OF TRADE. 
*    YOUR RELIANCE ON, OR USE OF THIS PROGRAM IS AT YOUR SOLE RISK.
*    ROBOPLAN DOES NOT GUARANTEE THAT THE PROGRAM WILL BE FREE OF, OR NOT 
*    SUSCEPTIBLE TO, BUGS, SECURITY BREACHES, OR VIRUSES. ROBOPLAN DOES 
*    NOT WARRANT THAT YOUR USE OF THE PROGRAM, INCLUDING PURSUANT TO 
*    SCHEMATICS, INSTRUCTIONS OR RECOMMENDATIONS OF ROBOPLAN, WILL BE SAFE 
*    FOR PERSONAL USE OR FOR PRODUCTION OR COMMERCIAL USE, WILL NOT 
*    VIOLATE ANY THIRD PARTY RIGHTS, WILL PROVIDE THE INTENDED OR DESIRED
*    RESULTS, OR OPERATE AS YOU INTENDED OR AS MAY BE INDICATED BY ROBOPLAN. 
*    YOU HEREBY WAIVE, AGREE NOT TO ASSERT AGAINST, AND RELEASE ROBOPLAN, 
*    ITS LICENSORS AND AFFILIATES FROM, ANY CLAIMS IN CONNECTION WITH ANY OF 
*    THE ABOVE. 
********************************************************/