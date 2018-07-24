/*
 *  oFono - Open Source Telephony
 *
 *  Copyright (C) 2018 Jolla Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 */

#ifndef __OFONO_RIL_CONSTANTS_H
#define __OFONO_RIL_CONSTANTS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Error Codes */
enum ril_status {
	RIL_E_SUCCESS = 0,
	RIL_E_RADIO_NOT_AVAILABLE = 1,
	RIL_E_GENERIC_FAILURE = 2,
	RIL_E_PASSWORD_INCORRECT = 3,
	RIL_E_SIM_PIN2 = 4,
	RIL_E_SIM_PUK2 = 5,
	RIL_E_REQUEST_NOT_SUPPORTED = 6,
	RIL_E_CANCELLED = 7,
	RIL_E_OP_NOT_ALLOWED_DURING_VOICE_CALL = 8,
	RIL_E_OP_NOT_ALLOWED_BEFORE_REG_TO_NW = 9,
	RIL_E_SMS_SEND_FAIL_RETRY = 10,
	RIL_E_SIM_ABSENT = 11,
	RIL_E_SUBSCRIPTION_NOT_AVAILABLE = 12,
	RIL_E_MODE_NOT_SUPPORTED = 13,
	RIL_E_FDN_CHECK_FAILURE = 14,
	RIL_E_ILLEGAL_SIM_OR_ME = 15,
	RIL_E_MISSING_RESOURCE = 16,
	RIL_E_NO_SUCH_ELEMENT = 17,
	RIL_E_DIAL_MODIFIED_TO_USSD = 18,
	RIL_E_DIAL_MODIFIED_TO_SS = 19,
	RIL_E_DIAL_MODIFIED_TO_DIAL = 20,
	RIL_E_USSD_MODIFIED_TO_DIAL = 21,
	RIL_E_USSD_MODIFIED_TO_SS = 22,
	RIL_E_USSD_MODIFIED_TO_USSD = 23,
	RIL_E_SS_MODIFIED_TO_DIAL = 24,
	RIL_E_SS_MODIFIED_TO_USSD = 25,
	RIL_E_SUBSCRIPTION_NOT_SUPPORTED = 26,
	RIL_E_SS_MODIFIED_TO_SS = 27,
	RIL_E_LCE_NOT_SUPPORTED = 36,
	RIL_E_NO_MEMORY = 37,
	RIL_E_INTERNAL_ERR = 38,
	RIL_E_SYSTEM_ERR = 39,
	RIL_E_MODEM_ERR = 40,
	RIL_E_INVALID_STATE = 41,
	RIL_E_NO_RESOURCES = 42,
	RIL_E_SIM_ERR = 43,
	RIL_E_INVALID_ARGUMENTS = 44,
	RIL_E_INVALID_SIM_STATE = 45,
	RIL_E_INVALID_MODEM_STATE = 46,
	RIL_E_INVALID_CALL_ID = 47,
	RIL_E_NO_SMS_TO_ACK = 48,
	RIL_E_NETWORK_ERR = 49,
	RIL_E_REQUEST_RATE_LIMITED = 50,
	RIL_E_SIM_BUSY = 51,
	RIL_E_SIM_FULL = 52,
	RIL_E_NETWORK_REJECT = 53,
	RIL_E_OPERATION_NOT_ALLOWED = 54,
	RIL_E_EMPTY_RECORD = 55,
	RIL_E_INVALID_SMS_FORMAT = 56,
	RIL_E_ENCODING_ERR = 57,
	RIL_E_INVALID_SMSC_ADDRESS = 58,
	RIL_E_NO_SUCH_ENTRY = 59,
	RIL_E_NETWORK_NOT_READY = 60,
	RIL_E_NOT_PROVISIONED = 61,
	RIL_E_NO_SUBSCRIPTION = 62,
	RIL_E_NO_NETWORK_FOUND = 63,
	RIL_E_DEVICE_IN_USE = 64,
	RIL_E_ABORTED = 65,
	RIL_E_INVALID_RESPONSE = 66
};

