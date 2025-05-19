#pragma once
// MESSAGE HYDROGEN_BATTERY PACKING

#define MAVLINK_MSG_ID_HYDROGEN_BATTERY 229


typedef struct __mavlink_hydrogen_battery_t {
 uint16_t bat_voltage; /*<  Battery voltage (mV)*/
 uint16_t servo_current; /*<  Servo current (mA)*/
 uint16_t stack_voltage; /*<  Stack voltage (mV)*/
 uint16_t servo_voltage; /*<  Servo voltage (mV)*/
 uint16_t bat_refuel_current; /*<  Battery refuel current (mA)*/
 uint16_t gas_tank_pressure; /*<  Gas tank pressure (Pa)*/
 uint16_t pipe_pressure; /*<  Pipe pressure (Pa)*/
 int8_t pcb_temp; /*<  PCB temperature (C)*/
 int8_t stack_temp; /*<  Stack temperature (C)*/
 uint8_t work_status; /*<  Work status*/
 uint8_t fault_status; /*<  Fault status*/
 uint8_t self_check; /*<  Self-check result (0=fail, 1=pass)*/
 uint8_t id; /*<  0 or 1*/
} mavlink_hydrogen_battery_t;

#define MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN 20
#define MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN 20
#define MAVLINK_MSG_ID_229_LEN 20
#define MAVLINK_MSG_ID_229_MIN_LEN 20

#define MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC 57
#define MAVLINK_MSG_ID_229_CRC 57



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HYDROGEN_BATTERY { \
    229, \
    "HYDROGEN_BATTERY", \
    13, \
    {  { "bat_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hydrogen_battery_t, bat_voltage) }, \
         { "servo_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hydrogen_battery_t, servo_current) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_hydrogen_battery_t, stack_voltage) }, \
         { "servo_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_hydrogen_battery_t, servo_voltage) }, \
         { "bat_refuel_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hydrogen_battery_t, bat_refuel_current) }, \
         { "gas_tank_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hydrogen_battery_t, gas_tank_pressure) }, \
         { "pipe_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_hydrogen_battery_t, pipe_pressure) }, \
         { "pcb_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 14, offsetof(mavlink_hydrogen_battery_t, pcb_temp) }, \
         { "stack_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 15, offsetof(mavlink_hydrogen_battery_t, stack_temp) }, \
         { "work_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hydrogen_battery_t, work_status) }, \
         { "fault_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_hydrogen_battery_t, fault_status) }, \
         { "self_check", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_hydrogen_battery_t, self_check) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_hydrogen_battery_t, id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HYDROGEN_BATTERY { \
    "HYDROGEN_BATTERY", \
    13, \
    {  { "bat_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hydrogen_battery_t, bat_voltage) }, \
         { "servo_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hydrogen_battery_t, servo_current) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_hydrogen_battery_t, stack_voltage) }, \
         { "servo_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_hydrogen_battery_t, servo_voltage) }, \
         { "bat_refuel_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hydrogen_battery_t, bat_refuel_current) }, \
         { "gas_tank_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hydrogen_battery_t, gas_tank_pressure) }, \
         { "pipe_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_hydrogen_battery_t, pipe_pressure) }, \
         { "pcb_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 14, offsetof(mavlink_hydrogen_battery_t, pcb_temp) }, \
         { "stack_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 15, offsetof(mavlink_hydrogen_battery_t, stack_temp) }, \
         { "work_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hydrogen_battery_t, work_status) }, \
         { "fault_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_hydrogen_battery_t, fault_status) }, \
         { "self_check", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_hydrogen_battery_t, self_check) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_hydrogen_battery_t, id) }, \
         } \
}
#endif

