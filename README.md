# RP2040 Zero OLED 
hi, i'm trying to make rp2040 works with the 0.91 oled, the 128x32 one, 
wired SDA, SCL to GP12 and GP13 (the doc said should be GP0 and GP1)—but these still I2C0 pins, right?
VCC to 3.3V, GND to GND
compiling firmware ran with no issue , but the screen still blank
![Uploading oled pin.png…]()

## Hardware
- **Board**: RP2040 Zero
- **OLED**: 0.91", 128x32, SSD1306
- **Wiring**:
  - SDA: GP12
  - SCL: GP13
  - VCC: 3.3V
  - GND: GND

## Problem
- QMK compiles and flashes fine 
- OLED stays blank—no “GP12/13 OLED” text.
