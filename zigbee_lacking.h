#ifndef ZIGBEE_LACKING_H__
#define ZIGBEE_LACKING_H__

#include "zb_zcl_power_config.h"
#include "zb_zcl_rel_humidity_measurement.h"

/**@brief power Measurement cluster attributes according to ZCL Specification 4.5.2.1.1. */
typedef struct
{
    zb_uint8_t voltage;
    enum zb_zcl_power_config_battery_size_e size;
    zb_uint8_t quantity;
    zb_uint8_t rated_voltage;
    enum zb_zcl_power_config_battery_alarm_mask_e alarm_mask;
    zb_uint8_t voltage_min_threshold;
} battery_simplified_attr_t;


/**@brief Humidity Measurement cluster attributes according to ZCL Spec 4.4.2.1.1. */
typedef struct
{
    zb_int16_t  measure_value;
    zb_int16_t  min_measure_value;
    zb_int16_t  max_measure_value;
} zb_zcl_humm_measurement_attrs_t;

#ifdef __cplusplus
}
#endif
#endif // ZB_MULTI_SENSOR_H__