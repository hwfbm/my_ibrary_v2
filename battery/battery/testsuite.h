/** @file
 *    @brief MAVLink comm protocol testsuite generated from battery.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef BATTERY_TESTSUITE_H
#define BATTERY_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_battery(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_battery(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_hydrogen_battery(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HYDROGEN_BATTERY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hydrogen_battery_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,175,242,53,120,187,254
    };
    mavlink_hydrogen_battery_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.bat_voltage = packet_in.bat_voltage;
        packet1.servo_current = packet_in.servo_current;
        packet1.stack_voltage = packet_in.stack_voltage;
        packet1.servo_voltage = packet_in.servo_voltage;
        packet1.bat_refuel_current = packet_in.bat_refuel_current;
        packet1.gas_tank_pressure = packet_in.gas_tank_pressure;
        packet1.pipe_pressure = packet_in.pipe_pressure;
        packet1.pcb_temp = packet_in.pcb_temp;
        packet1.stack_temp = packet_in.stack_temp;
        packet1.work_status = packet_in.work_status;
        packet1.fault_status = packet_in.fault_status;
        packet1.self_check = packet_in.self_check;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HYDROGEN_BATTERY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hydrogen_battery_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hydrogen_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hydrogen_battery_pack(system_id, component_id, &msg , packet1.bat_voltage , packet1.servo_current , packet1.stack_voltage , packet1.servo_voltage , packet1.bat_refuel_current , packet1.gas_tank_pressure , packet1.pipe_pressure , packet1.pcb_temp , packet1.stack_temp , packet1.work_status , packet1.fault_status , packet1.self_check , packet1.id );
    mavlink_msg_hydrogen_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hydrogen_battery_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.bat_voltage , packet1.servo_current , packet1.stack_voltage , packet1.servo_voltage , packet1.bat_refuel_current , packet1.gas_tank_pressure , packet1.pipe_pressure , packet1.pcb_temp , packet1.stack_temp , packet1.work_status , packet1.fault_status , packet1.self_check , packet1.id );
    mavlink_msg_hydrogen_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hydrogen_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hydrogen_battery_send(MAVLINK_COMM_1 , packet1.bat_voltage , packet1.servo_current , packet1.stack_voltage , packet1.servo_voltage , packet1.bat_refuel_current , packet1.gas_tank_pressure , packet1.pipe_pressure , packet1.pcb_temp , packet1.stack_temp , packet1.work_status , packet1.fault_status , packet1.self_check , packet1.id );
    mavlink_msg_hydrogen_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HYDROGEN_BATTERY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HYDROGEN_BATTERY) != NULL);
#endif
}

static void mavlink_test_battery(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_hydrogen_battery(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // BATTERY_TESTSUITE_H