/**
 * @brief Pack a hydrogen_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param bat_voltage  Battery voltage (mV)
 * @param servo_current  Servo current (mA)
 * @param stack_voltage  Stack voltage (mV)
 * @param servo_voltage  Servo voltage (mV)
 * @param bat_refuel_current  Battery refuel current (mA)
 * @param gas_tank_pressure  Gas tank pressure (Pa)
 * @param pipe_pressure  Pipe pressure (Pa)
 * @param pcb_temp  PCB temperature (C)
 * @param stack_temp  Stack temperature (C)
 * @param work_status  Work status
 * @param fault_status  Fault status
 * @param self_check  Self-check result (0=fail, 1=pass)
 * @param id  0 or 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t bat_voltage, uint16_t servo_current, uint16_t stack_voltage, uint16_t servo_voltage, uint16_t bat_refuel_current, uint16_t gas_tank_pressure, uint16_t pipe_pressure, int8_t pcb_temp, int8_t stack_temp, uint8_t work_status, uint8_t fault_status, uint8_t self_check, uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, bat_voltage);
    _mav_put_uint16_t(buf, 2, servo_current);
    _mav_put_uint16_t(buf, 4, stack_voltage);
    _mav_put_uint16_t(buf, 6, servo_voltage);
    _mav_put_uint16_t(buf, 8, bat_refuel_current);
    _mav_put_uint16_t(buf, 10, gas_tank_pressure);
    _mav_put_uint16_t(buf, 12, pipe_pressure);
    _mav_put_int8_t(buf, 14, pcb_temp);
    _mav_put_int8_t(buf, 15, stack_temp);
    _mav_put_uint8_t(buf, 16, work_status);
    _mav_put_uint8_t(buf, 17, fault_status);
    _mav_put_uint8_t(buf, 18, self_check);
    _mav_put_uint8_t(buf, 19, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#else
    mavlink_hydrogen_battery_t packet;
    packet.bat_voltage = bat_voltage;
    packet.servo_current = servo_current;
    packet.stack_voltage = stack_voltage;
    packet.servo_voltage = servo_voltage;
    packet.bat_refuel_current = bat_refuel_current;
    packet.gas_tank_pressure = gas_tank_pressure;
    packet.pipe_pressure = pipe_pressure;
    packet.pcb_temp = pcb_temp;
    packet.stack_temp = stack_temp;
    packet.work_status = work_status;
    packet.fault_status = fault_status;
    packet.self_check = self_check;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN_BATTERY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
}

/**
 * @brief Pack a hydrogen_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param bat_voltage  Battery voltage (mV)
 * @param servo_current  Servo current (mA)
 * @param stack_voltage  Stack voltage (mV)
 * @param servo_voltage  Servo voltage (mV)
 * @param bat_refuel_current  Battery refuel current (mA)
 * @param gas_tank_pressure  Gas tank pressure (Pa)
 * @param pipe_pressure  Pipe pressure (Pa)
 * @param pcb_temp  PCB temperature (C)
 * @param stack_temp  Stack temperature (C)
 * @param work_status  Work status
 * @param fault_status  Fault status
 * @param self_check  Self-check result (0=fail, 1=pass)
 * @param id  0 or 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t bat_voltage, uint16_t servo_current, uint16_t stack_voltage, uint16_t servo_voltage, uint16_t bat_refuel_current, uint16_t gas_tank_pressure, uint16_t pipe_pressure, int8_t pcb_temp, int8_t stack_temp, uint8_t work_status, uint8_t fault_status, uint8_t self_check, uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, bat_voltage);
    _mav_put_uint16_t(buf, 2, servo_current);
    _mav_put_uint16_t(buf, 4, stack_voltage);
    _mav_put_uint16_t(buf, 6, servo_voltage);
    _mav_put_uint16_t(buf, 8, bat_refuel_current);
    _mav_put_uint16_t(buf, 10, gas_tank_pressure);
    _mav_put_uint16_t(buf, 12, pipe_pressure);
    _mav_put_int8_t(buf, 14, pcb_temp);
    _mav_put_int8_t(buf, 15, stack_temp);
    _mav_put_uint8_t(buf, 16, work_status);
    _mav_put_uint8_t(buf, 17, fault_status);
    _mav_put_uint8_t(buf, 18, self_check);
    _mav_put_uint8_t(buf, 19, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#else
    mavlink_hydrogen_battery_t packet;
    packet.bat_voltage = bat_voltage;
    packet.servo_current = servo_current;
    packet.stack_voltage = stack_voltage;
    packet.servo_voltage = servo_voltage;
    packet.bat_refuel_current = bat_refuel_current;
    packet.gas_tank_pressure = gas_tank_pressure;
    packet.pipe_pressure = pipe_pressure;
    packet.pcb_temp = pcb_temp;
    packet.stack_temp = stack_temp;
    packet.work_status = work_status;
    packet.fault_status = fault_status;
    packet.self_check = self_check;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#endif
}

/**
 * @brief Pack a hydrogen_battery message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bat_voltage  Battery voltage (mV)
 * @param servo_current  Servo current (mA)
 * @param stack_voltage  Stack voltage (mV)
 * @param servo_voltage  Servo voltage (mV)
 * @param bat_refuel_current  Battery refuel current (mA)
 * @param gas_tank_pressure  Gas tank pressure (Pa)
 * @param pipe_pressure  Pipe pressure (Pa)
 * @param pcb_temp  PCB temperature (C)
 * @param stack_temp  Stack temperature (C)
 * @param work_status  Work status
 * @param fault_status  Fault status
 * @param self_check  Self-check result (0=fail, 1=pass)
 * @param id  0 or 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t bat_voltage,uint16_t servo_current,uint16_t stack_voltage,uint16_t servo_voltage,uint16_t bat_refuel_current,uint16_t gas_tank_pressure,uint16_t pipe_pressure,int8_t pcb_temp,int8_t stack_temp,uint8_t work_status,uint8_t fault_status,uint8_t self_check,uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, bat_voltage);
    _mav_put_uint16_t(buf, 2, servo_current);
    _mav_put_uint16_t(buf, 4, stack_voltage);
    _mav_put_uint16_t(buf, 6, servo_voltage);
    _mav_put_uint16_t(buf, 8, bat_refuel_current);
    _mav_put_uint16_t(buf, 10, gas_tank_pressure);
    _mav_put_uint16_t(buf, 12, pipe_pressure);
    _mav_put_int8_t(buf, 14, pcb_temp);
    _mav_put_int8_t(buf, 15, stack_temp);
    _mav_put_uint8_t(buf, 16, work_status);
    _mav_put_uint8_t(buf, 17, fault_status);
    _mav_put_uint8_t(buf, 18, self_check);
    _mav_put_uint8_t(buf, 19, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#else
    mavlink_hydrogen_battery_t packet;
    packet.bat_voltage = bat_voltage;
    packet.servo_current = servo_current;
    packet.stack_voltage = stack_voltage;
    packet.servo_voltage = servo_voltage;
    packet.bat_refuel_current = bat_refuel_current;
    packet.gas_tank_pressure = gas_tank_pressure;
    packet.pipe_pressure = pipe_pressure;
    packet.pcb_temp = pcb_temp;
    packet.stack_temp = stack_temp;
    packet.work_status = work_status;
    packet.fault_status = fault_status;
    packet.self_check = self_check;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN_BATTERY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
}

/**
 * @brief Encode a hydrogen_battery struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_battery_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hydrogen_battery_t* hydrogen_battery)
{
    return mavlink_msg_hydrogen_battery_pack(system_id, component_id, msg, hydrogen_battery->bat_voltage, hydrogen_battery->servo_current, hydrogen_battery->stack_voltage, hydrogen_battery->servo_voltage, hydrogen_battery->bat_refuel_current, hydrogen_battery->gas_tank_pressure, hydrogen_battery->pipe_pressure, hydrogen_battery->pcb_temp, hydrogen_battery->stack_temp, hydrogen_battery->work_status, hydrogen_battery->fault_status, hydrogen_battery->self_check, hydrogen_battery->id);
}

/**
 * @brief Encode a hydrogen_battery struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_battery_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hydrogen_battery_t* hydrogen_battery)
{
    return mavlink_msg_hydrogen_battery_pack_chan(system_id, component_id, chan, msg, hydrogen_battery->bat_voltage, hydrogen_battery->servo_current, hydrogen_battery->stack_voltage, hydrogen_battery->servo_voltage, hydrogen_battery->bat_refuel_current, hydrogen_battery->gas_tank_pressure, hydrogen_battery->pipe_pressure, hydrogen_battery->pcb_temp, hydrogen_battery->stack_temp, hydrogen_battery->work_status, hydrogen_battery->fault_status, hydrogen_battery->self_check, hydrogen_battery->id);
}

/**
 * @brief Encode a hydrogen_battery struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_battery_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hydrogen_battery_t* hydrogen_battery)
{
    return mavlink_msg_hydrogen_battery_pack_status(system_id, component_id, _status, msg,  hydrogen_battery->bat_voltage, hydrogen_battery->servo_current, hydrogen_battery->stack_voltage, hydrogen_battery->servo_voltage, hydrogen_battery->bat_refuel_current, hydrogen_battery->gas_tank_pressure, hydrogen_battery->pipe_pressure, hydrogen_battery->pcb_temp, hydrogen_battery->stack_temp, hydrogen_battery->work_status, hydrogen_battery->fault_status, hydrogen_battery->self_check, hydrogen_battery->id);
}

/**
 * @brief Send a hydrogen_battery message
 * @param chan MAVLink channel to send the message
 *
 * @param bat_voltage  Battery voltage (mV)
 * @param servo_current  Servo current (mA)
 * @param stack_voltage  Stack voltage (mV)
 * @param servo_voltage  Servo voltage (mV)
 * @param bat_refuel_current  Battery refuel current (mA)
 * @param gas_tank_pressure  Gas tank pressure (Pa)
 * @param pipe_pressure  Pipe pressure (Pa)
 * @param pcb_temp  PCB temperature (C)
 * @param stack_temp  Stack temperature (C)
 * @param work_status  Work status
 * @param fault_status  Fault status
 * @param self_check  Self-check result (0=fail, 1=pass)
 * @param id  0 or 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hydrogen_battery_send(mavlink_channel_t chan, uint16_t bat_voltage, uint16_t servo_current, uint16_t stack_voltage, uint16_t servo_voltage, uint16_t bat_refuel_current, uint16_t gas_tank_pressure, uint16_t pipe_pressure, int8_t pcb_temp, int8_t stack_temp, uint8_t work_status, uint8_t fault_status, uint8_t self_check, uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, bat_voltage);
    _mav_put_uint16_t(buf, 2, servo_current);
    _mav_put_uint16_t(buf, 4, stack_voltage);
    _mav_put_uint16_t(buf, 6, servo_voltage);
    _mav_put_uint16_t(buf, 8, bat_refuel_current);
    _mav_put_uint16_t(buf, 10, gas_tank_pressure);
    _mav_put_uint16_t(buf, 12, pipe_pressure);
    _mav_put_int8_t(buf, 14, pcb_temp);
    _mav_put_int8_t(buf, 15, stack_temp);
    _mav_put_uint8_t(buf, 16, work_status);
    _mav_put_uint8_t(buf, 17, fault_status);
    _mav_put_uint8_t(buf, 18, self_check);
    _mav_put_uint8_t(buf, 19, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY, buf, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#else
    mavlink_hydrogen_battery_t packet;
    packet.bat_voltage = bat_voltage;
    packet.servo_current = servo_current;
    packet.stack_voltage = stack_voltage;
    packet.servo_voltage = servo_voltage;
    packet.bat_refuel_current = bat_refuel_current;
    packet.gas_tank_pressure = gas_tank_pressure;
    packet.pipe_pressure = pipe_pressure;
    packet.pcb_temp = pcb_temp;
    packet.stack_temp = stack_temp;
    packet.work_status = work_status;
    packet.fault_status = fault_status;
    packet.self_check = self_check;
    packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#endif
}

/**
 * @brief Send a hydrogen_battery message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hydrogen_battery_send_struct(mavlink_channel_t chan, const mavlink_hydrogen_battery_t* hydrogen_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hydrogen_battery_send(chan, hydrogen_battery->bat_voltage, hydrogen_battery->servo_current, hydrogen_battery->stack_voltage, hydrogen_battery->servo_voltage, hydrogen_battery->bat_refuel_current, hydrogen_battery->gas_tank_pressure, hydrogen_battery->pipe_pressure, hydrogen_battery->pcb_temp, hydrogen_battery->stack_temp, hydrogen_battery->work_status, hydrogen_battery->fault_status, hydrogen_battery->self_check, hydrogen_battery->id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY, (const char *)hydrogen_battery, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#endif
}

#if MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hydrogen_battery_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t bat_voltage, uint16_t servo_current, uint16_t stack_voltage, uint16_t servo_voltage, uint16_t bat_refuel_current, uint16_t gas_tank_pressure, uint16_t pipe_pressure, int8_t pcb_temp, int8_t stack_temp, uint8_t work_status, uint8_t fault_status, uint8_t self_check, uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, bat_voltage);
    _mav_put_uint16_t(buf, 2, servo_current);
    _mav_put_uint16_t(buf, 4, stack_voltage);
    _mav_put_uint16_t(buf, 6, servo_voltage);
    _mav_put_uint16_t(buf, 8, bat_refuel_current);
    _mav_put_uint16_t(buf, 10, gas_tank_pressure);
    _mav_put_uint16_t(buf, 12, pipe_pressure);
    _mav_put_int8_t(buf, 14, pcb_temp);
    _mav_put_int8_t(buf, 15, stack_temp);
    _mav_put_uint8_t(buf, 16, work_status);
    _mav_put_uint8_t(buf, 17, fault_status);
    _mav_put_uint8_t(buf, 18, self_check);
    _mav_put_uint8_t(buf, 19, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY, buf, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#else
    mavlink_hydrogen_battery_t *packet = (mavlink_hydrogen_battery_t *)msgbuf;
    packet->bat_voltage = bat_voltage;
    packet->servo_current = servo_current;
    packet->stack_voltage = stack_voltage;
    packet->servo_voltage = servo_voltage;
    packet->bat_refuel_current = bat_refuel_current;
    packet->gas_tank_pressure = gas_tank_pressure;
    packet->pipe_pressure = pipe_pressure;
    packet->pcb_temp = pcb_temp;
    packet->stack_temp = stack_temp;
    packet->work_status = work_status;
    packet->fault_status = fault_status;
    packet->self_check = self_check;
    packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_BATTERY, (const char *)packet, MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN, MAVLINK_MSG_ID_HYDROGEN_BATTERY_CRC);
#endif
}
#endif

#endif

// MESSAGE HYDROGEN_BATTERY UNPACKING


/**
 * @brief Get field bat_voltage from hydrogen_battery message
 *
 * @return  Battery voltage (mV)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_bat_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field servo_current from hydrogen_battery message
 *
 * @return  Servo current (mA)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_servo_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field stack_voltage from hydrogen_battery message
 *
 * @return  Stack voltage (mV)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_stack_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field servo_voltage from hydrogen_battery message
 *
 * @return  Servo voltage (mV)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_servo_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field bat_refuel_current from hydrogen_battery message
 *
 * @return  Battery refuel current (mA)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_bat_refuel_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field gas_tank_pressure from hydrogen_battery message
 *
 * @return  Gas tank pressure (Pa)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_gas_tank_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field pipe_pressure from hydrogen_battery message
 *
 * @return  Pipe pressure (Pa)
 */
