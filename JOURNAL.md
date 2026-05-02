---
title: "UniMote"
author: "Shreerang"
description: "A universal remote which can be used on different appliances with a native application and physical buttons."
created_at: "2026-05-03"
---
# May 03: First Entry

Just setting up the project in github and forge.hackclub.com

**Total time Spent: 5 min**

# May 03: Research & wiring plan for Signal detecting.

So I researched a bit, I think this can be used. Tho it for esp8266, esp32cam is actually almost the same as esp8266, and I dont think I need to worry about it[![this](https://raw.githubusercontent.com/crankyoldgit/IRremoteESP8266/936f5e001b21f24b0f3b22069bdfe8ce749097de/assets/images/banner.svg)](https://github.com/crankyoldgit/IRremoteESP8266)

I think this wiring plan should work, why not?

| Ir module | esp32 |
| -------- | -------- |
| vcc   | 3v3   |   
| gnd   | gnd   |
| out  | gpio 14 |

and the TX RX 5V GND from esp32cam to a ftdi programmer, but meh, everyone knows these.

**Total time Spent: 25min**
