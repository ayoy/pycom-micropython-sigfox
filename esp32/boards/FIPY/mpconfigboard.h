/*
 * Copyright (c) 2016, Pycom Limited.
 *
 * This software is licensed under the GNU GPL version 3 or any
 * later version, with permitted additional terms. For more information
 * see the Pycom Licence v1.0 document supplied with this file, or
 * available at https://www.pycom.io/opensource/licensing
 */

#define FIPY

#define MICROPY_HW_BOARD_NAME                                   "FiPy"
#define MICROPY_PY_SYS_PLATFORM                                 "FiPy"
#define MICROPY_HW_HB_PIN_NUM                                   (0)
#define MICROPY_HW_SAFE_PIN_NUM                                 (21)

#define DEFAULT_AP_SSID                                         "fipy-wlan"

#define MICROPY_LPWAN_DIO_PIN

#define CONFIG_GSM_TX 33
#define CONFIG_GSM_RX 34

#define CONFIG_GSM_CTS 35
#define CONFIG_GSM_RTS 32

extern uint32_t micropy_hw_flash_size;

extern bool micropy_hw_antenna_diversity;
extern uint32_t micropy_hw_antenna_diversity_pin_num;

extern bool micropy_lpwan_use_reset_pin;
extern uint32_t micropy_lpwan_reset_pin_num;
extern uint32_t micropy_lpwan_reset_pin_index;
extern void * micropy_lpwan_reset_pin;

extern uint32_t micropy_lpwan_dio_pin_num;
extern uint32_t micropy_lpwan_dio_pin_index;
extern void * micropy_lpwan_dio_pin;

extern uint32_t micropy_lpwan_ncs_pin_num;
extern uint32_t micropy_lpwan_ncs_pin_index;
extern void * micropy_lpwan_ncs_pin;
