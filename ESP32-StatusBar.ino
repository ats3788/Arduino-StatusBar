/***************************************************
 http://www.adafruit.com/

/* This is a simple Statusbar for the Phantastic
https://github.com/adafruit/Adafruit-GFX-Library
I wrote it for the ESP32 WROVERKIT_LCD
but it is easy to adopt it to other Arduino Board, with an
ILI9341 Dusplay  
Martin Michael 28.Oct.2018 Lewiston Idaho
I changed the Standart Colors is the 
WROVER_KIT_LCD.h" Header with 

 // New color definitions.  thanks to Bodmer
 // Color definitions
#define ILI9341_ALICEBLUE 0xF7DF
#define ILI9341_ANTIQUEWHITE 0xFF5A
#define ILI9341_AQUA 0x07FF
#define ILI9341_AQUAMARINE 0x7FFA
#define ILI9341_AZURE 0xF7FF
#define ILI9341_BEIGE 0xF7BB
#define ILI9341_BISQUE 0xFF38
#define ILI9341_BLACK 0x0000
#define ILI9341_BLANCHEDALMOND 0xFF59
#define ILI9341_BLUE 0x001F
#define ILI9341_BLUEVIOLET 0x895C
#define ILI9341_BROWN 0xA145
#define ILI9341_BURLYWOOD 0xDDD0
#define ILI9341_CADETBLUE 0x5CF4
#define ILI9341_CHARTREUSE 0x7FE0
#define ILI9341_CHOCOLATE 0xD343
#define ILI9341_CORAL 0xFBEA
#define ILI9341_CORNFLOWERBLUE 0x64BD
#define ILI9341_CORNSILK 0xFFDB
#define ILI9341_CRIMSON 0xD8A7
#define ILI9341_CYAN 0x07FF
#define ILI9341_DARKBLUE 0x0011
#define ILI9341_DARKCYAN 0x0451
#define ILI9341_DARKGOLDENROD 0xBC21
#define ILI9341_DARKGRAY 0xAD55
#define ILI9341_DARKGREEN 0x0320
#define ILI9341_DARKKHAKI 0xBDAD
#define ILI9341_DARKMAGENTA 0x8811
#define ILI9341_DARKOLIVEGREEN 0x5345
#define ILI9341_DARKORANGE 0xFC60
#define ILI9341_DARKORCHID 0x9999
#define ILI9341_DARKRED 0x8800
#define ILI9341_DARKSALMON 0xECAF
#define ILI9341_DARKSEAGREEN 0x8DF1
#define ILI9341_DARKSLATEBLUE 0x49F1
#define ILI9341_DARKSLATEGRAY 0x2A69
#define ILI9341_DARKTURQUOISE 0x067A
#define ILI9341_DARKVIOLET 0x901A
#define ILI9341_DEEPPINK 0xF8B2
#define ILI9341_DEEPSKYBLUE 0x05FF
#define ILI9341_DIMGRAY 0x6B4D
#define ILI9341_DODGERBLUE 0x1C9F
#define ILI9341_FIREBRICK 0xB104
#define ILI9341_FLORALWHITE 0xFFDE
#define ILI9341_FORESTGREEN 0x2444
#define ILI9341_FUCHSIA 0xF81F
#define ILI9341_GAINSBORO 0xDEFB
#define ILI9341_GHOSTWHITE 0xFFDF
#define ILI9341_GOLD 0xFEA0
#define ILI9341_GOLDENROD 0xDD24
#define ILI9341_GRAY 0x8410
#define ILI9341_GREEN 0x0400
#define ILI9341_GREENYELLOW 0xAFE5
#define ILI9341_HONEYDEW 0xF7FE
#define ILI9341_HOTPINK 0xFB56
#define ILI9341_INDIANRED 0xCAEB
#define ILI9341_INDIGO 0x4810
#define ILI9341_IVORY 0xFFFE
#define ILI9341_KHAKI 0xF731
#define ILI9341_LAVENDER 0xE73F
#define ILI9341_LAVENDERBLUSH 0xFF9E
#define ILI9341_LAWNGREEN 0x7FE0
#define ILI9341_LEMONCHIFFON 0xFFD9
#define ILI9341_LIGHTBLUE 0xAEDC
#define ILI9341_LIGHTCORAL 0xF410
#define ILI9341_LIGHTCYAN 0xE7FF
#define ILI9341_LIGHTGOLDENRODYELLOW 0xFFDA
#define ILI9341_LIGHTGREEN 0x9772
#define ILI9341_LIGHTGREY 0xD69A
#define ILI9341_LIGHTPINK 0xFDB8
#define ILI9341_LIGHTSALMON 0xFD0F
#define ILI9341_LIGHTSEAGREEN 0x2595
#define ILI9341_LIGHTSKYBLUE 0x867F
#define ILI9341_LIGHTSLATEGRAY 0x7453
#define ILI9341_LIGHTSTEELBLUE 0xB63B
#define ILI9341_LIGHTYELLOW 0xFFFC
#define ILI9341_LIME 0x07E0
#define ILI9341_LIMEGREEN 0x3666
#define ILI9341_LINEN 0xFF9C
#define ILI9341_MAGENTA 0xF81F
#define ILI9341_MAROON 0x8000
#define ILI9341_MEDIUMAQUAMARINE 0x6675
#define ILI9341_MEDIUMBLUE 0x0019
#define ILI9341_MEDIUMORCHID 0xBABA
#define ILI9341_MEDIUMPURPLE 0x939B
#define ILI9341_MEDIUMSEAGREEN 0x3D8E
#define ILI9341_MEDIUMSLATEBLUE 0x7B5D
#define ILI9341_MEDIUMSPRINGGREEN 0x07D3
#define ILI9341_MEDIUMTURQUOISE 0x4E99
#define ILI9341_MEDIUMVIOLETRED 0xC0B0
#define ILI9341_MIDNIGHTBLUE 0x18CE
#define ILI9341_MINTCREAM 0xF7FF
#define ILI9341_MISTYROSE 0xFF3C
#define ILI9341_MOCCASIN 0xFF36
#define ILI9341_NAVAJOWHITE 0xFEF5
#define ILI9341_NAVY 0x0010
#define ILI9341_OLDLACE 0xFFBC
#define ILI9341_OLIVE 0x8400
#define ILI9341_OLIVEDRAB 0x6C64
#define ILI9341_ORANGE 0xFD20
#define ILI9341_ORANGERED 0xFA20
#define ILI9341_ORCHID 0xDB9A
#define ILI9341_PALEGOLDENROD 0xEF55
#define ILI9341_PALEGREEN 0x9FD3
#define ILI9341_PALETURQUOISE 0xAF7D
#define ILI9341_PALEVIOLETRED 0xDB92
#define ILI9341_PAPAYAWHIP 0xFF7A
#define ILI9341_PEACHPUFF 0xFED7
#define ILI9341_PERU 0xCC27
#define ILI9341_PINK 0xFE19
#define ILI9341_PLUM 0xDD1B
#define ILI9341_POWDERBLUE 0xB71C
#define ILI9341_PURPLE 0x8010
#define ILI9341_RED 0xF800
#define ILI9341_ROSYBROWN 0xBC71
#define ILI9341_ROYALBLUE 0x435C
#define ILI9341_SADDLEBROWN 0x8A22
#define ILI9341_SALMON 0xFC0E
#define ILI9341_SANDYBROWN 0xF52C
#define ILI9341_SEAGREEN 0x2C4A
#define ILI9341_SEASHELL 0xFFBD
#define ILI9341_SIENNA 0xA285
#define ILI9341_SILVER 0xC618
#define ILI9341_SKYBLUE 0x867D
#define ILI9341_SLATEBLUE 0x6AD9
#define ILI9341_SLATEGRAY 0x7412
#define ILI9341_SNOW 0xFFDF
#define ILI9341_SPRINGGREEN 0x07EF
#define ILI9341_STEELBLUE 0x4416
#define ILI9341_TAN 0xD5B1
#define ILI9341_TEAL 0x0410
#define ILI9341_THISTLE 0xDDFB
#define ILI9341_TOMATO 0xFB08
#define ILI9341_TURQUOISE 0x471A
#define ILI9341_VIOLET 0xEC1D
#define ILI9341_WHEAT 0xF6F6
#define ILI9341_WHITE 0xFFFF
#define ILI9341_WHITESMOKE 0xF7BE
#define ILI9341_YELLOW 0xFFE0
#define ILI9341_YELLOWGREEN 0x9E66

This is my first publised Code 
Thank you for all you out there, this outstanding awesam Arduino Community
*/


