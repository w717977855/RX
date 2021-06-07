/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

/* C header for ICYTRXDM */

#ifndef __ICYTRXDM__
#define __ICYTRXDM__
 
#define ICYTRXDM_BASE                                              0x0
#define ICYTRXDM_INTERFACE_OFFSET                                  0x00
#define ICYTRXDM_INTERFACE_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_INTERFACE_OFFSET)
#define ICYTRXDM_INTERFACE_SZ                                      8
#define ICYTRXDM_INTERFACE                                         (volatile uint8_t *)ICYTRXDM_INTERFACE_ADDR
#define ICYTRXDM_CLOCK_OPTS_OFFSET                                 0x01
#define ICYTRXDM_CLOCK_OPTS_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_CLOCK_OPTS_OFFSET)
#define ICYTRXDM_CLOCK_OPTS_SZ                                     16
#define ICYTRXDM_CLOCK_OPTS                                        (volatile uint8_t *)ICYTRXDM_CLOCK_OPTS_ADDR
#define ICYTRXDM_SPI_CONF_OFFSET                                   0x03
#define ICYTRXDM_SPI_CONF_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_SPI_CONF_OFFSET)
#define ICYTRXDM_SPI_CONF_SZ                                       8
#define ICYTRXDM_SPI_CONF                                          (volatile uint8_t *)ICYTRXDM_SPI_CONF_ADDR
#define ICYTRXDM_IRQ_CONF_OFFSET                                   0x04
#define ICYTRXDM_IRQ_CONF_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_IRQ_CONF_OFFSET)
#define ICYTRXDM_IRQ_CONF_SZ                                       16
#define ICYTRXDM_IRQ_CONF                                          (volatile uint8_t *)ICYTRXDM_IRQ_CONF_ADDR
#define ICYTRXDM_IRQ_OPTS_OFFSET                                   0x06
#define ICYTRXDM_IRQ_OPTS_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_IRQ_OPTS_OFFSET)
#define ICYTRXDM_IRQ_OPTS_SZ                                       8
#define ICYTRXDM_IRQ_OPTS                                          (volatile uint8_t *)ICYTRXDM_IRQ_OPTS_ADDR
#define ICYTRXDM_GPIO_CONF_0_3_OFFSET                              0x07
#define ICYTRXDM_GPIO_CONF_0_3_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_GPIO_CONF_0_3_OFFSET)
#define ICYTRXDM_GPIO_CONF_0_3_SZ                                  32
#define ICYTRXDM_GPIO_CONF_0_3                                     (volatile uint8_t *)ICYTRXDM_GPIO_CONF_0_3_ADDR
#define ICYTRXDM_GPIO_CONF_4_7_OFFSET                              0x0b
#define ICYTRXDM_GPIO_CONF_4_7_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_GPIO_CONF_4_7_OFFSET)
#define ICYTRXDM_GPIO_CONF_4_7_SZ                                  32
#define ICYTRXDM_GPIO_CONF_4_7                                     (volatile uint8_t *)ICYTRXDM_GPIO_CONF_4_7_ADDR
#define ICYTRXDM_GPIO_CONF_8_9_OFFSET                              0x0f
#define ICYTRXDM_GPIO_CONF_8_9_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_GPIO_CONF_8_9_OFFSET)
#define ICYTRXDM_GPIO_CONF_8_9_SZ                                  16
#define ICYTRXDM_GPIO_CONF_8_9                                     (volatile uint8_t *)ICYTRXDM_GPIO_CONF_8_9_ADDR
#define ICYTRXDM_GPIO_OPTS_OFFSET                                  0x11
#define ICYTRXDM_GPIO_OPTS_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_GPIO_OPTS_OFFSET)
#define ICYTRXDM_GPIO_OPTS_SZ                                      24
#define ICYTRXDM_GPIO_OPTS                                         (volatile uint8_t *)ICYTRXDM_GPIO_OPTS_ADDR
#define ICYTRXDM_FIFOS_OFFSET                                      0x14
#define ICYTRXDM_FIFOS_ADDR                                        (ICYTRXDM_BASE + ICYTRXDM_FIFOS_OFFSET)
#define ICYTRXDM_FIFOS_SZ                                          8
#define ICYTRXDM_FIFOS                                             (volatile uint8_t *)ICYTRXDM_FIFOS_ADDR
#define ICYTRXDM_RADIO_CONFIG_OFFSET                               0x15
#define ICYTRXDM_RADIO_CONFIG_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_RADIO_CONFIG_OFFSET)
#define ICYTRXDM_RADIO_CONFIG_SZ                                   8
#define ICYTRXDM_RADIO_CONFIG                                      (volatile uint8_t *)ICYTRXDM_RADIO_CONFIG_ADDR
#define ICYTRXDM_ANTENNA_LUT_0_OFFSET                              0x16
#define ICYTRXDM_ANTENNA_LUT_0_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_ANTENNA_LUT_0_OFFSET)
#define ICYTRXDM_ANTENNA_LUT_0_SZ                                  32
#define ICYTRXDM_ANTENNA_LUT_0                                     (volatile uint8_t *)ICYTRXDM_ANTENNA_LUT_0_ADDR
#define ICYTRXDM_ANTENNA_LUT_1_OFFSET                              0x1a
#define ICYTRXDM_ANTENNA_LUT_1_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_ANTENNA_LUT_1_OFFSET)
#define ICYTRXDM_ANTENNA_LUT_1_SZ                                  32
#define ICYTRXDM_ANTENNA_LUT_1                                     (volatile uint8_t *)ICYTRXDM_ANTENNA_LUT_1_ADDR
#define ICYTRXDM_ANTENNAS_CONF_OFFSET                              0x1e
#define ICYTRXDM_ANTENNAS_CONF_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_ANTENNAS_CONF_OFFSET)
#define ICYTRXDM_ANTENNAS_CONF_SZ                                  8
#define ICYTRXDM_ANTENNAS_CONF                                     (volatile uint8_t *)ICYTRXDM_ANTENNAS_CONF_ADDR
#define ICYTRXDM_CRC_POLY_OFFSET                                   0x1f
#define ICYTRXDM_CRC_POLY_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_CRC_POLY_OFFSET)
#define ICYTRXDM_CRC_POLY_SZ                                       32
#define ICYTRXDM_CRC_POLY                                          (volatile uint8_t *)ICYTRXDM_CRC_POLY_ADDR
#define ICYTRXDM_CRC_RST_OFFSET                                    0x23
#define ICYTRXDM_CRC_RST_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_CRC_RST_OFFSET)
#define ICYTRXDM_CRC_RST_SZ                                        32
#define ICYTRXDM_CRC_RST                                           (volatile uint8_t *)ICYTRXDM_CRC_RST_ADDR
#define ICYTRXDM_TXDP_MAPPING_0_OFFSET                             0x27
#define ICYTRXDM_TXDP_MAPPING_0_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_0_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_0_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_0                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_0_ADDR
#define ICYTRXDM_TXDP_MAPPING_1_OFFSET                             0x2b
#define ICYTRXDM_TXDP_MAPPING_1_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_1_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_1_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_1                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_1_ADDR
#define ICYTRXDM_TXDP_MAPPING_2_OFFSET                             0x2f
#define ICYTRXDM_TXDP_MAPPING_2_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_2_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_2_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_2                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_2_ADDR
#define ICYTRXDM_TXDP_MAPPING_3_OFFSET                             0x33
#define ICYTRXDM_TXDP_MAPPING_3_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_3_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_3_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_3                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_3_ADDR
#define ICYTRXDM_TXDP_MAPPING_4_OFFSET                             0x37
#define ICYTRXDM_TXDP_MAPPING_4_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_4_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_4_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_4                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_4_ADDR
#define ICYTRXDM_TXDP_MAPPING_5_OFFSET                             0x3b
#define ICYTRXDM_TXDP_MAPPING_5_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_5_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_5_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_5                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_5_ADDR
#define ICYTRXDM_TXDP_MAPPING_6_OFFSET                             0x3f
#define ICYTRXDM_TXDP_MAPPING_6_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_6_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_6_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_6                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_6_ADDR
#define ICYTRXDM_TXDP_MAPPING_7_OFFSET                             0x43
#define ICYTRXDM_TXDP_MAPPING_7_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_7_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_7_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_7                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_7_ADDR
#define ICYTRXDM_TXDP_MAPPING_8_OFFSET                             0x47
#define ICYTRXDM_TXDP_MAPPING_8_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_8_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_8_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_8                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_8_ADDR
#define ICYTRXDM_TXDP_MAPPING_9_OFFSET                             0x4b
#define ICYTRXDM_TXDP_MAPPING_9_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_9_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_9_SZ                                 32
#define ICYTRXDM_TXDP_MAPPING_9                                    (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_9_ADDR
#define ICYTRXDM_TXDP_MAPPING_10_OFFSET                            0x4f
#define ICYTRXDM_TXDP_MAPPING_10_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_TXDP_MAPPING_10_OFFSET)
#define ICYTRXDM_TXDP_MAPPING_10_SZ                                8
#define ICYTRXDM_TXDP_MAPPING_10                                   (volatile uint8_t *)ICYTRXDM_TXDP_MAPPING_10_ADDR
#define ICYTRXDM_MUX_DEMUX_OFFSET                                  0x50
#define ICYTRXDM_MUX_DEMUX_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_MUX_DEMUX_OFFSET)
#define ICYTRXDM_MUX_DEMUX_SZ                                      32
#define ICYTRXDM_MUX_DEMUX                                         (volatile uint8_t *)ICYTRXDM_MUX_DEMUX_ADDR
#define ICYTRXDM_SWITCH_DEST_BIT_OFFSET                            0x54
#define ICYTRXDM_SWITCH_DEST_BIT_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_SWITCH_DEST_BIT_OFFSET)
#define ICYTRXDM_SWITCH_DEST_BIT_SZ                                16
#define ICYTRXDM_SWITCH_DEST_BIT                                   (volatile uint8_t *)ICYTRXDM_SWITCH_DEST_BIT_ADDR
#define ICYTRXDM_SWITCH_DEST_INT_OFFSET                            0x56
#define ICYTRXDM_SWITCH_DEST_INT_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_SWITCH_DEST_INT_OFFSET)
#define ICYTRXDM_SWITCH_DEST_INT_SZ                                32
#define ICYTRXDM_SWITCH_DEST_INT                                   (volatile uint8_t *)ICYTRXDM_SWITCH_DEST_INT_ADDR
#define ICYTRXDM_INVERT_BIT_OFFSET                                 0x5a
#define ICYTRXDM_INVERT_BIT_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_INVERT_BIT_OFFSET)
#define ICYTRXDM_INVERT_BIT_SZ                                     8
#define ICYTRXDM_INVERT_BIT                                        (volatile uint8_t *)ICYTRXDM_INVERT_BIT_ADDR
#define ICYTRXDM_BIT_REPEATER_OFFSET                               0x5b
#define ICYTRXDM_BIT_REPEATER_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_BIT_REPEATER_OFFSET)
#define ICYTRXDM_BIT_REPEATER_SZ                                   24
#define ICYTRXDM_BIT_REPEATER                                      (volatile uint8_t *)ICYTRXDM_BIT_REPEATER_ADDR
#define ICYTRXDM_DATA_WHITENING_OFFSET                             0x5e
#define ICYTRXDM_DATA_WHITENING_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_DATA_WHITENING_OFFSET)
#define ICYTRXDM_DATA_WHITENING_SZ                                 24
#define ICYTRXDM_DATA_WHITENING                                    (volatile uint8_t *)ICYTRXDM_DATA_WHITENING_ADDR
#define ICYTRXDM_IEEE802154_OFFSET                                 0x61
#define ICYTRXDM_IEEE802154_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_IEEE802154_OFFSET)
#define ICYTRXDM_IEEE802154_SZ                                     16
#define ICYTRXDM_IEEE802154                                        (volatile uint8_t *)ICYTRXDM_IEEE802154_ADDR
#define ICYTRXDM_MANCHESTER_OFFSET                                 0x63
#define ICYTRXDM_MANCHESTER_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_MANCHESTER_OFFSET)
#define ICYTRXDM_MANCHESTER_SZ                                     24
#define ICYTRXDM_MANCHESTER                                        (volatile uint8_t *)ICYTRXDM_MANCHESTER_ADDR
#define ICYTRXDM_TX_CRC_OFFSET                                     0x66
#define ICYTRXDM_TX_CRC_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_TX_CRC_OFFSET)
#define ICYTRXDM_TX_CRC_SZ                                         24
#define ICYTRXDM_TX_CRC                                            (volatile uint8_t *)ICYTRXDM_TX_CRC_ADDR
#define ICYTRXDM_CONVOLUTIONAL_CODES_OFFSET                        0x69
#define ICYTRXDM_CONVOLUTIONAL_CODES_ADDR                          (ICYTRXDM_BASE + ICYTRXDM_CONVOLUTIONAL_CODES_OFFSET)
#define ICYTRXDM_CONVOLUTIONAL_CODES_SZ                            32
#define ICYTRXDM_CONVOLUTIONAL_CODES                               (volatile uint8_t *)ICYTRXDM_CONVOLUTIONAL_CODES_ADDR
#define ICYTRXDM_PI_OVER_4_FOR_8PSK_OFFSET                         0x6d
#define ICYTRXDM_PI_OVER_4_FOR_8PSK_ADDR                           (ICYTRXDM_BASE + ICYTRXDM_PI_OVER_4_FOR_8PSK_OFFSET)
#define ICYTRXDM_PI_OVER_4_FOR_8PSK_SZ                             16
#define ICYTRXDM_PI_OVER_4_FOR_8PSK                                (volatile uint8_t *)ICYTRXDM_PI_OVER_4_FOR_8PSK_ADDR
#define ICYTRXDM_BARREL_SHIFTER_0_OFFSET                           0x6f
#define ICYTRXDM_BARREL_SHIFTER_0_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_BARREL_SHIFTER_0_OFFSET)
#define ICYTRXDM_BARREL_SHIFTER_0_SZ                               16
#define ICYTRXDM_BARREL_SHIFTER_0                                  (volatile uint8_t *)ICYTRXDM_BARREL_SHIFTER_0_ADDR
#define ICYTRXDM_BARREL_SHIFTER_1_OFFSET                           0x71
#define ICYTRXDM_BARREL_SHIFTER_1_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_BARREL_SHIFTER_1_OFFSET)
#define ICYTRXDM_BARREL_SHIFTER_1_SZ                               16
#define ICYTRXDM_BARREL_SHIFTER_1                                  (volatile uint8_t *)ICYTRXDM_BARREL_SHIFTER_1_ADDR
#define ICYTRXDM_TX_MULTIPLY_MANTISSA_OFFSET                       0x73
#define ICYTRXDM_TX_MULTIPLY_MANTISSA_ADDR                         (ICYTRXDM_BASE + ICYTRXDM_TX_MULTIPLY_MANTISSA_OFFSET)
#define ICYTRXDM_TX_MULTIPLY_MANTISSA_SZ                           16
#define ICYTRXDM_TX_MULTIPLY_MANTISSA                              (volatile uint8_t *)ICYTRXDM_TX_MULTIPLY_MANTISSA_ADDR
#define ICYTRXDM_TX_MULTIPLIER_0_OFFSET                            0x75
#define ICYTRXDM_TX_MULTIPLIER_0_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_TX_MULTIPLIER_0_OFFSET)
#define ICYTRXDM_TX_MULTIPLIER_0_SZ                                24
#define ICYTRXDM_TX_MULTIPLIER_0                                   (volatile uint8_t *)ICYTRXDM_TX_MULTIPLIER_0_ADDR
#define ICYTRXDM_TX_MULTIPLIER_1_OFFSET                            0x78
#define ICYTRXDM_TX_MULTIPLIER_1_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_TX_MULTIPLIER_1_OFFSET)
#define ICYTRXDM_TX_MULTIPLIER_1_SZ                                24
#define ICYTRXDM_TX_MULTIPLIER_1                                   (volatile uint8_t *)ICYTRXDM_TX_MULTIPLIER_1_ADDR
#define ICYTRXDM_TX_MULTIPLIER_2_OFFSET                            0x7b
#define ICYTRXDM_TX_MULTIPLIER_2_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_TX_MULTIPLIER_2_OFFSET)
#define ICYTRXDM_TX_MULTIPLIER_2_SZ                                24
#define ICYTRXDM_TX_MULTIPLIER_2                                   (volatile uint8_t *)ICYTRXDM_TX_MULTIPLIER_2_ADDR
#define ICYTRXDM_DELAY_PATH_OFFSET                                 0x7e
#define ICYTRXDM_DELAY_PATH_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_DELAY_PATH_OFFSET)
#define ICYTRXDM_DELAY_PATH_SZ                                     8
#define ICYTRXDM_DELAY_PATH                                        (volatile uint8_t *)ICYTRXDM_DELAY_PATH_ADDR
#define ICYTRXDM_GENERIC_MAPPER_OFFSET                             0x7f
#define ICYTRXDM_GENERIC_MAPPER_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_GENERIC_MAPPER_OFFSET)
#define ICYTRXDM_GENERIC_MAPPER_SZ                                 24
#define ICYTRXDM_GENERIC_MAPPER                                    (volatile uint8_t *)ICYTRXDM_GENERIC_MAPPER_ADDR
#define ICYTRXDM_PULSE_SHAPER_OFFSET                               0x82
#define ICYTRXDM_PULSE_SHAPER_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_PULSE_SHAPER_OFFSET)
#define ICYTRXDM_PULSE_SHAPER_SZ                                   128
#define ICYTRXDM_PULSE_SHAPER                                      (volatile uint8_t *)ICYTRXDM_PULSE_SHAPER_ADDR
#define ICYTRXDM_PULSE_SHAPER_OPTS_OFFSET                          0x92
#define ICYTRXDM_PULSE_SHAPER_OPTS_ADDR                            (ICYTRXDM_BASE + ICYTRXDM_PULSE_SHAPER_OPTS_OFFSET)
#define ICYTRXDM_PULSE_SHAPER_OPTS_SZ                              24
#define ICYTRXDM_PULSE_SHAPER_OPTS                                 (volatile uint8_t *)ICYTRXDM_PULSE_SHAPER_OPTS_ADDR
#define ICYTRXDM_PULSE_SHAPER_SYM0_OFFSET                          0x95
#define ICYTRXDM_PULSE_SHAPER_SYM0_ADDR                            (ICYTRXDM_BASE + ICYTRXDM_PULSE_SHAPER_SYM0_OFFSET)
#define ICYTRXDM_PULSE_SHAPER_SYM0_SZ                              16
#define ICYTRXDM_PULSE_SHAPER_SYM0                                 (volatile uint8_t *)ICYTRXDM_PULSE_SHAPER_SYM0_ADDR
#define ICYTRXDM_PULSE_SHAPER_FSK_OFFSET                           0x97
#define ICYTRXDM_PULSE_SHAPER_FSK_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_PULSE_SHAPER_FSK_OFFSET)
#define ICYTRXDM_PULSE_SHAPER_FSK_SZ                               128
#define ICYTRXDM_PULSE_SHAPER_FSK                                  (volatile uint8_t *)ICYTRXDM_PULSE_SHAPER_FSK_ADDR
#define ICYTRXDM_PULSE_SHAPER_FSK_OPTS_OFFSET                      0xa7
#define ICYTRXDM_PULSE_SHAPER_FSK_OPTS_ADDR                        (ICYTRXDM_BASE + ICYTRXDM_PULSE_SHAPER_FSK_OPTS_OFFSET)
#define ICYTRXDM_PULSE_SHAPER_FSK_OPTS_SZ                          24
#define ICYTRXDM_PULSE_SHAPER_FSK_OPTS                             (volatile uint8_t *)ICYTRXDM_PULSE_SHAPER_FSK_OPTS_ADDR
#define ICYTRXDM_INTERPOLATOR_OFFSET                               0xaa
#define ICYTRXDM_INTERPOLATOR_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_INTERPOLATOR_OFFSET)
#define ICYTRXDM_INTERPOLATOR_SZ                                   8
#define ICYTRXDM_INTERPOLATOR                                      (volatile uint8_t *)ICYTRXDM_INTERPOLATOR_ADDR
#define ICYTRXDM_DECIMATOR_OFFSET                                  0xab
#define ICYTRXDM_DECIMATOR_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_DECIMATOR_OFFSET)
#define ICYTRXDM_DECIMATOR_SZ                                      8
#define ICYTRXDM_DECIMATOR                                         (volatile uint8_t *)ICYTRXDM_DECIMATOR_ADDR
#define ICYTRXDM_DERIVATIVE_OFFSET                                 0xac
#define ICYTRXDM_DERIVATIVE_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_DERIVATIVE_OFFSET)
#define ICYTRXDM_DERIVATIVE_SZ                                     8
#define ICYTRXDM_DERIVATIVE                                        (volatile uint8_t *)ICYTRXDM_DERIVATIVE_ADDR
#define ICYTRXDM_SATURATE_OFFSET                                   0xad
#define ICYTRXDM_SATURATE_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_SATURATE_OFFSET)
#define ICYTRXDM_SATURATE_SZ                                       16
#define ICYTRXDM_SATURATE                                          (volatile uint8_t *)ICYTRXDM_SATURATE_ADDR
#define ICYTRXDM_CONST_DATA_OFFSET                                 0xaf
#define ICYTRXDM_CONST_DATA_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_CONST_DATA_OFFSET)
#define ICYTRXDM_CONST_DATA_SZ                                     16
#define ICYTRXDM_CONST_DATA                                        (volatile uint8_t *)ICYTRXDM_CONST_DATA_ADDR
#define ICYTRXDM_BLOCK_DATA_OFFSET                                 0xb1
#define ICYTRXDM_BLOCK_DATA_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_BLOCK_DATA_OFFSET)
#define ICYTRXDM_BLOCK_DATA_SZ                                     16
#define ICYTRXDM_BLOCK_DATA                                        (volatile uint8_t *)ICYTRXDM_BLOCK_DATA_ADDR
#define ICYTRXDM_HOLD_DATA_OFFSET                                  0xb3
#define ICYTRXDM_HOLD_DATA_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_HOLD_DATA_OFFSET)
#define ICYTRXDM_HOLD_DATA_SZ                                      16
#define ICYTRXDM_HOLD_DATA                                         (volatile uint8_t *)ICYTRXDM_HOLD_DATA_ADDR
#define ICYTRXDM_PA_RAMP_OFFSET                                    0xb5
#define ICYTRXDM_PA_RAMP_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_PA_RAMP_OFFSET)
#define ICYTRXDM_PA_RAMP_SZ                                        24
#define ICYTRXDM_PA_RAMP                                           (volatile uint8_t *)ICYTRXDM_PA_RAMP_ADDR
#define ICYTRXDM_PA_RAMP_2_OFFSET                                  0xb8
#define ICYTRXDM_PA_RAMP_2_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_PA_RAMP_2_OFFSET)
#define ICYTRXDM_PA_RAMP_2_SZ                                      32
#define ICYTRXDM_PA_RAMP_2                                         (volatile uint8_t *)ICYTRXDM_PA_RAMP_2_ADDR
#define ICYTRXDM_PA_RAMP_3_OFFSET                                  0xbc
#define ICYTRXDM_PA_RAMP_3_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_PA_RAMP_3_OFFSET)
#define ICYTRXDM_PA_RAMP_3_SZ                                      24
#define ICYTRXDM_PA_RAMP_3                                         (volatile uint8_t *)ICYTRXDM_PA_RAMP_3_ADDR
#define ICYTRXDM_PA_RAMP_3_FINAL_OFFSET                            0xbf
#define ICYTRXDM_PA_RAMP_3_FINAL_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_PA_RAMP_3_FINAL_OFFSET)
#define ICYTRXDM_PA_RAMP_3_FINAL_SZ                                8
#define ICYTRXDM_PA_RAMP_3_FINAL                                   (volatile uint8_t *)ICYTRXDM_PA_RAMP_3_FINAL_ADDR
#define ICYTRXDM_PA_LINEARIZE_OFFSET                               0xc0
#define ICYTRXDM_PA_LINEARIZE_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_PA_LINEARIZE_OFFSET)
#define ICYTRXDM_PA_LINEARIZE_SZ                                   120
#define ICYTRXDM_PA_LINEARIZE                                      (volatile uint8_t *)ICYTRXDM_PA_LINEARIZE_ADDR
#define ICYTRXDM_PA_OPTS_OFFSET                                    0xcf
#define ICYTRXDM_PA_OPTS_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_PA_OPTS_OFFSET)
#define ICYTRXDM_PA_OPTS_SZ                                        8
#define ICYTRXDM_PA_OPTS                                           (volatile uint8_t *)ICYTRXDM_PA_OPTS_ADDR
#define ICYTRXDM_TX_BLE_DF_OFFSET                                  0xd0
#define ICYTRXDM_TX_BLE_DF_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_TX_BLE_DF_OFFSET)
#define ICYTRXDM_TX_BLE_DF_SZ                                      24
#define ICYTRXDM_TX_BLE_DF                                         (volatile uint8_t *)ICYTRXDM_TX_BLE_DF_ADDR
#define ICYTRXDM_TX_CTE_INFO_OFFSET                                0xd3
#define ICYTRXDM_TX_CTE_INFO_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_TX_CTE_INFO_OFFSET)
#define ICYTRXDM_TX_CTE_INFO_SZ                                    8
#define ICYTRXDM_TX_CTE_INFO                                       (volatile uint8_t *)ICYTRXDM_TX_CTE_INFO_ADDR
#define ICYTRXDM_CTE_OPTS_OFFSET                                   0xd4
#define ICYTRXDM_CTE_OPTS_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_CTE_OPTS_OFFSET)
#define ICYTRXDM_CTE_OPTS_SZ                                       8
#define ICYTRXDM_CTE_OPTS                                          (volatile uint8_t *)ICYTRXDM_CTE_OPTS_ADDR
#define ICYTRXDM_TXPH_CONFIG_OFFSET                                0xd5
#define ICYTRXDM_TXPH_CONFIG_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_TXPH_CONFIG_OFFSET)
#define ICYTRXDM_TXPH_CONFIG_SZ                                    8
#define ICYTRXDM_TXPH_CONFIG                                       (volatile uint8_t *)ICYTRXDM_TXPH_CONFIG_ADDR
#define ICYTRXDM_TXPH_DATA_IN_OFFSET                               0xd6
#define ICYTRXDM_TXPH_DATA_IN_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_TXPH_DATA_IN_OFFSET)
#define ICYTRXDM_TXPH_DATA_IN_SZ                                   32
#define ICYTRXDM_TXPH_DATA_IN                                      (volatile uint8_t *)ICYTRXDM_TXPH_DATA_IN_ADDR
#define ICYTRXDM_TXPH_DATA_TYPE_IN_OFFSET                          0xda
#define ICYTRXDM_TXPH_DATA_TYPE_IN_ADDR                            (ICYTRXDM_BASE + ICYTRXDM_TXPH_DATA_TYPE_IN_OFFSET)
#define ICYTRXDM_TXPH_DATA_TYPE_IN_SZ                              8
#define ICYTRXDM_TXPH_DATA_TYPE_IN                                 (volatile uint8_t *)ICYTRXDM_TXPH_DATA_TYPE_IN_ADDR
#define ICYTRXDM_TX_BLE_DTM_OFFSET                                 0xdb
#define ICYTRXDM_TX_BLE_DTM_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_TX_BLE_DTM_OFFSET)
#define ICYTRXDM_TX_BLE_DTM_SZ                                     16
#define ICYTRXDM_TX_BLE_DTM                                        (volatile uint8_t *)ICYTRXDM_TX_BLE_DTM_ADDR
#define ICYTRXDM_RXPH_CONFIG_OFFSET                                0xdd
#define ICYTRXDM_RXPH_CONFIG_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_RXPH_CONFIG_OFFSET)
#define ICYTRXDM_RXPH_CONFIG_SZ                                    8
#define ICYTRXDM_RXPH_CONFIG                                       (volatile uint8_t *)ICYTRXDM_RXPH_CONFIG_ADDR
#define ICYTRXDM_SYNC_WORD_0_OFFSET                                0xde
#define ICYTRXDM_SYNC_WORD_0_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_SYNC_WORD_0_OFFSET)
#define ICYTRXDM_SYNC_WORD_0_SZ                                    32
#define ICYTRXDM_SYNC_WORD_0                                       (volatile uint8_t *)ICYTRXDM_SYNC_WORD_0_ADDR
#define ICYTRXDM_SYNC_WORD_1_OFFSET                                0xe2
#define ICYTRXDM_SYNC_WORD_1_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_SYNC_WORD_1_OFFSET)
#define ICYTRXDM_SYNC_WORD_1_SZ                                    32
#define ICYTRXDM_SYNC_WORD_1                                       (volatile uint8_t *)ICYTRXDM_SYNC_WORD_1_ADDR
#define ICYTRXDM_CLOCK_ADC_OFFSET                                  0xe6
#define ICYTRXDM_CLOCK_ADC_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_CLOCK_ADC_OFFSET)
#define ICYTRXDM_CLOCK_ADC_SZ                                      8
#define ICYTRXDM_CLOCK_ADC                                         (volatile uint8_t *)ICYTRXDM_CLOCK_ADC_ADDR
#define ICYTRXDM_RXDP_MAPPING_0_OFFSET                             0xe7
#define ICYTRXDM_RXDP_MAPPING_0_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_0_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_0_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_0                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_0_ADDR
#define ICYTRXDM_RXDP_MAPPING_1_OFFSET                             0xeb
#define ICYTRXDM_RXDP_MAPPING_1_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_1_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_1_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_1                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_1_ADDR
#define ICYTRXDM_RXDP_MAPPING_2_OFFSET                             0xef
#define ICYTRXDM_RXDP_MAPPING_2_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_2_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_2_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_2                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_2_ADDR
#define ICYTRXDM_RXDP_MAPPING_3_OFFSET                             0xf3
#define ICYTRXDM_RXDP_MAPPING_3_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_3_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_3_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_3                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_3_ADDR
#define ICYTRXDM_RXDP_MAPPING_4_OFFSET                             0xf7
#define ICYTRXDM_RXDP_MAPPING_4_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_4_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_4_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_4                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_4_ADDR
#define ICYTRXDM_RXDP_MAPPING_5_OFFSET                             0xfb
#define ICYTRXDM_RXDP_MAPPING_5_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_5_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_5_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_5                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_5_ADDR
#define ICYTRXDM_RXDP_MAPPING_6_OFFSET                             0xff
#define ICYTRXDM_RXDP_MAPPING_6_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_6_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_6_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_6                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_6_ADDR
#define ICYTRXDM_RXDP_MAPPING_7_OFFSET                             0x103
#define ICYTRXDM_RXDP_MAPPING_7_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_7_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_7_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_7                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_7_ADDR
#define ICYTRXDM_RXDP_MAPPING_8_OFFSET                             0x107
#define ICYTRXDM_RXDP_MAPPING_8_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_8_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_8_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_8                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_8_ADDR
#define ICYTRXDM_RXDP_MAPPING_9_OFFSET                             0x10b
#define ICYTRXDM_RXDP_MAPPING_9_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_9_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_9_SZ                                 32
#define ICYTRXDM_RXDP_MAPPING_9                                    (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_9_ADDR
#define ICYTRXDM_RXDP_MAPPING_10_OFFSET                            0x10f
#define ICYTRXDM_RXDP_MAPPING_10_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_10_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_10_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_10                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_10_ADDR
#define ICYTRXDM_RXDP_MAPPING_11_OFFSET                            0x113
#define ICYTRXDM_RXDP_MAPPING_11_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_11_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_11_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_11                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_11_ADDR
#define ICYTRXDM_RXDP_MAPPING_12_OFFSET                            0x117
#define ICYTRXDM_RXDP_MAPPING_12_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_12_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_12_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_12                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_12_ADDR
#define ICYTRXDM_RXDP_MAPPING_13_OFFSET                            0x11b
#define ICYTRXDM_RXDP_MAPPING_13_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_13_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_13_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_13                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_13_ADDR
#define ICYTRXDM_RXDP_MAPPING_14_OFFSET                            0x11f
#define ICYTRXDM_RXDP_MAPPING_14_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_14_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_14_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_14                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_14_ADDR
#define ICYTRXDM_RXDP_MAPPING_15_OFFSET                            0x123
#define ICYTRXDM_RXDP_MAPPING_15_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_15_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_15_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_15                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_15_ADDR
#define ICYTRXDM_RXDP_MAPPING_16_OFFSET                            0x127
#define ICYTRXDM_RXDP_MAPPING_16_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_16_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_16_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_16                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_16_ADDR
#define ICYTRXDM_RXDP_MAPPING_17_OFFSET                            0x12b
#define ICYTRXDM_RXDP_MAPPING_17_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_17_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_17_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_17                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_17_ADDR
#define ICYTRXDM_RXDP_MAPPING_18_OFFSET                            0x12f
#define ICYTRXDM_RXDP_MAPPING_18_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_18_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_18_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_18                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_18_ADDR
#define ICYTRXDM_RXDP_MAPPING_19_OFFSET                            0x133
#define ICYTRXDM_RXDP_MAPPING_19_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_19_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_19_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_19                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_19_ADDR
#define ICYTRXDM_RXDP_MAPPING_20_OFFSET                            0x137
#define ICYTRXDM_RXDP_MAPPING_20_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_20_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_20_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_20                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_20_ADDR
#define ICYTRXDM_RXDP_MAPPING_21_OFFSET                            0x13b
#define ICYTRXDM_RXDP_MAPPING_21_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_21_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_21_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_21                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_21_ADDR
#define ICYTRXDM_RXDP_MAPPING_22_OFFSET                            0x13f
#define ICYTRXDM_RXDP_MAPPING_22_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXDP_MAPPING_22_OFFSET)
#define ICYTRXDM_RXDP_MAPPING_22_SZ                                32
#define ICYTRXDM_RXDP_MAPPING_22                                   (volatile uint8_t *)ICYTRXDM_RXDP_MAPPING_22_ADDR
#define ICYTRXDM_RDP_UTILS_BLOCK_OFFSET                            0x143
#define ICYTRXDM_RDP_UTILS_BLOCK_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RDP_UTILS_BLOCK_OFFSET)
#define ICYTRXDM_RDP_UTILS_BLOCK_SZ                                16
#define ICYTRXDM_RDP_UTILS_BLOCK                                   (volatile uint8_t *)ICYTRXDM_RDP_UTILS_BLOCK_ADDR
#define ICYTRXDM_DT_SWITCH_0_OFFSET                                0x145
#define ICYTRXDM_DT_SWITCH_0_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_DT_SWITCH_0_OFFSET)
#define ICYTRXDM_DT_SWITCH_0_SZ                                    32
#define ICYTRXDM_DT_SWITCH_0                                       (volatile uint8_t *)ICYTRXDM_DT_SWITCH_0_ADDR
#define ICYTRXDM_DT_SWITCH_1_OFFSET                                0x149
#define ICYTRXDM_DT_SWITCH_1_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_DT_SWITCH_1_OFFSET)
#define ICYTRXDM_DT_SWITCH_1_SZ                                    32
#define ICYTRXDM_DT_SWITCH_1                                       (volatile uint8_t *)ICYTRXDM_DT_SWITCH_1_ADDR
#define ICYTRXDM_DT_SWITCH_2_OFFSET                                0x14d
#define ICYTRXDM_DT_SWITCH_2_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_DT_SWITCH_2_OFFSET)
#define ICYTRXDM_DT_SWITCH_2_SZ                                    32
#define ICYTRXDM_DT_SWITCH_2                                       (volatile uint8_t *)ICYTRXDM_DT_SWITCH_2_ADDR
#define ICYTRXDM_DT_SWITCH_3_OFFSET                                0x151
#define ICYTRXDM_DT_SWITCH_3_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_DT_SWITCH_3_OFFSET)
#define ICYTRXDM_DT_SWITCH_3_SZ                                    16
#define ICYTRXDM_DT_SWITCH_3                                       (volatile uint8_t *)ICYTRXDM_DT_SWITCH_3_ADDR
#define ICYTRXDM_DT_SWITCH_X4_OFFSET                               0x153
#define ICYTRXDM_DT_SWITCH_X4_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_DT_SWITCH_X4_OFFSET)
#define ICYTRXDM_DT_SWITCH_X4_SZ                                   32
#define ICYTRXDM_DT_SWITCH_X4                                      (volatile uint8_t *)ICYTRXDM_DT_SWITCH_X4_ADDR
#define ICYTRXDM_IQ_BALANCE_OFFSET                                 0x157
#define ICYTRXDM_IQ_BALANCE_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_IQ_BALANCE_OFFSET)
#define ICYTRXDM_IQ_BALANCE_SZ                                     24
#define ICYTRXDM_IQ_BALANCE                                        (volatile uint8_t *)ICYTRXDM_IQ_BALANCE_ADDR
#define ICYTRXDM_HP_FILTER_OFFSET                                  0x15a
#define ICYTRXDM_HP_FILTER_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_HP_FILTER_OFFSET)
#define ICYTRXDM_HP_FILTER_SZ                                      8
#define ICYTRXDM_HP_FILTER                                         (volatile uint8_t *)ICYTRXDM_HP_FILTER_ADDR
#define ICYTRXDM_LP_FILTER_OFFSET                                  0x15b
#define ICYTRXDM_LP_FILTER_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_LP_FILTER_OFFSET)
#define ICYTRXDM_LP_FILTER_SZ                                      8
#define ICYTRXDM_LP_FILTER                                         (volatile uint8_t *)ICYTRXDM_LP_FILTER_ADDR
#define ICYTRXDM_REMOVE_IF_OFFSET                                  0x15c
#define ICYTRXDM_REMOVE_IF_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_REMOVE_IF_OFFSET)
#define ICYTRXDM_REMOVE_IF_SZ                                      16
#define ICYTRXDM_REMOVE_IF                                         (volatile uint8_t *)ICYTRXDM_REMOVE_IF_ADDR
#define ICYTRXDM_RX_DECIMATOR_OFFSET                               0x15e
#define ICYTRXDM_RX_DECIMATOR_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_RX_DECIMATOR_OFFSET)
#define ICYTRXDM_RX_DECIMATOR_SZ                                   32
#define ICYTRXDM_RX_DECIMATOR                                      (volatile uint8_t *)ICYTRXDM_RX_DECIMATOR_ADDR
#define ICYTRXDM_FRACTIONAL_DECIMATOR_OFFSET                       0x162
#define ICYTRXDM_FRACTIONAL_DECIMATOR_ADDR                         (ICYTRXDM_BASE + ICYTRXDM_FRACTIONAL_DECIMATOR_OFFSET)
#define ICYTRXDM_FRACTIONAL_DECIMATOR_SZ                           8
#define ICYTRXDM_FRACTIONAL_DECIMATOR                              (volatile uint8_t *)ICYTRXDM_FRACTIONAL_DECIMATOR_ADDR
#define ICYTRXDM_RX_DERIVATIVE_OFFSET                              0x163
#define ICYTRXDM_RX_DERIVATIVE_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_RX_DERIVATIVE_OFFSET)
#define ICYTRXDM_RX_DERIVATIVE_SZ                                  8
#define ICYTRXDM_RX_DERIVATIVE                                     (volatile uint8_t *)ICYTRXDM_RX_DERIVATIVE_ADDR
#define ICYTRXDM_CORRELATOR_OFFSET                                 0x164
#define ICYTRXDM_CORRELATOR_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_CORRELATOR_OFFSET)
#define ICYTRXDM_CORRELATOR_SZ                                     32
#define ICYTRXDM_CORRELATOR                                        (volatile uint8_t *)ICYTRXDM_CORRELATOR_ADDR
#define ICYTRXDM_CORRELATOR_CMDS_OFFSET                            0x168
#define ICYTRXDM_CORRELATOR_CMDS_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_CORRELATOR_CMDS_OFFSET)
#define ICYTRXDM_CORRELATOR_CMDS_SZ                                16
#define ICYTRXDM_CORRELATOR_CMDS                                   (volatile uint8_t *)ICYTRXDM_CORRELATOR_CMDS_ADDR
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0_OFFSET                0x16a
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0_ADDR                  (ICYTRXDM_BASE + ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0_OFFSET)
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0_SZ                    32
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0                       (volatile uint8_t *)ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_0_ADDR
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1_OFFSET                0x16e
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1_ADDR                  (ICYTRXDM_BASE + ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1_OFFSET)
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1_SZ                    32
#define ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1                       (volatile uint8_t *)ICYTRXDM_MATCHED_FILTER_0_PS_COEFS_1_ADDR
#define ICYTRXDM_MATCHED_FILTER_0_OFFSET                           0x172
#define ICYTRXDM_MATCHED_FILTER_0_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_MATCHED_FILTER_0_OFFSET)
#define ICYTRXDM_MATCHED_FILTER_0_SZ                               8
#define ICYTRXDM_MATCHED_FILTER_0                                  (volatile uint8_t *)ICYTRXDM_MATCHED_FILTER_0_ADDR
#define ICYTRXDM_MATCHED_FILTER_1_PS_COEFS_OFFSET                  0x173
#define ICYTRXDM_MATCHED_FILTER_1_PS_COEFS_ADDR                    (ICYTRXDM_BASE + ICYTRXDM_MATCHED_FILTER_1_PS_COEFS_OFFSET)
#define ICYTRXDM_MATCHED_FILTER_1_PS_COEFS_SZ                      32
#define ICYTRXDM_MATCHED_FILTER_1_PS_COEFS                         (volatile uint8_t *)ICYTRXDM_MATCHED_FILTER_1_PS_COEFS_ADDR
#define ICYTRXDM_MATCHED_FILTER_1_OFFSET                           0x177
#define ICYTRXDM_MATCHED_FILTER_1_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_MATCHED_FILTER_1_OFFSET)
#define ICYTRXDM_MATCHED_FILTER_1_SZ                               8
#define ICYTRXDM_MATCHED_FILTER_1                                  (volatile uint8_t *)ICYTRXDM_MATCHED_FILTER_1_ADDR
#define ICYTRXDM_CLOCK_RECOVERY_OFFSET                             0x178
#define ICYTRXDM_CLOCK_RECOVERY_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_CLOCK_RECOVERY_OFFSET)
#define ICYTRXDM_CLOCK_RECOVERY_SZ                                 8
#define ICYTRXDM_CLOCK_RECOVERY                                    (volatile uint8_t *)ICYTRXDM_CLOCK_RECOVERY_ADDR
#define ICYTRXDM_TED_TIME_CONSTANTS_OFFSET                         0x179
#define ICYTRXDM_TED_TIME_CONSTANTS_ADDR                           (ICYTRXDM_BASE + ICYTRXDM_TED_TIME_CONSTANTS_OFFSET)
#define ICYTRXDM_TED_TIME_CONSTANTS_SZ                             16
#define ICYTRXDM_TED_TIME_CONSTANTS                                (volatile uint8_t *)ICYTRXDM_TED_TIME_CONSTANTS_ADDR
#define ICYTRXDM_CARRIER_RECOVERY_OFFSET                           0x17b
#define ICYTRXDM_CARRIER_RECOVERY_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_CARRIER_RECOVERY_OFFSET)
#define ICYTRXDM_CARRIER_RECOVERY_SZ                               16
#define ICYTRXDM_CARRIER_RECOVERY                                  (volatile uint8_t *)ICYTRXDM_CARRIER_RECOVERY_ADDR
#define ICYTRXDM_BLR_DEMAPPER_OFFSET                               0x17d
#define ICYTRXDM_BLR_DEMAPPER_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_BLR_DEMAPPER_OFFSET)
#define ICYTRXDM_BLR_DEMAPPER_SZ                                   16
#define ICYTRXDM_BLR_DEMAPPER                                      (volatile uint8_t *)ICYTRXDM_BLR_DEMAPPER_ADDR
#define ICYTRXDM_BLR_SYNC_DETECT_OFFSET                            0x17f
#define ICYTRXDM_BLR_SYNC_DETECT_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_BLR_SYNC_DETECT_OFFSET)
#define ICYTRXDM_BLR_SYNC_DETECT_SZ                                16
#define ICYTRXDM_BLR_SYNC_DETECT                                   (volatile uint8_t *)ICYTRXDM_BLR_SYNC_DETECT_ADDR
#define ICYTRXDM_DPSK_DEMOD_OFFSET                                 0x181
#define ICYTRXDM_DPSK_DEMOD_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_DPSK_DEMOD_OFFSET)
#define ICYTRXDM_DPSK_DEMOD_SZ                                     8
#define ICYTRXDM_DPSK_DEMOD                                        (volatile uint8_t *)ICYTRXDM_DPSK_DEMOD_ADDR
#define ICYTRXDM_IEEE_802154_OFFSET                                0x182
#define ICYTRXDM_IEEE_802154_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_IEEE_802154_OFFSET)
#define ICYTRXDM_IEEE_802154_SZ                                    16
#define ICYTRXDM_IEEE_802154                                       (volatile uint8_t *)ICYTRXDM_IEEE_802154_ADDR
#define ICYTRXDM_VITERBI_GFSK_0_OFFSET                             0x184
#define ICYTRXDM_VITERBI_GFSK_0_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_VITERBI_GFSK_0_OFFSET)
#define ICYTRXDM_VITERBI_GFSK_0_SZ                                 32
#define ICYTRXDM_VITERBI_GFSK_0                                    (volatile uint8_t *)ICYTRXDM_VITERBI_GFSK_0_ADDR
#define ICYTRXDM_VITERBI_GFSK_1_OFFSET                             0x188
#define ICYTRXDM_VITERBI_GFSK_1_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_VITERBI_GFSK_1_OFFSET)
#define ICYTRXDM_VITERBI_GFSK_1_SZ                                 16
#define ICYTRXDM_VITERBI_GFSK_1                                    (volatile uint8_t *)ICYTRXDM_VITERBI_GFSK_1_ADDR
#define ICYTRXDM_DECODER_OFFSET                                    0x18a
#define ICYTRXDM_DECODER_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_DECODER_OFFSET)
#define ICYTRXDM_DECODER_SZ                                        16
#define ICYTRXDM_DECODER                                           (volatile uint8_t *)ICYTRXDM_DECODER_ADDR
#define ICYTRXDM_VITERBI_CONV_OFFSET                               0x18c
#define ICYTRXDM_VITERBI_CONV_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_VITERBI_CONV_OFFSET)
#define ICYTRXDM_VITERBI_CONV_SZ                                   24
#define ICYTRXDM_VITERBI_CONV                                      (volatile uint8_t *)ICYTRXDM_VITERBI_CONV_ADDR
#define ICYTRXDM_BLR_PACKET_LEN_OFFSET                             0x18f
#define ICYTRXDM_BLR_PACKET_LEN_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_BLR_PACKET_LEN_OFFSET)
#define ICYTRXDM_BLR_PACKET_LEN_SZ                                 8
#define ICYTRXDM_BLR_PACKET_LEN                                    (volatile uint8_t *)ICYTRXDM_BLR_PACKET_LEN_ADDR
#define ICYTRXDM_MULT_0_OFFSET                                     0x190
#define ICYTRXDM_MULT_0_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_MULT_0_OFFSET)
#define ICYTRXDM_MULT_0_SZ                                         24
#define ICYTRXDM_MULT_0                                            (volatile uint8_t *)ICYTRXDM_MULT_0_ADDR
#define ICYTRXDM_MULT_1_OFFSET                                     0x193
#define ICYTRXDM_MULT_1_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_MULT_1_OFFSET)
#define ICYTRXDM_MULT_1_SZ                                         24
#define ICYTRXDM_MULT_1                                            (volatile uint8_t *)ICYTRXDM_MULT_1_ADDR
#define ICYTRXDM_MULT_2_OFFSET                                     0x196
#define ICYTRXDM_MULT_2_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_MULT_2_OFFSET)
#define ICYTRXDM_MULT_2_SZ                                         16
#define ICYTRXDM_MULT_2                                            (volatile uint8_t *)ICYTRXDM_MULT_2_ADDR
#define ICYTRXDM_MULT_3_OFFSET                                     0x198
#define ICYTRXDM_MULT_3_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_MULT_3_OFFSET)
#define ICYTRXDM_MULT_3_SZ                                         16
#define ICYTRXDM_MULT_3                                            (volatile uint8_t *)ICYTRXDM_MULT_3_ADDR
#define ICYTRXDM_RX_BLE_DF_OFFSET                                  0x19a
#define ICYTRXDM_RX_BLE_DF_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_RX_BLE_DF_OFFSET)
#define ICYTRXDM_RX_BLE_DF_SZ                                      32
#define ICYTRXDM_RX_BLE_DF                                         (volatile uint8_t *)ICYTRXDM_RX_BLE_DF_ADDR
#define ICYTRXDM_RX_CTE_INFO_OFFSET                                0x19e
#define ICYTRXDM_RX_CTE_INFO_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_RX_CTE_INFO_OFFSET)
#define ICYTRXDM_RX_CTE_INFO_SZ                                    8
#define ICYTRXDM_RX_CTE_INFO                                       (volatile uint8_t *)ICYTRXDM_RX_CTE_INFO_ADDR
#define ICYTRXDM_LIMIT_RATE_OFFSET                                 0x19f
#define ICYTRXDM_LIMIT_RATE_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_LIMIT_RATE_OFFSET)
#define ICYTRXDM_LIMIT_RATE_SZ                                     8
#define ICYTRXDM_LIMIT_RATE                                        (volatile uint8_t *)ICYTRXDM_LIMIT_RATE_ADDR
#define ICYTRXDM_RX_FLUSH_OFFSET                                   0x1a0
#define ICYTRXDM_RX_FLUSH_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_RX_FLUSH_OFFSET)
#define ICYTRXDM_RX_FLUSH_SZ                                       16
#define ICYTRXDM_RX_FLUSH                                          (volatile uint8_t *)ICYTRXDM_RX_FLUSH_ADDR
#define ICYTRXDM_RSSI_CONF_OFFSET                                  0x1a2
#define ICYTRXDM_RSSI_CONF_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_RSSI_CONF_OFFSET)
#define ICYTRXDM_RSSI_CONF_SZ                                      8
#define ICYTRXDM_RSSI_CONF                                         (volatile uint8_t *)ICYTRXDM_RSSI_CONF_ADDR
#define ICYTRXDM_RX_MISC_OFFSET                                    0x1a3
#define ICYTRXDM_RX_MISC_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_RX_MISC_OFFSET)
#define ICYTRXDM_RX_MISC_SZ                                        8
#define ICYTRXDM_RX_MISC                                           (volatile uint8_t *)ICYTRXDM_RX_MISC_ADDR
#define ICYTRXDM_CTE_AUTO_PULL_OFFSET                              0x1a4
#define ICYTRXDM_CTE_AUTO_PULL_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_CTE_AUTO_PULL_OFFSET)
#define ICYTRXDM_CTE_AUTO_PULL_SZ                                  8
#define ICYTRXDM_CTE_AUTO_PULL                                     (volatile uint8_t *)ICYTRXDM_CTE_AUTO_PULL_ADDR
#define ICYTRXDM_AGC_CTRL_OFFSET                                   0x1a5
#define ICYTRXDM_AGC_CTRL_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_AGC_CTRL_OFFSET)
#define ICYTRXDM_AGC_CTRL_SZ                                       8
#define ICYTRXDM_AGC_CTRL                                          (volatile uint8_t *)ICYTRXDM_AGC_CTRL_ADDR
#define ICYTRXDM_AGC_CONF_OFFSET                                   0x1a6
#define ICYTRXDM_AGC_CONF_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_AGC_CONF_OFFSET)
#define ICYTRXDM_AGC_CONF_SZ                                       24
#define ICYTRXDM_AGC_CONF                                          (volatile uint8_t *)ICYTRXDM_AGC_CONF_ADDR
#define ICYTRXDM_AGC_VALS_TO_AGC_OFFSET                            0x1a9
#define ICYTRXDM_AGC_VALS_TO_AGC_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_AGC_VALS_TO_AGC_OFFSET)
#define ICYTRXDM_AGC_VALS_TO_AGC_SZ                                8
#define ICYTRXDM_AGC_VALS_TO_AGC                                   (volatile uint8_t *)ICYTRXDM_AGC_VALS_TO_AGC_ADDR
#define ICYTRXDM_AGC_ADC_LIMIT_DETECT_OFFSET                       0x1aa
#define ICYTRXDM_AGC_ADC_LIMIT_DETECT_ADDR                         (ICYTRXDM_BASE + ICYTRXDM_AGC_ADC_LIMIT_DETECT_OFFSET)
#define ICYTRXDM_AGC_ADC_LIMIT_DETECT_SZ                           40
#define ICYTRXDM_AGC_ADC_LIMIT_DETECT                              (volatile uint8_t *)ICYTRXDM_AGC_ADC_LIMIT_DETECT_ADDR
#define ICYTRXDM_AGC_DBG_OFFSET                                    0x1af
#define ICYTRXDM_AGC_DBG_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_AGC_DBG_OFFSET)
#define ICYTRXDM_AGC_DBG_SZ                                        8
#define ICYTRXDM_AGC_DBG                                           (volatile uint8_t *)ICYTRXDM_AGC_DBG_ADDR
#define ICYTRXDM_OBSERVE_POINT_CFG_OFFSET                          0x1b0
#define ICYTRXDM_OBSERVE_POINT_CFG_ADDR                            (ICYTRXDM_BASE + ICYTRXDM_OBSERVE_POINT_CFG_OFFSET)
#define ICYTRXDM_OBSERVE_POINT_CFG_SZ                              8
#define ICYTRXDM_OBSERVE_POINT_CFG                                 (volatile uint8_t *)ICYTRXDM_OBSERVE_POINT_CFG_ADDR
#define ICYTRXDM_DC_OFFSET_CAL_OFFSET                              0x1b1
#define ICYTRXDM_DC_OFFSET_CAL_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_DC_OFFSET_CAL_OFFSET)
#define ICYTRXDM_DC_OFFSET_CAL_SZ                                  32
#define ICYTRXDM_DC_OFFSET_CAL                                     (volatile uint8_t *)ICYTRXDM_DC_OFFSET_CAL_ADDR
#define ICYTRXDM_SEQUENCER_CONFIG_OFFSET                           0x1b5
#define ICYTRXDM_SEQUENCER_CONFIG_ADDR                             (ICYTRXDM_BASE + ICYTRXDM_SEQUENCER_CONFIG_OFFSET)
#define ICYTRXDM_SEQUENCER_CONFIG_SZ                               8
#define ICYTRXDM_SEQUENCER_CONFIG                                  (volatile uint8_t *)ICYTRXDM_SEQUENCER_CONFIG_ADDR
#define ICYTRXDM_SEQUENCER_OFFSET                                  0x1b6
#define ICYTRXDM_SEQUENCER_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_SEQUENCER_OFFSET)
#define ICYTRXDM_SEQUENCER_SZ                                      48
#define ICYTRXDM_SEQUENCER                                         (volatile uint8_t *)ICYTRXDM_SEQUENCER_ADDR
#define ICYTRXDM_SEQUENCER_OPTS_OFFSET                             0x1bc
#define ICYTRXDM_SEQUENCER_OPTS_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_SEQUENCER_OPTS_OFFSET)
#define ICYTRXDM_SEQUENCER_OPTS_SZ                                 8
#define ICYTRXDM_SEQUENCER_OPTS                                    (volatile uint8_t *)ICYTRXDM_SEQUENCER_OPTS_ADDR
#define ICYTRXDM_SEQUENCER_TRIGS_OFFSET                            0x1bd
#define ICYTRXDM_SEQUENCER_TRIGS_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_SEQUENCER_TRIGS_OFFSET)
#define ICYTRXDM_SEQUENCER_TRIGS_SZ                                24
#define ICYTRXDM_SEQUENCER_TRIGS                                   (volatile uint8_t *)ICYTRXDM_SEQUENCER_TRIGS_ADDR
#define ICYTRXDM_PROT_TIMER_CONF_OFFSET                            0x1c0
#define ICYTRXDM_PROT_TIMER_CONF_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_PROT_TIMER_CONF_OFFSET)
#define ICYTRXDM_PROT_TIMER_CONF_SZ                                24
#define ICYTRXDM_PROT_TIMER_CONF                                   (volatile uint8_t *)ICYTRXDM_PROT_TIMER_CONF_ADDR
#define ICYTRXDM_PT_DELTA_TS_0_OFFSET                              0x1c3
#define ICYTRXDM_PT_DELTA_TS_0_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_PT_DELTA_TS_0_OFFSET)
#define ICYTRXDM_PT_DELTA_TS_0_SZ                                  24
#define ICYTRXDM_PT_DELTA_TS_0                                     (volatile uint8_t *)ICYTRXDM_PT_DELTA_TS_0_ADDR
#define ICYTRXDM_PT_DELTA_TS_1_OFFSET                              0x1c6
#define ICYTRXDM_PT_DELTA_TS_1_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_PT_DELTA_TS_1_OFFSET)
#define ICYTRXDM_PT_DELTA_TS_1_SZ                                  16
#define ICYTRXDM_PT_DELTA_TS_1                                     (volatile uint8_t *)ICYTRXDM_PT_DELTA_TS_1_ADDR
#define ICYTRXDM_PT_DELTA_TS_2_OFFSET                              0x1c8
#define ICYTRXDM_PT_DELTA_TS_2_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_PT_DELTA_TS_2_OFFSET)
#define ICYTRXDM_PT_DELTA_TS_2_SZ                                  16
#define ICYTRXDM_PT_DELTA_TS_2                                     (volatile uint8_t *)ICYTRXDM_PT_DELTA_TS_2_ADDR
#define ICYTRXDM_PT_DELTA_TS_3_OFFSET                              0x1ca
#define ICYTRXDM_PT_DELTA_TS_3_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_PT_DELTA_TS_3_OFFSET)
#define ICYTRXDM_PT_DELTA_TS_3_SZ                                  16
#define ICYTRXDM_PT_DELTA_TS_3                                     (volatile uint8_t *)ICYTRXDM_PT_DELTA_TS_3_ADDR
#define ICYTRXDM_DCO_CAL_OPTS_OFFSET                               0x1cc
#define ICYTRXDM_DCO_CAL_OPTS_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_DCO_CAL_OPTS_OFFSET)
#define ICYTRXDM_DCO_CAL_OPTS_SZ                                   16
#define ICYTRXDM_DCO_CAL_OPTS                                      (volatile uint8_t *)ICYTRXDM_DCO_CAL_OPTS_ADDR
#define ICYTRXDM_TEST_BUS_CONFIG_OFFSET                            0x1ce
#define ICYTRXDM_TEST_BUS_CONFIG_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_TEST_BUS_CONFIG_OFFSET)
#define ICYTRXDM_TEST_BUS_CONFIG_SZ                                8
#define ICYTRXDM_TEST_BUS_CONFIG                                   (volatile uint8_t *)ICYTRXDM_TEST_BUS_CONFIG_ADDR
#define ICYTRXDM_DD2_DELAY_OFFSET                                  0x1cf
#define ICYTRXDM_DD2_DELAY_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_DD2_DELAY_OFFSET)
#define ICYTRXDM_DD2_DELAY_SZ                                      8
#define ICYTRXDM_DD2_DELAY                                         (volatile uint8_t *)ICYTRXDM_DD2_DELAY_ADDR
#define ICYTRXDM_PA_ANA_CONFIG_OFFSET                              0x1d0
#define ICYTRXDM_PA_ANA_CONFIG_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_PA_ANA_CONFIG_OFFSET)
#define ICYTRXDM_PA_ANA_CONFIG_SZ                                  16
#define ICYTRXDM_PA_ANA_CONFIG                                     (volatile uint8_t *)ICYTRXDM_PA_ANA_CONFIG_ADDR
#define ICYTRXDM_PA_RFSENSE_OFFSET                                 0x1d2
#define ICYTRXDM_PA_RFSENSE_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_PA_RFSENSE_OFFSET)
#define ICYTRXDM_PA_RFSENSE_SZ                                     8
#define ICYTRXDM_PA_RFSENSE                                        (volatile uint8_t *)ICYTRXDM_PA_RFSENSE_ADDR
#define ICYTRXDM_DIVIDERS_CONFIG_OFFSET                            0x1d3
#define ICYTRXDM_DIVIDERS_CONFIG_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_DIVIDERS_CONFIG_OFFSET)
#define ICYTRXDM_DIVIDERS_CONFIG_SZ                                8
#define ICYTRXDM_DIVIDERS_CONFIG                                   (volatile uint8_t *)ICYTRXDM_DIVIDERS_CONFIG_ADDR
#define ICYTRXDM_MIXER_CONFIG_OFFSET                               0x1d4
#define ICYTRXDM_MIXER_CONFIG_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_MIXER_CONFIG_OFFSET)
#define ICYTRXDM_MIXER_CONFIG_SZ                                   8
#define ICYTRXDM_MIXER_CONFIG                                      (volatile uint8_t *)ICYTRXDM_MIXER_CONFIG_ADDR
#define ICYTRXDM_LNA_CONFIG_OFFSET                                 0x1d5
#define ICYTRXDM_LNA_CONFIG_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_LNA_CONFIG_OFFSET)
#define ICYTRXDM_LNA_CONFIG_SZ                                     16
#define ICYTRXDM_LNA_CONFIG                                        (volatile uint8_t *)ICYTRXDM_LNA_CONFIG_ADDR
#define ICYTRXDM_LNA_DET_CONFIG_OFFSET                             0x1d7
#define ICYTRXDM_LNA_DET_CONFIG_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_LNA_DET_CONFIG_OFFSET)
#define ICYTRXDM_LNA_DET_CONFIG_SZ                                 8
#define ICYTRXDM_LNA_DET_CONFIG                                    (volatile uint8_t *)ICYTRXDM_LNA_DET_CONFIG_ADDR
#define ICYTRXDM_ADC_CONF_OFFSET                                   0x1d8
#define ICYTRXDM_ADC_CONF_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_ADC_CONF_OFFSET)
#define ICYTRXDM_ADC_CONF_SZ                                       16
#define ICYTRXDM_ADC_CONF                                          (volatile uint8_t *)ICYTRXDM_ADC_CONF_ADDR
#define ICYTRXDM_ADC_ENABLES_OFFSET                                0x1da
#define ICYTRXDM_ADC_ENABLES_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_ADC_ENABLES_OFFSET)
#define ICYTRXDM_ADC_ENABLES_SZ                                    16
#define ICYTRXDM_ADC_ENABLES                                       (volatile uint8_t *)ICYTRXDM_ADC_ENABLES_ADDR
#define ICYTRXDM_BQF_CONF_1_OFFSET                                 0x1dc
#define ICYTRXDM_BQF_CONF_1_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_BQF_CONF_1_OFFSET)
#define ICYTRXDM_BQF_CONF_1_SZ                                     24
#define ICYTRXDM_BQF_CONF_1                                        (volatile uint8_t *)ICYTRXDM_BQF_CONF_1_ADDR
#define ICYTRXDM_BQF_CONF_2_OFFSET                                 0x1df
#define ICYTRXDM_BQF_CONF_2_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_BQF_CONF_2_OFFSET)
#define ICYTRXDM_BQF_CONF_2_SZ                                     16
#define ICYTRXDM_BQF_CONF_2                                        (volatile uint8_t *)ICYTRXDM_BQF_CONF_2_ADDR
#define ICYTRXDM_BQF_ENABLES_OFFSET                                0x1e1
#define ICYTRXDM_BQF_ENABLES_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_BQF_ENABLES_OFFSET)
#define ICYTRXDM_BQF_ENABLES_SZ                                    8
#define ICYTRXDM_BQF_ENABLES                                       (volatile uint8_t *)ICYTRXDM_BQF_ENABLES_ADDR
#define ICYTRXDM_XO_CONF_OFFSET                                    0x1e2
#define ICYTRXDM_XO_CONF_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_XO_CONF_OFFSET)
#define ICYTRXDM_XO_CONF_SZ                                        32
#define ICYTRXDM_XO_CONF                                           (volatile uint8_t *)ICYTRXDM_XO_CONF_ADDR
#define ICYTRXDM_XO_FREQ_TRIM_OFFSET                               0x1e6
#define ICYTRXDM_XO_FREQ_TRIM_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_XO_FREQ_TRIM_OFFSET)
#define ICYTRXDM_XO_FREQ_TRIM_SZ                                   8
#define ICYTRXDM_XO_FREQ_TRIM                                      (volatile uint8_t *)ICYTRXDM_XO_FREQ_TRIM_ADDR
#define ICYTRXDM_RXTX_LDO_PALOW_OFFSET                             0x1e7
#define ICYTRXDM_RXTX_LDO_PALOW_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RXTX_LDO_PALOW_OFFSET)
#define ICYTRXDM_RXTX_LDO_PALOW_SZ                                 16
#define ICYTRXDM_RXTX_LDO_PALOW                                    (volatile uint8_t *)ICYTRXDM_RXTX_LDO_PALOW_ADDR
#define ICYTRXDM_RXTX_LDO_PAHIGH_OFFSET                            0x1e9
#define ICYTRXDM_RXTX_LDO_PAHIGH_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXTX_LDO_PAHIGH_OFFSET)
#define ICYTRXDM_RXTX_LDO_PAHIGH_SZ                                16
#define ICYTRXDM_RXTX_LDO_PAHIGH                                   (volatile uint8_t *)ICYTRXDM_RXTX_LDO_PAHIGH_ADDR
#define ICYTRXDM_RXTX_LDO_ADC_OFFSET                               0x1eb
#define ICYTRXDM_RXTX_LDO_ADC_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_RXTX_LDO_ADC_OFFSET)
#define ICYTRXDM_RXTX_LDO_ADC_SZ                                   16
#define ICYTRXDM_RXTX_LDO_ADC                                      (volatile uint8_t *)ICYTRXDM_RXTX_LDO_ADC_ADDR
#define ICYTRXDM_RXTX_LDO_ADCBUF_OFFSET                            0x1ed
#define ICYTRXDM_RXTX_LDO_ADCBUF_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_RXTX_LDO_ADCBUF_OFFSET)
#define ICYTRXDM_RXTX_LDO_ADCBUF_SZ                                16
#define ICYTRXDM_RXTX_LDO_ADCBUF                                   (volatile uint8_t *)ICYTRXDM_RXTX_LDO_ADCBUF_ADDR
#define ICYTRXDM_RXTX_PMU_OPTS_OFFSET                              0x1ef
#define ICYTRXDM_RXTX_PMU_OPTS_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_RXTX_PMU_OPTS_OFFSET)
#define ICYTRXDM_RXTX_PMU_OPTS_SZ                                  16
#define ICYTRXDM_RXTX_PMU_OPTS                                     (volatile uint8_t *)ICYTRXDM_RXTX_PMU_OPTS_ADDR
#define ICYTRXDM_DIG_LDO_DIG_OFFSET                                0x1f1
#define ICYTRXDM_DIG_LDO_DIG_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_DIG_LDO_DIG_OFFSET)
#define ICYTRXDM_DIG_LDO_DIG_SZ                                    16
#define ICYTRXDM_DIG_LDO_DIG                                       (volatile uint8_t *)ICYTRXDM_DIG_LDO_DIG_ADDR
#define ICYTRXDM_REFE_LDO_MISC_OFFSET                              0x1f3
#define ICYTRXDM_REFE_LDO_MISC_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_REFE_LDO_MISC_OFFSET)
#define ICYTRXDM_REFE_LDO_MISC_SZ                                  16
#define ICYTRXDM_REFE_LDO_MISC                                     (volatile uint8_t *)ICYTRXDM_REFE_LDO_MISC_ADDR
#define ICYTRXDM_REFE_LDO_BUF_OFFSET                               0x1f5
#define ICYTRXDM_REFE_LDO_BUF_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_REFE_LDO_BUF_OFFSET)
#define ICYTRXDM_REFE_LDO_BUF_SZ                                   16
#define ICYTRXDM_REFE_LDO_BUF                                      (volatile uint8_t *)ICYTRXDM_REFE_LDO_BUF_ADDR
#define ICYTRXDM_REFE_LDO_PREPA_OFFSET                             0x1f7
#define ICYTRXDM_REFE_LDO_PREPA_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_REFE_LDO_PREPA_OFFSET)
#define ICYTRXDM_REFE_LDO_PREPA_SZ                                 16
#define ICYTRXDM_REFE_LDO_PREPA                                    (volatile uint8_t *)ICYTRXDM_REFE_LDO_PREPA_ADDR
#define ICYTRXDM_REFE_LDO_LNA_OFFSET                               0x1f9
#define ICYTRXDM_REFE_LDO_LNA_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_REFE_LDO_LNA_OFFSET)
#define ICYTRXDM_REFE_LDO_LNA_SZ                                   16
#define ICYTRXDM_REFE_LDO_LNA                                      (volatile uint8_t *)ICYTRXDM_REFE_LDO_LNA_ADDR
#define ICYTRXDM_DIG_AND_REFE_PMU_OPTS_OFFSET                      0x1fb
#define ICYTRXDM_DIG_AND_REFE_PMU_OPTS_ADDR                        (ICYTRXDM_BASE + ICYTRXDM_DIG_AND_REFE_PMU_OPTS_OFFSET)
#define ICYTRXDM_DIG_AND_REFE_PMU_OPTS_SZ                          8
#define ICYTRXDM_DIG_AND_REFE_PMU_OPTS                             (volatile uint8_t *)ICYTRXDM_DIG_AND_REFE_PMU_OPTS_ADDR
#define ICYTRXDM_DIG_AND_REFE_ENABLES_OFFSET                       0x1fc
#define ICYTRXDM_DIG_AND_REFE_ENABLES_ADDR                         (ICYTRXDM_BASE + ICYTRXDM_DIG_AND_REFE_ENABLES_OFFSET)
#define ICYTRXDM_DIG_AND_REFE_ENABLES_SZ                           16
#define ICYTRXDM_DIG_AND_REFE_ENABLES                              (volatile uint8_t *)ICYTRXDM_DIG_AND_REFE_ENABLES_ADDR
#define ICYTRXDM_RXTX_ENABLES_OFFSET                               0x1fe
#define ICYTRXDM_RXTX_ENABLES_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_RXTX_ENABLES_OFFSET)
#define ICYTRXDM_RXTX_ENABLES_SZ                                   16
#define ICYTRXDM_RXTX_ENABLES                                      (volatile uint8_t *)ICYTRXDM_RXTX_ENABLES_ADDR
#define ICYTRXDM_ENABLES_OFFSET                                    0x200
#define ICYTRXDM_ENABLES_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_ENABLES_OFFSET)
#define ICYTRXDM_ENABLES_SZ                                        8
#define ICYTRXDM_ENABLES                                           (volatile uint8_t *)ICYTRXDM_ENABLES_ADDR
#define ICYTRXDM_ATB_ADPLL_OFFSET                                  0x201
#define ICYTRXDM_ATB_ADPLL_ADDR                                    (ICYTRXDM_BASE + ICYTRXDM_ATB_ADPLL_OFFSET)
#define ICYTRXDM_ATB_ADPLL_SZ                                      16
#define ICYTRXDM_ATB_ADPLL                                         (volatile uint8_t *)ICYTRXDM_ATB_ADPLL_ADDR
#define ICYTRXDM_ATB_REFE_OFFSET                                   0x203
#define ICYTRXDM_ATB_REFE_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_ATB_REFE_OFFSET)
#define ICYTRXDM_ATB_REFE_SZ                                       16
#define ICYTRXDM_ATB_REFE                                          (volatile uint8_t *)ICYTRXDM_ATB_REFE_ADDR
#define ICYTRXDM_ATB_RXTX_OFFSET                                   0x205
#define ICYTRXDM_ATB_RXTX_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_ATB_RXTX_OFFSET)
#define ICYTRXDM_ATB_RXTX_SZ                                       16
#define ICYTRXDM_ATB_RXTX                                          (volatile uint8_t *)ICYTRXDM_ATB_RXTX_ADDR
#define ICYTRXDM_ATB_ADC_OFFSET                                    0x207
#define ICYTRXDM_ATB_ADC_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_ATB_ADC_OFFSET)
#define ICYTRXDM_ATB_ADC_SZ                                        16
#define ICYTRXDM_ATB_ADC                                           (volatile uint8_t *)ICYTRXDM_ATB_ADC_ADDR
#define ICYTRXDM_PASSWD_OFFSET                                     0x209
#define ICYTRXDM_PASSWD_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_PASSWD_OFFSET)
#define ICYTRXDM_PASSWD_SZ                                         16
#define ICYTRXDM_PASSWD                                            (volatile uint8_t *)ICYTRXDM_PASSWD_ADDR
#define ICYTRXDM_CHANNEL_OPTS_OFFSET                               0x20b
#define ICYTRXDM_CHANNEL_OPTS_ADDR                                 (ICYTRXDM_BASE + ICYTRXDM_CHANNEL_OPTS_OFFSET)
#define ICYTRXDM_CHANNEL_OPTS_SZ                                   8
#define ICYTRXDM_CHANNEL_OPTS                                      (volatile uint8_t *)ICYTRXDM_CHANNEL_OPTS_ADDR
#define ICYTRXDM_CHANNEL_OFFSET                                    0x20c
#define ICYTRXDM_CHANNEL_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_CHANNEL_OFFSET)
#define ICYTRXDM_CHANNEL_SZ                                        8
#define ICYTRXDM_CHANNEL                                           (volatile uint8_t *)ICYTRXDM_CHANNEL_ADDR
#define ICYTRXDM_COMMANDS_OFFSET                                   0x20d
#define ICYTRXDM_COMMANDS_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_COMMANDS_OFFSET)
#define ICYTRXDM_COMMANDS_SZ                                       8
#define ICYTRXDM_COMMANDS                                          (volatile uint8_t *)ICYTRXDM_COMMANDS_ADDR
#define ICYTRXDM_PROT_TIMER_OFFSET                                 0x20e
#define ICYTRXDM_PROT_TIMER_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_PROT_TIMER_OFFSET)
#define ICYTRXDM_PROT_TIMER_SZ                                     8
#define ICYTRXDM_PROT_TIMER                                        (volatile uint8_t *)ICYTRXDM_PROT_TIMER_ADDR
#define ICYTRXDM_STATUS_OFFSET                                     0x20f
#define ICYTRXDM_STATUS_ADDR                                       (ICYTRXDM_BASE + ICYTRXDM_STATUS_OFFSET)
#define ICYTRXDM_STATUS_SZ                                         8
#define ICYTRXDM_STATUS                                            (volatile uint8_t *)ICYTRXDM_STATUS_ADDR
#define ICYTRXDM_RXPH_STATUS_OFFSET                                0x210
#define ICYTRXDM_RXPH_STATUS_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_RXPH_STATUS_OFFSET)
#define ICYTRXDM_RXPH_STATUS_SZ                                    8
#define ICYTRXDM_RXPH_STATUS                                       (volatile uint8_t *)ICYTRXDM_RXPH_STATUS_ADDR
#define ICYTRXDM_OBSERVE_POINT_0_OFFSET                            0x214
#define ICYTRXDM_OBSERVE_POINT_0_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_OBSERVE_POINT_0_OFFSET)
#define ICYTRXDM_OBSERVE_POINT_0_SZ                                32
#define ICYTRXDM_OBSERVE_POINT_0                                   (volatile uint8_t *)ICYTRXDM_OBSERVE_POINT_0_ADDR
#define ICYTRXDM_OBSERVE_POINT_1_OFFSET                            0x218
#define ICYTRXDM_OBSERVE_POINT_1_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_OBSERVE_POINT_1_OFFSET)
#define ICYTRXDM_OBSERVE_POINT_1_SZ                                32
#define ICYTRXDM_OBSERVE_POINT_1                                   (volatile uint8_t *)ICYTRXDM_OBSERVE_POINT_1_ADDR
#define ICYTRXDM_RX_DATA_OUT_OFFSET                                0x21c
#define ICYTRXDM_RX_DATA_OUT_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_RX_DATA_OUT_OFFSET)
#define ICYTRXDM_RX_DATA_OUT_SZ                                    32
#define ICYTRXDM_RX_DATA_OUT                                       (volatile uint8_t *)ICYTRXDM_RX_DATA_OUT_ADDR
#define ICYTRXDM_TX_FIFO_OFFSET                                    0x220
#define ICYTRXDM_TX_FIFO_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_TX_FIFO_OFFSET)
#define ICYTRXDM_TX_FIFO_SZ                                        32
#define ICYTRXDM_TX_FIFO                                           (volatile uint8_t *)ICYTRXDM_TX_FIFO_ADDR
#define ICYTRXDM_TX_FIFO_32_OFFSET                                 0x224
#define ICYTRXDM_TX_FIFO_32_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_TX_FIFO_32_OFFSET)
#define ICYTRXDM_TX_FIFO_32_SZ                                     32
#define ICYTRXDM_TX_FIFO_32                                        (volatile uint8_t *)ICYTRXDM_TX_FIFO_32_ADDR
#define ICYTRXDM_TX_FIFO_COUNT_OFFSET                              0x228
#define ICYTRXDM_TX_FIFO_COUNT_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_TX_FIFO_COUNT_OFFSET)
#define ICYTRXDM_TX_FIFO_COUNT_SZ                                  8
#define ICYTRXDM_TX_FIFO_COUNT                                     (volatile uint8_t *)ICYTRXDM_TX_FIFO_COUNT_ADDR
#define ICYTRXDM_TX_FIFO_STATUS_OFFSET                             0x229
#define ICYTRXDM_TX_FIFO_STATUS_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_TX_FIFO_STATUS_OFFSET)
#define ICYTRXDM_TX_FIFO_STATUS_SZ                                 8
#define ICYTRXDM_TX_FIFO_STATUS                                    (volatile uint8_t *)ICYTRXDM_TX_FIFO_STATUS_ADDR
#define ICYTRXDM_RX_FIFO_OFFSET                                    0x22c
#define ICYTRXDM_RX_FIFO_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_RX_FIFO_OFFSET)
#define ICYTRXDM_RX_FIFO_SZ                                        32
#define ICYTRXDM_RX_FIFO                                           (volatile uint8_t *)ICYTRXDM_RX_FIFO_ADDR
#define ICYTRXDM_RX_FIFO_32_OFFSET                                 0x230
#define ICYTRXDM_RX_FIFO_32_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_RX_FIFO_32_OFFSET)
#define ICYTRXDM_RX_FIFO_32_SZ                                     32
#define ICYTRXDM_RX_FIFO_32                                        (volatile uint8_t *)ICYTRXDM_RX_FIFO_32_ADDR
#define ICYTRXDM_RX_FIFO_COUNT_OFFSET                              0x234
#define ICYTRXDM_RX_FIFO_COUNT_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_RX_FIFO_COUNT_OFFSET)
#define ICYTRXDM_RX_FIFO_COUNT_SZ                                  8
#define ICYTRXDM_RX_FIFO_COUNT                                     (volatile uint8_t *)ICYTRXDM_RX_FIFO_COUNT_ADDR
#define ICYTRXDM_RX_FIFO_STATUS_OFFSET                             0x235
#define ICYTRXDM_RX_FIFO_STATUS_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_RX_FIFO_STATUS_OFFSET)
#define ICYTRXDM_RX_FIFO_STATUS_SZ                                 8
#define ICYTRXDM_RX_FIFO_STATUS                                    (volatile uint8_t *)ICYTRXDM_RX_FIFO_STATUS_ADDR
#define ICYTRXDM_IQ_FIFO_OFFSET                                    0x238
#define ICYTRXDM_IQ_FIFO_ADDR                                      (ICYTRXDM_BASE + ICYTRXDM_IQ_FIFO_OFFSET)
#define ICYTRXDM_IQ_FIFO_SZ                                        32
#define ICYTRXDM_IQ_FIFO                                           (volatile uint8_t *)ICYTRXDM_IQ_FIFO_ADDR
#define ICYTRXDM_IQ_FIFO_32_OFFSET                                 0x23c
#define ICYTRXDM_IQ_FIFO_32_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_IQ_FIFO_32_OFFSET)
#define ICYTRXDM_IQ_FIFO_32_SZ                                     32
#define ICYTRXDM_IQ_FIFO_32                                        (volatile uint8_t *)ICYTRXDM_IQ_FIFO_32_ADDR
#define ICYTRXDM_IQ_FIFO_COUNT_OFFSET                              0x240
#define ICYTRXDM_IQ_FIFO_COUNT_ADDR                                (ICYTRXDM_BASE + ICYTRXDM_IQ_FIFO_COUNT_OFFSET)
#define ICYTRXDM_IQ_FIFO_COUNT_SZ                                  8
#define ICYTRXDM_IQ_FIFO_COUNT                                     (volatile uint8_t *)ICYTRXDM_IQ_FIFO_COUNT_ADDR
#define ICYTRXDM_IQ_FIFO_STATUS_OFFSET                             0x241
#define ICYTRXDM_IQ_FIFO_STATUS_ADDR                               (ICYTRXDM_BASE + ICYTRXDM_IQ_FIFO_STATUS_OFFSET)
#define ICYTRXDM_IQ_FIFO_STATUS_SZ                                 8
#define ICYTRXDM_IQ_FIFO_STATUS                                    (volatile uint8_t *)ICYTRXDM_IQ_FIFO_STATUS_ADDR
#define ICYTRXDM_DCO_CAL_READOUT_OFFSET                            0x242
#define ICYTRXDM_DCO_CAL_READOUT_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_DCO_CAL_READOUT_OFFSET)
#define ICYTRXDM_DCO_CAL_READOUT_SZ                                8
#define ICYTRXDM_DCO_CAL_READOUT                                   (volatile uint8_t *)ICYTRXDM_DCO_CAL_READOUT_ADDR
#define ICYTRXDM_ANALOG_INFO_OFFSET                                0x243
#define ICYTRXDM_ANALOG_INFO_ADDR                                  (ICYTRXDM_BASE + ICYTRXDM_ANALOG_INFO_OFFSET)
#define ICYTRXDM_ANALOG_INFO_SZ                                    8
#define ICYTRXDM_ANALOG_INFO                                       (volatile uint8_t *)ICYTRXDM_ANALOG_INFO_ADDR
#define ICYTRXDM_IRQ_STATUS_OFFSET                                 0x244
#define ICYTRXDM_IRQ_STATUS_ADDR                                   (ICYTRXDM_BASE + ICYTRXDM_IRQ_STATUS_OFFSET)
#define ICYTRXDM_IRQ_STATUS_SZ                                     32
#define ICYTRXDM_IRQ_STATUS                                        (volatile uint8_t *)ICYTRXDM_IRQ_STATUS_ADDR
#define ICYTRXDM_AGC_VALS_FROM_AGC_OFFSET                          0x248
#define ICYTRXDM_AGC_VALS_FROM_AGC_ADDR                            (ICYTRXDM_BASE + ICYTRXDM_AGC_VALS_FROM_AGC_OFFSET)
#define ICYTRXDM_AGC_VALS_FROM_AGC_SZ                              16
#define ICYTRXDM_AGC_VALS_FROM_AGC                                 (volatile uint8_t *)ICYTRXDM_AGC_VALS_FROM_AGC_ADDR
#define ICYTRXDM_RSSI_LIN_OFFSET                                   0x24a
#define ICYTRXDM_RSSI_LIN_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_RSSI_LIN_OFFSET)
#define ICYTRXDM_RSSI_LIN_SZ                                       16
#define ICYTRXDM_RSSI_LIN                                          (volatile uint8_t *)ICYTRXDM_RSSI_LIN_ADDR
#define ICYTRXDM_RSSI_OFFSET                                       0x24c
#define ICYTRXDM_RSSI_ADDR                                         (ICYTRXDM_BASE + ICYTRXDM_RSSI_OFFSET)
#define ICYTRXDM_RSSI_SZ                                           24
#define ICYTRXDM_RSSI                                              (volatile uint8_t *)ICYTRXDM_RSSI_ADDR
#define ICYTRXDM_RSSI_PKT_OFFSET                                   0x24f
#define ICYTRXDM_RSSI_PKT_ADDR                                     (ICYTRXDM_BASE + ICYTRXDM_RSSI_PKT_OFFSET)
#define ICYTRXDM_RSSI_PKT_SZ                                       8
#define ICYTRXDM_RSSI_PKT                                          (volatile uint8_t *)ICYTRXDM_RSSI_PKT_ADDR
#define ICYTRXDM_AGC_ATTENUATION_OFFSET                            0x250
#define ICYTRXDM_AGC_ATTENUATION_ADDR                              (ICYTRXDM_BASE + ICYTRXDM_AGC_ATTENUATION_OFFSET)
#define ICYTRXDM_AGC_ATTENUATION_SZ                                8
#define ICYTRXDM_AGC_ATTENUATION                                   (volatile uint8_t *)ICYTRXDM_AGC_ATTENUATION_ADDR
#define ICYTRXDM_CFO_OFFSET                                        0x252
#define ICYTRXDM_CFO_ADDR                                          (ICYTRXDM_BASE + ICYTRXDM_CFO_OFFSET)
#define ICYTRXDM_CFO_SZ                                            16
#define ICYTRXDM_CFO                                               (volatile uint8_t *)ICYTRXDM_CFO_ADDR
#define ICYTRXDM_IQ_BALANCE_READOUT_OFFSET                         0x254
#define ICYTRXDM_IQ_BALANCE_READOUT_ADDR                           (ICYTRXDM_BASE + ICYTRXDM_IQ_BALANCE_READOUT_OFFSET)
#define ICYTRXDM_IQ_BALANCE_READOUT_SZ                             16
#define ICYTRXDM_IQ_BALANCE_READOUT                                (volatile uint8_t *)ICYTRXDM_IQ_BALANCE_READOUT_ADDR

#endif