/* RIL Request Messages, ofono -> rild */
#define RIL_REQUEST_GET_SIM_STATUS 1
#define RIL_REQUEST_ENTER_SIM_PIN 2
#define RIL_REQUEST_ENTER_SIM_PUK 3
#define RIL_REQUEST_ENTER_SIM_PIN2 4
#define RIL_REQUEST_ENTER_SIM_PUK2 5
#define RIL_REQUEST_CHANGE_SIM_PIN 6
#define RIL_REQUEST_CHANGE_SIM_PIN2 7
#define RIL_REQUEST_ENTER_NETWORK_DEPERSONALIZATION 8
#define RIL_REQUEST_GET_CURRENT_CALLS 9
#define RIL_REQUEST_DIAL 10
#define RIL_REQUEST_GET_IMSI 11
#define RIL_REQUEST_HANGUP 12
#define RIL_REQUEST_HANGUP_WAITING_OR_BACKGROUND 13
#define RIL_REQUEST_HANGUP_FOREGROUND_RESUME_BACKGROUND 14
#define RIL_REQUEST_SWITCH_HOLDING_AND_ACTIVE 15
#define RIL_REQUEST_CONFERENCE 16
#define RIL_REQUEST_UDUB 17
#define RIL_REQUEST_LAST_CALL_FAIL_CAUSE 18
#define RIL_REQUEST_SIGNAL_STRENGTH 19
#define RIL_REQUEST_VOICE_REGISTRATION_STATE 20
#define RIL_REQUEST_DATA_REGISTRATION_STATE 21
#define RIL_REQUEST_OPERATOR 22
#define RIL_REQUEST_RADIO_POWER 23
#define RIL_REQUEST_DTMF 24
#define RIL_REQUEST_SEND_SMS 25
#define RIL_REQUEST_SEND_SMS_EXPECT_MORE 26
#define RIL_REQUEST_SETUP_DATA_CALL 27
#define RIL_REQUEST_SIM_IO 28
#define RIL_REQUEST_SEND_USSD 29
#define RIL_REQUEST_CANCEL_USSD 30
#define RIL_REQUEST_GET_CLIR 31
#define RIL_REQUEST_SET_CLIR 32
#define RIL_REQUEST_QUERY_CALL_FORWARD_STATUS 33
#define RIL_REQUEST_SET_CALL_FORWARD 34
#define RIL_REQUEST_QUERY_CALL_WAITING 35
#define RIL_REQUEST_SET_CALL_WAITING 36
#define RIL_REQUEST_SMS_ACKNOWLEDGE  37
#define RIL_REQUEST_GET_IMEI 38
#define RIL_REQUEST_GET_IMEISV 39
#define RIL_REQUEST_ANSWER 40
#define RIL_REQUEST_DEACTIVATE_DATA_CALL 41
#define RIL_REQUEST_QUERY_FACILITY_LOCK 42
#define RIL_REQUEST_SET_FACILITY_LOCK 43
#define RIL_REQUEST_CHANGE_BARRING_PASSWORD 44
#define RIL_REQUEST_QUERY_NETWORK_SELECTION_MODE 45
#define RIL_REQUEST_SET_NETWORK_SELECTION_AUTOMATIC 46
#define RIL_REQUEST_SET_NETWORK_SELECTION_MANUAL 47
#define RIL_REQUEST_QUERY_AVAILABLE_NETWORKS 48
#define RIL_REQUEST_DTMF_START 49
#define RIL_REQUEST_DTMF_STOP 50
#define RIL_REQUEST_BASEBAND_VERSION 51
#define RIL_REQUEST_SEPARATE_CONNECTION 52
#define RIL_REQUEST_SET_MUTE 53
#define RIL_REQUEST_GET_MUTE 54
#define RIL_REQUEST_QUERY_CLIP 55
#define RIL_REQUEST_LAST_DATA_CALL_FAIL_CAUSE 56
#define RIL_REQUEST_DATA_CALL_LIST 57
#define RIL_REQUEST_RESET_RADIO 58
#define RIL_REQUEST_OEM_HOOK_RAW 59
#define RIL_REQUEST_OEM_HOOK_STRINGS 60
#define RIL_REQUEST_SCREEN_STATE 61
#define RIL_REQUEST_SET_SUPP_SVC_NOTIFICATION 62
#define RIL_REQUEST_WRITE_SMS_TO_SIM 63
#define RIL_REQUEST_DELETE_SMS_ON_SIM 64
#define RIL_REQUEST_SET_BAND_MODE 65
#define RIL_REQUEST_QUERY_AVAILABLE_BAND_MODE 66
#define RIL_REQUEST_STK_GET_PROFILE 67
#define RIL_REQUEST_STK_SET_PROFILE 68
#define RIL_REQUEST_STK_SEND_ENVELOPE_COMMAND 69
#define RIL_REQUEST_STK_SEND_TERMINAL_RESPONSE 70
#define RIL_REQUEST_STK_HANDLE_CALL_SETUP_REQUESTED_FROM_SIM 71
#define RIL_REQUEST_EXPLICIT_CALL_TRANSFER 72
#define RIL_REQUEST_SET_PREFERRED_NETWORK_TYPE 73
#define RIL_REQUEST_GET_PREFERRED_NETWORK_TYPE 74
#define RIL_REQUEST_GET_NEIGHBORING_CELL_IDS 75
#define RIL_REQUEST_SET_LOCATION_UPDATES 76
#define RIL_REQUEST_CDMA_SET_SUBSCRIPTION_SOURCE 77
#define RIL_REQUEST_CDMA_SET_ROAMING_PREFERENCE 78
#define RIL_REQUEST_CDMA_QUERY_ROAMING_PREFERENCE 79
#define RIL_REQUEST_SET_TTY_MODE 80
#define RIL_REQUEST_QUERY_TTY_MODE 81
#define RIL_REQUEST_CDMA_SET_PREFERRED_VOICE_PRIVACY_MODE 82
#define RIL_REQUEST_CDMA_QUERY_PREFERRED_VOICE_PRIVACY_MODE 83
#define RIL_REQUEST_CDMA_FLASH 84
#define RIL_REQUEST_CDMA_BURST_DTMF 85
#define RIL_REQUEST_CDMA_VALIDATE_AND_WRITE_AKEY 86
#define RIL_REQUEST_CDMA_SEND_SMS 87
#define RIL_REQUEST_CDMA_SMS_ACKNOWLEDGE 88
#define RIL_REQUEST_GSM_GET_BROADCAST_SMS_CONFIG 89
#define RIL_REQUEST_GSM_SET_BROADCAST_SMS_CONFIG 90
#define RIL_REQUEST_GSM_SMS_BROADCAST_ACTIVATION 91
#define RIL_REQUEST_CDMA_GET_BROADCAST_SMS_CONFIG 92
#define RIL_REQUEST_CDMA_SET_BROADCAST_SMS_CONFIG 93
#define RIL_REQUEST_CDMA_SMS_BROADCAST_ACTIVATION 94
#define RIL_REQUEST_CDMA_SUBSCRIPTION 95
#define RIL_REQUEST_CDMA_WRITE_SMS_TO_RUIM 96
#define RIL_REQUEST_CDMA_DELETE_SMS_ON_RUIM 97
#define RIL_REQUEST_DEVICE_IDENTITY 98
#define RIL_REQUEST_EXIT_EMERGENCY_CALLBACK_MODE 99
#define RIL_REQUEST_GET_SMSC_ADDRESS 100
#define RIL_REQUEST_SET_SMSC_ADDRESS 101
#define RIL_REQUEST_REPORT_SMS_MEMORY_STATUS 102
#define RIL_REQUEST_REPORT_STK_SERVICE_IS_RUNNING 103
#define RIL_REQUEST_CDMA_GET_SUBSCRIPTION_SOURCE 104
#define RIL_REQUEST_ISIM_AUTHENTICATION 105
#define RIL_REQUEST_ACKNOWLEDGE_INCOMING_GSM_SMS_WITH_PDU 106
#define RIL_REQUEST_STK_SEND_ENVELOPE_WITH_STATUS 107
#define RIL_REQUEST_VOICE_RADIO_TECH 108
#define RIL_REQUEST_GET_CELL_INFO_LIST 109
#define RIL_REQUEST_SET_UNSOL_CELL_INFO_LIST_RATE 110
#define RIL_REQUEST_SET_INITIAL_ATTACH_APN 111
#define RIL_REQUEST_IMS_REGISTRATION_STATE 112
#define RIL_REQUEST_IMS_SEND_SMS 113
#define RIL_REQUEST_SIM_TRANSMIT_APDU_BASIC 114
#define RIL_REQUEST_SIM_OPEN_CHANNEL 115
#define RIL_REQUEST_SIM_CLOSE_CHANNEL 116
#define RIL_REQUEST_SIM_TRANSMIT_APDU_CHANNEL 117
#define RIL_REQUEST_NV_READ_ITEM 118
#define RIL_REQUEST_NV_WRITE_ITEM 119
#define RIL_REQUEST_NV_WRITE_CDMA_PRL 120
#define RIL_REQUEST_NV_RESET_CONFIG 121
/* SET_UICC_SUBSCRIPTION was 115 in v9 and 122 in v10 and later */
#define RIL_REQUEST_V9_SET_UICC_SUBSCRIPTION  115
#define RIL_REQUEST_SET_UICC_SUBSCRIPTION  122
#define RIL_REQUEST_ALLOW_DATA  123
#define RIL_REQUEST_GET_HARDWARE_CONFIG 124
#define RIL_REQUEST_SIM_AUTHENTICATION 125
#define RIL_REQUEST_GET_DC_RT_INFO 126
#define RIL_REQUEST_SET_DC_RT_INFO_RATE 127
#define RIL_REQUEST_SET_DATA_PROFILE 128
#define RIL_REQUEST_SHUTDOWN 129
#define RIL_REQUEST_GET_RADIO_CAPABILITY 130
#define RIL_REQUEST_SET_RADIO_CAPABILITY 131

