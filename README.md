# spark_neopixel_ring


Playing with 16 LED Adafruit Neopixel ring WS2812 and Spark core.

###Buy it here:
http://www.adafruit.com/products/1463

from Europe:
https://www.electronic-shop.lu/EN/products/149330

from Spain:
http://www.electan.com/neopixel-ring-ws2812-5050-rgb-led-p-4213.html

I am using it for Spark Core projects.

You can compile the project using spark-cli:
http://docs.spark.io/cli/


###Wiring:

    Spark pin GND --> WS2812 GND
    Spark pin VIN --> WS2812 VCC !! Spark VIN NOT Spark 3V3 !!
    Spark D3      --> WS2812 DATA IN


###To compile: (from folder above)

    spark cloud compile spark_neopixel_ring

###To flash it to your core:

Using cloud:

    spark cloud flash <your-core-id-here> spark_neopixel_ring

Using USB (core must be in dfu mode - http://docs.spark.io/connect/#appendix-dfu-mode-device-firmware-upgrade)

    spark flash <your-core-id-here> spark_neopixel_ring


Uses Math Library for sin and cos functions.
