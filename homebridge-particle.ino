boolean gPowerState = true;
float gBrightness = 1;
char ledPin = 'D0';

void setup() {
    pinMode(D0, OUTPUT);

    updateLED();

    Particle.function("powerState", powerState);
    Particle.function("brightness", brightness);

}

int powerState(String value) {
    int result = -1;

    if (value.length() > 0) {
        gPowerState = (value.toInt() == 1);
        result = gPowerState;
    }

    updateLED();

    return result;
}

int brightness(String value) {
    int result = -1;

    if (value.length() > 0) {
        gBrightness = (float)value.toInt() / 100.0;
        result = value.toInt();
    }

    updateLED();

    return result;
}

void applyState(float b) {
    
    analogWrite(D0, (int)(b*255.0));
}

void updateLED() {
    if (gPowerState) {
        applyState(gBrightness);
    } else {
        applyState(0);
    }
}