#include "SPI.h"
#include "Adafruit_GFX.h"

//#include <MCUFRIEND_kbv.h>
#include "WROVER_KIT_LCD.h"
#include "ESP32StatusBar.h"

#define min(X, Y) (((X) < (Y)) ? (X) : (Y))

TGFXStatusBar *GFXStatusBar;
WROVER_KIT_LCD tft;
char Buffer[30];

void setup() {
	Serial.begin(115200);
	tft.begin();
	tft.setRotation(1);

	uint8_t x = 0;
	uint32_t id = tft.readId();
	if (id) {
		Serial.println("======= ILI9341 ST7789V Display Test ========");
	}
	else {
		Serial.println("======= ILI9341 ILI9341 Display Test ========");
	}
	Serial.println("============================================");
	Serial.printf("Display ID:      0x%06X\n", id);

	x = tft.readcommand8(WROVER_RDDST);
	Serial.print("Status:          0x"); Serial.println(x, HEX);
	x = tft.readcommand8(WROVER_RDDPM);
	Serial.print("Power Mode:      0x"); Serial.println(x, HEX);
	x = tft.readcommand8(WROVER_RDDMADCTL);
	Serial.print("MADCTL Mode:     0x"); Serial.println(x, HEX);
	x = tft.readcommand8(WROVER_RDDCOLMOD);
	Serial.print("Pixel Format:    0x"); Serial.println(x, HEX);
	x = tft.readcommand8(WROVER_RDDIM);
	Serial.print("Image Format:    0x"); Serial.println(x, HEX);
	x = tft.readcommand8(WROVER_RDDSDR);
	Serial.print("Self Diagnostic: 0x"); Serial.println(x, HEX);


	Serial.println(F("Done!"));
	tft.fillScreen(ILI9341_ALICEBLUE);
	tft.setTextColor(ILI9341_BLUEVIOLET);
	//Create a new Object 
	GFXStatusBar = new(TGFXStatusBar); 

	// Init the Object Top or Bottom
	GFXStatusBar->Init(&tft, sBottom, ILI9341_DARKOLIVEGREEN);
	GFXStatusBar->Draw();

	
	sprintf(Buffer, "height : %d", tft.height());
	GFXStatusBar->Add(pLeft, Buffer, ILI9341_DARKCYAN, ILI9341_LAVENDER);
	GFXStatusBar->Add(pMid, "Hallo Lilly", ILI9341_GOLD, ILI9341_GAINSBORO);
	sprintf(Buffer, "width : %d", tft.width());
	GFXStatusBar->Add(pRight, Buffer, ILI9341_SALMON, ILI9341_DIMGRAY);
	delay(2500);
}


void loop(void) {
	
	delay(1000);

	sprintf(Buffer, "Milli : %d ", millis());
	GFXStatusBar->Add(pMid, Buffer, ILI9341_CORAL, ILI9341_GAINSBORO);
}


