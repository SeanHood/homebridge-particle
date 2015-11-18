# homebridge-particle

![Imgur](http://i.imgur.com/EuNziHQ.jpg)

![Imgur](http://i.imgur.com/2I6KMMd.jpg)

Particle Photon plugin for [homebridge](https://github.com/nfarina/homebridge/) 

The plugin is forked/heavly based on [nikita-leonov](https://github.com/nikita-leonov)'s one [particleio-homekit](https://github.com/nikita-leonov/particleio-homekit/) to make it compatible with the current state of homebridge.

## Installation

	$ git clone https://github.com/seanhood/homebridge-particle

	$ sudo npm install -g ./homebridge-particle

	$ cp ./homebridge-particle/sample-config.json
	
	
1. Install homebridge using: npm install -g homebridge
2. Clone this repo to your machine: git clone https://gitub.com/seanhood/homebridge-particle.git
3. Install this plugin using: npm install -g ./homebridge-particle
4. Update your configuration file. See sample-config.json snippet below.
5. Update your Photon with the homebridge-particle.ino code

## Configuration
Configuration sample:
	
	{
	    "accessories": [
	        {
	            "accessory": "Particle",
	            "name": "Fairy Light's",
	            "platform_url": "https://api.particle.io/v1",
	            "device_id": "XXX",
	            "access_token": "XXX"
	        }
	    ]
	}
	
Feilds: 

- "platform": Must always be "Particle" (required)
- "name": Can be anything (required)
- "device_id": Particle Photon device ID (required)
- "access_token": Particle Photon access token (required)

## Particle Photon 

![](http://bildr.org/blog/wp-content/uploads/2012/03/rfp30n06le-arduino-lightbulb-400x218.png)

The Particle is configured very much like this with the gate pin of the RFP30N06L MOSFET going to pin D0. Further info can be found here: [http://bildr.org/2012/03/rfp30n06le-arduino/](http://bildr.org/2012/03/rfp30n06le-arduino/)

