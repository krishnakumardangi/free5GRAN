/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_AreaConfiguration_r16_H_
#define	_AreaConfiguration_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AreaConfig-r16.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqTargetInfo_r16;

/* AreaConfiguration-r16 */
typedef struct AreaConfiguration_r16 {
	AreaConfig_r16_t	 areaConfig_r16;
	struct AreaConfiguration_r16__interFreqTargetList_r16 {
		A_SEQUENCE_OF(struct InterFreqTargetInfo_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqTargetList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaConfiguration_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaConfiguration_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_AreaConfiguration_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaConfiguration_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqTargetInfo-r16.h"

#endif	/* _AreaConfiguration_r16_H_ */
#include "asn_internal.h"