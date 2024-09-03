# M031BSP_ADC_NTC_calculation
 M031BSP_ADC_NTC_calculation


update @ 2024/09/03

1. init ADC: PB6/ADC0_CH6 , PB12/ADC0_CH12 , PB1/ADC0_CH13 to detect NTC and calculate temperature

2. init PF2/UART0_RXD , PF3/UART0_TXD for printf

3. use PDMA to collect ADC data (check define : USE_ADC_PDMA) , doing sorting and delete head/tail , check ADC_InitChannel

4. convert ADC digital vaule into voltage (mv) , check ADC_To_Voltage

5. convert voltage (mv) into temperature , check NTC_LookupTable_10K_3_3V_Search , NTC_LookupTable_100K_3_3V_Search

6. if necessary , check define : ENABLE_NTC_DECIMAL , to enable temperature with decimal 

7. below is log capture , convert ADC into temperature at each channel 

![image](https://github.com/released/M031BSP_ADC_NTC_calculation/blob/master/log.jpg)

8. below is reference sch.

![image](https://github.com/released/M031BSP_ADC_NTC_calculation/blob/master/sch.jpg)