/* RIL Unsolicited Messages, rild -> ofono */
#define RIL_UNSOL_RESPONSE_BASE 1000
#define RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED 1000
#define RIL_UNSOL_RESPONSE_CALL_STATE_CHANGED 1001
#define RIL_UNSOL_RESPONSE_VOICE_NETWORK_STATE_CHANGED 1002
#define RIL_UNSOL_RESPONSE_NEW_SMS 1003
#define RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT 1004
#define RIL_UNSOL_RESPONSE_NEW_SMS_ON_SIM 1005
#define RIL_UNSOL_ON_USSD 1006
#define RIL_UNSOL_ON_USSD_REQUEST 1007
#define RIL_UNSOL_NITZ_TIME_RECEIVED  1008
#define RIL_UNSOL_SIGNAL_STRENGTH  1009
#define RIL_UNSOL_DATA_CALL_LIST_CHANGED 1010
#define RIL_UNSOL_SUPP_SVC_NOTIFICATION 1011
#define RIL_UNSOL_STK_SESSION_END 1012
#define RIL_UNSOL_STK_PROACTIVE_COMMAND 1013
#define RIL_UNSOL_STK_EVENT_NOTIFY 1014
#define RIL_UNSOL_STK_CALL_SETUP 1015
#define RIL_UNSOL_SIM_SMS_STORAGE_FULL 1016
#define RIL_UNSOL_SIM_REFRESH 1017
#define RIL_UNSOL_CALL_RING 1018
#define RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED 1019
#define RIL_UNSOL_RESPONSE_CDMA_NEW_SMS 1020
#define RIL_UNSOL_RESPONSE_NEW_BROADCAST_SMS 1021
#define RIL_UNSOL_CDMA_RUIM_SMS_STORAGE_FULL 1022
#define RIL_UNSOL_RESTRICTED_STATE_CHANGED 1023
#define RIL_UNSOL_ENTER_EMERGENCY_CALLBACK_MODE 1024
#define RIL_UNSOL_CDMA_CALL_WAITING 1025
#define RIL_UNSOL_CDMA_OTA_PROVISION_STATUS 1026
#define RIL_UNSOL_CDMA_INFO_REC 1027
#define RIL_UNSOL_OEM_HOOK_RAW 1028
#define RIL_UNSOL_RINGBACK_TONE 1029
#define RIL_UNSOL_RESEND_INCALL_MUTE 1030
#define RIL_UNSOL_CDMA_SUBSCRIPTION_SOURCE_CHANGED 1031
#define RIL_UNSOL_CDMA_PRL_CHANGED 1032
#define RIL_UNSOL_EXIT_EMERGENCY_CALLBACK_MODE 1033
#define RIL_UNSOL_RIL_CONNECTED 1034
#define RIL_UNSOL_VOICE_RADIO_TECH_CHANGED 1035
#define RIL_UNSOL_CELL_INFO_LIST 1036
#define RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED 1037
#define RIL_UNSOL_UICC_SUBSCRIPTION_STATUS_CHANGED 1038
#define RIL_UNSOL_SRVCC_STATE_NOTIFY 1039
#define RIL_UNSOL_HARDWARE_CONFIG_CHANGED 1040
#define RIL_UNSOL_DC_RT_INFO_CHANGED 1041
#define RIL_UNSOL_RADIO_CAPABILITY 1042
#define RIL_UNSOL_ON_SS 1043
#define RIL_UNSOL_STK_CC_ALPHA_NOTIFY 1044

/* A special request, ofono -> rild */
#define RIL_RESPONSE_ACKNOWLEDGEMENT 800

#ifdef __cplusplus
}
#endif

#endif /* __OFONO_RIL_CONSTANTS_H */

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 8
 * indent-tabs-mode: t
 * End:
 */
