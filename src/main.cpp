#include "lib-includes.h"
#include "lib-telnet.h"
#include "lib-main.h"
#include "lib-ota.h"
#include "secrets.h"
#include "string.h"
#include "config.h"
#include "hack.h"

void setup()
{
	Main::add_ap(WIFI_SSID, WIFI_PW);
	Main::connect(NAME, OTA_PW, TELNET_IP, TELNET_PORT);
	// TODO: setup
	Main::connect_done();
}

void loop()
{
	OTA::loop();
	Telnet::loop();
	
	// TODO: loop
}
