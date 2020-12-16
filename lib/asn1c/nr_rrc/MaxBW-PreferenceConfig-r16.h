/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MaxBW_PreferenceConfig_r16_H_
#define	_MaxBW_PreferenceConfig_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16 {
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s0	= 0,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s0dot5	= 1,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s1	= 2,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s2	= 3,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s3	= 4,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s4	= 5,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s5	= 6,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s6	= 7,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s7	= 8,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s8	= 9,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s9	= 10,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s10	= 11,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s20	= 12,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_s30	= 13,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_spare2	= 14,
	MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16_spare1	= 15
} e_MaxBW_PreferenceConfig_r16__maxBW_PreferenceProhibitTimer_r16;

/* MaxBW-PreferenceConfig-r16 */
typedef struct MaxBW_PreferenceConfig_r16 {
	long	 maxBW_PreferenceProhibitTimer_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MaxBW_PreferenceConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxBW_PreferenceProhibitTimer_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MaxBW_PreferenceConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MaxBW_PreferenceConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MaxBW_PreferenceConfig_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MaxBW_PreferenceConfig_r16_H_ */
#include "asn_internal.h"