static inline uint16_t mavlink_msg_hydrogen_battery_get_pipe_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field pcb_temp from hydrogen_battery message
 *
 * @return  PCB temperature (C)
 */
static inline int8_t mavlink_msg_hydrogen_battery_get_pcb_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  14);
}

/**
 * @brief Get field stack_temp from hydrogen_battery message
 *
 * @return  Stack temperature (C)
 */
static inline int8_t mavlink_msg_hydrogen_battery_get_stack_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  15);
}

/**
 * @brief Get field work_status from hydrogen_battery message
 *
 * @return  Work status
 */
static inline uint8_t mavlink_msg_hydrogen_battery_get_work_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field fault_status from hydrogen_battery message
 *
 * @return  Fault status
 */
static inline uint8_t mavlink_msg_hydrogen_battery_get_fault_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field self_check from hydrogen_battery message
 *
 * @return  Self-check result (0=fail, 1=pass)
 */
static inline uint8_t mavlink_msg_hydrogen_battery_get_self_check(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field id from hydrogen_battery message
 *
 * @return  0 or 1
 */
static inline uint8_t mavlink_msg_hydrogen_battery_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Decode a hydrogen_battery message into a struct
 *
 * @param msg The message to decode
 * @param hydrogen_battery C-struct to decode the message contents into
 */
static inline void mavlink_msg_hydrogen_battery_decode(const mavlink_message_t* msg, mavlink_hydrogen_battery_t* hydrogen_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hydrogen_battery->bat_voltage = mavlink_msg_hydrogen_battery_get_bat_voltage(msg);
    hydrogen_battery->servo_current = mavlink_msg_hydrogen_battery_get_servo_current(msg);
    hydrogen_battery->stack_voltage = mavlink_msg_hydrogen_battery_get_stack_voltage(msg);
    hydrogen_battery->servo_voltage = mavlink_msg_hydrogen_battery_get_servo_voltage(msg);
    hydrogen_battery->bat_refuel_current = mavlink_msg_hydrogen_battery_get_bat_refuel_current(msg);
    hydrogen_battery->gas_tank_pressure = mavlink_msg_hydrogen_battery_get_gas_tank_pressure(msg);
    hydrogen_battery->pipe_pressure = mavlink_msg_hydrogen_battery_get_pipe_pressure(msg);
    hydrogen_battery->pcb_temp = mavlink_msg_hydrogen_battery_get_pcb_temp(msg);
    hydrogen_battery->stack_temp = mavlink_msg_hydrogen_battery_get_stack_temp(msg);
    hydrogen_battery->work_status = mavlink_msg_hydrogen_battery_get_work_status(msg);
    hydrogen_battery->fault_status = mavlink_msg_hydrogen_battery_get_fault_status(msg);
    hydrogen_battery->self_check = mavlink_msg_hydrogen_battery_get_self_check(msg);
    hydrogen_battery->id = mavlink_msg_hydrogen_battery_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN? msg->len : MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN;
        memset(hydrogen_battery, 0, MAVLINK_MSG_ID_HYDROGEN_BATTERY_LEN);
    memcpy(hydrogen_battery, _MAV_PAYLOAD(msg), len);
#endif
}
