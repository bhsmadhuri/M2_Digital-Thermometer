## Digital Thermometer:
It consists of a thermistor to sense the temperature and an electronic display of the temperature. Digital thermometers are used orally, rectally, or under the arm. It can read the temperature from 94⁰F to 105⁰F.

## Digital Thermometer components:
1) Battery: It is a button cell LR41battery made up of metal and provides around 1.5V supply to the thermometer.
2) Body: The body of the thermometer is made up of hard plastic and is 100.5mm long and its width varies from bottom to top, with the bottom being thinner.
3) Thermister: It is a semiconductor material made up of ceramic and is used to sense the temperature. It is placed at the tip of the thermometer by binding with epoxy and is enclosed inside a cap made up of stainless steel
4) LCD: It is the display of the thermometer and measures around 15.5mm long and 6.5mm wide. It displays the reading for 3 seconds and then starts flashing indicating the next temperature to be measured.
5) Circuit: It consists of an ADC and a microcontroller along with some passive components.

#### LM35 Temperature Sensor:
LM35 temperature sensor has zero offset voltage, which means at 0°C the output will be 0V. The maximum voltage it can handle is 1.5V which means it can be able to sense a maximum temperature of 150°C (1.5V / 10mV).

![image](https://user-images.githubusercontent.com/101176652/164699277-8973b535-a2ca-4081-b40b-e465c7f89bdc.png)

### Details
| PIN No | Function | Name |
| ------ | --------- | ------ |
| 1 | Supply voltage; 5V (+35V to -2V)| VCC |
| 2 | Output voltage (+6V to -1V) | Output |
| 3 | Ground (0V) | Ground |

### ADC in PIC Microcontroller PIC16F877A:
There are many types of ADC available and each one has its own speed and resolution. The most common types of ADCs are flash, successive approximation, and sigma-delta. The type of ADC used in PIC16F877A is called as the Successive approximation ADC or SAR in short. So let’s learn a bit about SAR ADC before we start using it.

Successive Approximation ADC:  The SAR ADC works with the help of a comparator and some logic conversations. This type of ADC uses a reference voltage (which is variable) and compares the input voltage with the reference voltage using a comparator and difference, which will be a digital output, is saved from the Most significant bit (MSB).  The speed of the comparison depends on the Clock frequency (Fosc) on which the PIC is operating.

Now that we know some basics on ADC, lets open our datasheet and learn how to use the ADC on our PIC16F877A MCU. The PIC we are using has 10-bit 8-channel ADC. This means the output value of our ADC will be 0-1024 (2^10) and there are 8 pins (channels) on our MCU which can read analog voltage. The value 1024 is obtained by 2^10 since our ADC is 10 bit. The eight pins which can read the analog voltage are mentioned in the datasheet. Lets look at the picture below.

![image](https://user-images.githubusercontent.com/101176652/164700015-c458923d-aaae-4cb4-bc83-9974373d4278.png)

The analog channels AN0 to AN7 are highlighted for you. Only these pins will be able to read analog voltage. So before reading an input voltage we have to specify in our code which channel has to be used to read the input voltage.  In this tutorial we will use channel 4 with a potentiometer to read the analog voltage at this channel.

The A/D module has four registers which has to be configured to read data from the Input pins. These registers are:

1) A/D Result High Register (ADRESH)
2) A/D Result Low Register (ADRESL)
3) A/D Control Register 0 (ADCON0)
4) A/D Control Register 1 (ADCON1)


![image](https://user-images.githubusercontent.com/101176652/164700242-151a219d-b4ba-447f-a785-fe63a3d63193.png)

### Advantages of Digital Thermometers:
1) Accuracy: The temperature reading doesn’t depend on scale reading and instead shown directly on the display. Hence temperature can be read exactly and accurately.
2) Speed: Digital thermometers can reach a final temperature in 5 to 10 seconds compared to conventional thermometers.
3) Safety: Digital thermometers don’t use mercury, hence the hazards of the mercury is eliminated in case the thermometer breaks.
4) Strong: The thermometer doesn’t need to be shaken for the proper mercury level, hence the risk of the tube getting broken is eliminated.
### Applications of Digital Thermometer:
1) Medical Applications: The digital thermometers are used to measure human body temperature around 37⁰C. These thermometers are mostly probe type or ear type. It measures oral, rectal, and armpit body temperature.
2) Marine Applications: Digital thermometers with a high-temperature exhaust gas sensor as the temperature sensor can be used in marine applications for measuring the local temperature.
3) Industrial Applications: Digital thermometers are also used in power plants, nuclear power plants, blast furnaces, shipbuilding industries, etc. They can measure temperature from -220⁰C to +850⁰C.
