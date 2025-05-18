# home-monitor

## Synopsis & Motivation

Home monitor is a simple arduino project to measure and display temperature and humidity at home.
Many homes might unknowingly have suboptimal environmental conditions, as did I.
For many years I suffered from dry skin without any real explanation as to why.
That was until I found out humidity in your home can affect and exasperbate skin conditions. 
And so, to see what the humidity in my home was, this project spawned.
Optimal conditions at home should have a humidity between 40-60%. Too low can cause sore throat, dry skin and more.
Turns out, my home had 16%(!) humidity. No wonder my skin was dry I've lived here for 5+ years!
Anyways I got a humidifier now and I continously monitor the humidity in my home due to this awesome little project.

## Requirements
- [Arduino Uno R3 Microcontroller](https://docs.arduino.cc/hardware/uno-rev3/)
- [830 Tie points breadboard](https://hitechchain.se/arduinokompatibel/tillbehor/3pcs-830-tie-points-solderless-protoboard-breadboard-kit)
- [Potentiometer 10K](https://docs.arduino.cc/learn/electronics/potentiometer-basics/)
- [DHT11 Temp/Humidity sensor](https://www.electrokit.com/en/digital-temperatur-och-fuktsensor-dht11)
- [LCD 1602 Module](http://wiki.sunfounder.cc/index.php?title=LCD1602_Module)
- [Arduino CLI](https://docs.arduino.cc/arduino-cli/dd)


### Installation

Connect the hardware components according to [this TinkerCad circuit](https://www.tinkercad.com/things/dgOiOh0pDyb-fantabulous-kieran?sharecode=1VdvSlxLCrUtM1jq7wUfUPt5aGqMD5RTtREEj_-soUg)

![tinkerimage](/images/connection.png)

- Install [Arduino CLI](https://docs.arduino.cc/arduino-cli/installation/)

- Install Adafruit DHT library in Arduino cli: ```arduino-cli lib install "Adafruit DHT sensor library"```

- Install LiquidCrystal Library for LCD: ```arduino-cli lib install "LiquidCrystal"```

- Compile the sketch: ```arduino-cli compile --fqbn arduino:avr:uno home-monitor.ino```

- Upload the sketch: ```arduino-cli upload --fqbn arduino:avr:uno --port <port> home-monitor.ino``` Replacing <port> with the serial port your board is connected to on your computer


# Voila


![real](/images/home-monitor-real.png)





