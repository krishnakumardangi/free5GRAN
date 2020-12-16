/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MaxMIMO_LayerPreference_r16_H_
#define	_MaxMIMO_LayerPreference_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MaxMIMO-LayerPreference-r16 */
typedef struct MaxMIMO_LayerPreference_r16 {
	struct MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR1_r16 {
		long	 reducedMIMO_LayersFR1_DL_r16;
		long	 reducedMIMO_LayersFR1_UL_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reducedMaxMIMO_LayersFR1_r16;
	struct MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR2_r16 {
		long	 reducedMIMO_LayersFR2_DL_r16;
		long	 reducedMIMO_LayersFR2_UL_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reducedMaxMIMO_LayersFR2_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MaxMIMO_LayerPreference_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxMIMO_LayerPreference_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MaxMIMO_LayerPreference_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MaxMIMO_LayerPreference_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MaxMIMO_LayerPreference_r16_H_ */
#include "asn_internal.h"